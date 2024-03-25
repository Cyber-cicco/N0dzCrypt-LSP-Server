package cache

import (
	"context"
	"crypto/sha1"
	"os"
	"strings"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/nodzcript-lsp/config"
	"github.com/Cyber-cicco/nodzcript-lsp/data"
	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

type DocumentKind uint

const (
    TH_PAGE = iota
    TH_FRAGMENT
    TH_COMPONENT
    TH_LAYOUT
    TH_SCRIPT
    TH_STYLE
)

//A Graph represents a nodzcript project.
//URIs are mapped to document nodes.
type NodzGraph struct {

    //URL of the project root Directory. Ends with a slash
    RootURL string
    Structure *config.NodzcriptFile 
    Nodes map[string]*THDocument
    JavaNodes map[string]*JavaDocument
}

//A Thymeleaf document is a mutable representation of a project file
//It contains it's updated AST, the context objects for the whole document,
//it's absolute path and a map from node to a Context Object if one is created
//in the document.
type THDocument struct {

    //Absolute path of the document.
    URI lsp.DocumentUri

    //The java class(es) responsible for irrigating the context variables.
    ContextProvider []*JavaDocument

    //Java documents referencing the route of the Thymeleaf fragment.
    Controllers []*JavaDocument

    //The context objects provided by the java classes.
    BaseContext []*JavaObject

    //Represents the role of the document in the nodzcript project
    DocumentKind DocumentKind

    //A root node with AST of the document.
    //Can be null if it is not an HTML file.
    //Javascript and CSS file won't use the LSP, but
    //can still be represented as fragments.
    Content *sitter.Tree

    //Map from node to any additional context object.
    AdditionalContext map[*sitter.Node]*JavaObject

    //Map of URIs to fragments of a page.
    Fragments map[lsp.DocumentUri]THDocument

    //Backend URIs with whom the document is accessible, if any
    //Should only have a value if the kind is TH_PAGE or TH_FRAGMENT
    Routes []*FragmentRoute
}

//Represents the URL with whom a fragment can be accessed.
type FragmentRoute struct {
    BaseURL string
    Params []JavaObject
    PathVariable []JavaObject
}

//The tree-sitter representation of the AST of a java file
type JavaDocument struct {

    //Content of the java File as an AST
    Content *sitter.Tree

    //Checksum to see if the file changed since last time accessing it.
    //Is useful if you edit your files with another editor which is not using
    //the LSP (like IntelliJ Community edition)
    ShaSum [20]byte

    //Checks wether or not there is an open java buffer attached to the LSP.
    OpenBuffer bool
}

//Minimal representation of a java object
type JavaObject struct {
    Identifier string
    Type Type
}

//Minimal representation of a java class
type Type struct {
    Identifier string
    Methods []Method
    Properties []JavaObject
}

//Minimal representation of the metadata of a java method
type Method struct {
    ReturnType Type
    Arguments []Type
}

//Creates a new Graph from a Document URI
//Should only be called from the New() method
func (n *NodzGraph) initialize(uri lsp.DocumentUri, text []byte) error {

    n.Nodes = make(map[string]*THDocument) 
    n.JavaNodes = make(map[string]*JavaDocument) 
    nodzFile, path, err := data.GetNodzcriptFile(uri.AbsoluteDirPath())
    n.RootURL = path + "/"
    n.Structure = nodzFile

    if err != nil {
        return err
    }

    thDoc := THDocument{}
    thDoc.initialize(n, uri, text)

    n.Nodes[uri.AbsolutePath()] = &thDoc

    return nil
}

func (t *THDocument) initialize(graph *NodzGraph, uri lsp.DocumentUri, text []byte) {

    t.URI = uri
    var err error

    t.ContextProvider, err = graph.initJavaNodes(t) 
    _, err = thParser.ParseCtx(context.Background(), nil, text)
    _ = THDocument{}

    if err != nil {

    }
}


//Initalizes a new graph
func NewGraph(uri lsp.DocumentUri, text []byte) (NodzGraph, error) {

    nodzGraph := NodzGraph{}
    err := nodzGraph.initialize(uri, text)
    return nodzGraph, err
}

//Gets the URL reference of a template in the backend
func (n *NodzGraph) GetRouteReferences(uri lsp.DocumentUri) []string {

    path := strings.TrimPrefix(uri.AbsolutePath(), n.RootURL)
    paths := []string{ path }

    if strings.HasSuffix(path, GetDefaultSuffix()) {
        paths = append(paths, strings.TrimSuffix(path, GetDefaultSuffix()))
    }

    return paths
}

//When opening a file, first checks the Routes file to find a Route corresponding to the template
//URL. 
//Then maps every java file in the page directory to it's URI and 
//checksums it's content to find wether it was changed or not. 
//If the entry of this file already existed in the context and has not been changed,
// doesn't do anything. Else, creates / updates the content of the java Document
//If the route is referenced in this document or any dependency of this document in the same
//page directory, this document is also appended to the THDocument ContextProvider array
//Mutates n and t
func (n *NodzGraph) initJavaNodes(t *THDocument) ([]*JavaDocument, error) {

    routePath := n.RootURL + n.Structure.GetPageBackDir() + "Routes.java"
    _, err := ExtractRouteNameFromFile(n, n.GetRouteReferences(t.URI), routePath)  //extractedRoutes

    routeReferences := []*JavaDocument{}
    pathOfPages :=  n.RootURL + n.Structure.GetPageBackDir()

    err = data.ParseFolders(func(path string) bool{
        return strings.HasSuffix(path, ".java")
    },
    pathOfPages,
    func(path, filepath string) error {

        content, exists, upToDate, err := javaDocExistsAndUpToDate(n, filepath)

        if  err != nil {
            return err
        }

        if !exists {

            node, err := ParseJava(nil, content)
            
            if err != nil {
                return err
            }

            n.JavaNodes[filepath] = &JavaDocument{
            	Content:    node,
            	ShaSum:     sha1.Sum(content),
            	OpenBuffer: false,
            }

        }

        if exists && !upToDate {

        }

        return nil
    })

    if err != nil {
        return nil, err
    }

    return routeReferences, nil
}

//Adds a java document to the nodes of the graph.
//Mutates n
func (n *NodzGraph) addJavaDocToNodes(oldTree *sitter.Tree, path string, content []byte) error {

        node, err := ParseJava(oldTree, content)
        
        if err != nil {
            return err
        }

        n.JavaNodes[path] = &JavaDocument{
            Content:    node,
            ShaSum:     sha1.Sum(content),
            OpenBuffer: false,
        }

        return nil
}

//TODO : remplacer par une recherche des propriétés dans application.properties ou application.yml
func GetDefaultSuffix() string {

    return ".html"
}

//Check if the JavaDocument is already in the context or not, and check wether it has been changed 
//If the file is opened in a vim buffer, it is assumed to be up to date, since it is updated every
//time a change is made.
func javaDocExistsAndUpToDate(n *NodzGraph, filepath string) ([]byte, bool, bool, error) {

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

