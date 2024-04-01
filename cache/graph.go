package cache

import (
	"crypto/sha1"
	"os"
	"strings"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/nodzcript-lsp/config"
	"github.com/Cyber-cicco/nodzcript-lsp/data"
	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

type DocumentKind uint

type ImportType int

const (
	IMP_OTHER = iota
    IMP_PROJECT
    IMP_UTIL
    IMP_LANG
)
const (
	TH_PAGE = iota
	TH_FRAGMENT
	TH_COMPONENT
	TH_LAYOUT
	TH_SCRIPT
	TH_STYLE
)

// # A Session represents an initialized nodzcript project.
//
// It contains every necessary piece of information to provide autocompletion, diagnostics
// and code suggestions in a certain project.
type Session struct {

	//URL of the project root Directory, aka the one in which there is a nodzcript config file.
	//Ends with a slash
	//
	//The root URL servers as both the path from which you can get files
	//of the project using the nodzcript configuration file, but also
	//as the identifier of it. Every file opened under the same nodzcript
	//config file will share the same session
	RootURL string

	//Representation of the config file. Contains info on routes
	//to find certain types of file in the project.
	NodzConf *config.NodzcriptFile

	//Map of URIs of a Thymeleaf file to a Thymeleaf object containing
	//a representation of it's content as an AST, as well as context objects,
	//type definitions and fragment references.
	//Only opened files and files referenced as a fragment in an opened file
	//are kept here.
	Nodes map[string]*THDocument

	//# Map of URIs of Java files to a representation of a java irrigator.
	//
	//Every java file in the "pages" package should be parsed and have an entry
	//in this map once a thymeleaf document has been opened.
	JavaNodes map[string]*JavaIrrigator

	//# Map of URIs of Java files to a representation of a java class.
	//
    //Those are the java files that are not an irrigator but are imported as an
    //irrigator and need to be parsed because they are put as a context object.
	EntityNodes map[string]*JavaClass

	//Contains a map of the variable name to the absolute path of file
	//Allows to easily get the thymeleaf documents impacted by a
	Routes map[string]string

	FragmentURLs []string
}

// A Thymeleaf document is a mutable representation of a project file
// It contains it's updated AST, the context objects for the whole document,
// it's absolute path and a map from node to a Context Object if one is created
// in the document.
type THDocument struct {

	//Absolute path of the document.
	URI lsp.DocumentUri

	//The java class(es) responsible for irrigating the context variables.
	ContextProvider []*JavaIrrigator

	//Java documents directly referencing the route of the Thymeleaf fragment.
	Controllers []*JavaIrrigator

	//The context objects provided by the java classes.
	BaseContext []*ContextObject

	//Represents the role of the document in the nodzcript project
	DocumentKind DocumentKind

	//A root node with AST of the document.
	//Can be null if it is not an HTML file.
	//Javascript and CSS file won't use the LSP, but
	//can still be represented as fragments.
	Content *sitter.Tree

	//Map from node to any additional context object.
	AdditionalContext map[*sitter.Node]*ContextObject

	//Map of URIs to fragments of a page.
	Fragments map[lsp.DocumentUri]THDocument

	//Backend URIs with whom the document is accessible, if any
	//Should only have a value if the kind is TH_PAGE or TH_FRAGMENT
	Routes []*FragmentRoute
}

// Represents the URL with whom a fragment can be accessed.
type FragmentRoute struct {
	BaseURL      string
	Params       []ContextObject
	PathVariable []ContextObject
}

// The tree-sitter representation of the AST of a java file,
// along with infos about
type JavaIrrigator struct {

	//URL of the file
	URL string

	//Content of the java File as an AST
	Content *sitter.Tree

	//Checksum to see if the file changed since last time accessing it.
	//Is useful if you edit your files with another editor which is not using
	//the LSP (like IntelliJ Community edition)
	ShaSum [20]byte

	Imports []*JavaImport

	//Checks wether or not there is an open java buffer attached to the LSP.
	OpenBuffer bool

	//Maps the URL of the fragment pages to a list of pointer to methods belonging to this
	//JavaDocument
	URLToMethods map[string][]*IrrigatorMethod
}

// Represents informations about an import statement in java
type JavaImport struct {
	CorrepondingURL *string
	ClassIdentifier string
    ImportType ImportType
}

// Corresponds to a java file containing a type that an object can have
type JavaClass struct {

	//Content of the java File as an AST
	Content *sitter.Tree

	//URL of the file
	URL string

	//Checksum to see if the file changed since last time accessing it.
	//Is useful if you edit your files with another editor which is not using
	//the LSP (like IntelliJ Community edition)
	ShaSum [20]byte

	//Checks wether or not there is an open java buffer attached to the LSP.
	OpenBuffer bool

	Type *Type
}

type IrrigatorMethod struct {
	Objects        []*ContextObject
	ReferencedURLs []string
}

// Minimal representation of a java object
type ContextObject struct {
	Identifier string
	Type       Type
}

// Minimal representation of a java class
type Type struct {
	Identifier string
	Methods    []Method
	Properties []ContextObject
}

// Minimal representation of the metadata of a java method
type Method struct {
	ReturnType Type
	Arguments  []Type
}

// Initalizes a new Session
func NewSession(uri lsp.DocumentUri, text []byte) (*Session, error) {

	nodzFile, path, err := data.GetNodzcriptFile(uri.AbsoluteDirPath())

	if err != nil {
		return nil, err
	}

	session := &Session{
		RootURL:      path,
		NodzConf:     nodzFile,
		Nodes:        nil,
		JavaNodes:    make(map[string]*JavaIrrigator),
		Routes:       nil,
		FragmentURLs: []string{},
	}

	routesPath := path + nodzFile.GetPageBackDir() + "Routes.java"
	routeMap, err := ExtractRoutes(session, GetRouteReferences(uri, path), routesPath) //extractedRoutes

	if err != nil {
		return nil, err
	}

	session.Routes = routeMap
	err = ExtractJavaMap(session)

	return session, err
}

// Maps every java file in the page directory to it's URI and
// checksums it's content to find wether it was changed or not.
//
// If the entry of this file already existed in the context and has not been changed,
// doesn't do anything. Else, creates / updates the content of the java Document
// If the route is referenced in this document or any dependency of this document in the same
// page directory, this document is also appended to the THDocument ContextProvider array
// Session java map will be mutated here
func ExtractJavaMap(session *Session) error {

	pathOfPages := session.RootURL + session.NodzConf.GetPageBackDir()
	javaMap := make(map[string]*JavaIrrigator)

	//Recursive parsing of every java file in the pages folder
	err := data.ParseFolders(

		//Checks for java files
		func(path string) bool { return strings.HasSuffix(path, ".java") },

		//folder to parse recursively
		pathOfPages,

		//method executed when a java file is found
		func(path, filepath string) error {

			content, exists, uptoDate, err := javaDocExistsAndUpToDate(session, filepath)

			if err != nil {
				return err
			}

			if !exists {
				javaDoc, err := ExtractJavaDoc(session, nil, content, false)

				if err != nil {
					return err
				}

				javaMap[filepath] = javaDoc
			}

			if exists && !uptoDate {

			}

			return nil
		},
	)
	return err
}

// Adds a java document to the nodes of the graph.
// Mutates n
func (n *Session) addJavaDocToNodes(oldTree *sitter.Tree, path string, content []byte) error {

	node, err := ParseJava(oldTree, content)

	if err != nil {
		return err
	}

	n.JavaNodes[path] = &JavaIrrigator{
		Content:    node,
		ShaSum:     sha1.Sum(content),
		OpenBuffer: false,
	}

	return nil
}

// TODO : remplacer par une recherche des propriétés dans application.properties ou application.yml
func GetDefaultSuffix() string {

	return ".html"
}

// Check if the JavaDocument is already in the context or not, and check wether it has been changed
// If the file is opened in a vim buffer, it is assumed to be up to date, since it is updated every
// time a change is made.
func javaDocExistsAndUpToDate(n *Session, filepath string) ([]byte, bool, bool, error) {

	if n.JavaNodes[filepath] != nil && n.JavaNodes[filepath].OpenBuffer {
		return nil, true, true, nil
	}

	content, err := os.ReadFile(filepath)

	if err != nil {
		return nil, false, false, err
	}

	if n.JavaNodes[filepath] == nil {
		return content, false, false, nil
	}

	if err != nil {
		return nil, false, false, err
	}

	sum := sha1.Sum(content)

	return content, true, sum == n.JavaNodes[filepath].ShaSum, err

}
