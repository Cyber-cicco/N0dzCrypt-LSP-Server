package cache

import (
	"context"

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
    Structure *config.NodzcriptFile 
    Nodes map[lsp.DocumentUri]THDocument
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
    Content *sitter.Node

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
    sitter.Node
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

    nodzFile, err := data.GetNodzcriptFile(uri.AbsoluteDirPath())
    n.Structure = nodzFile

    if err != nil {
        return err
    }

    node, err := sitter.ParseCtx(context.Background(), text, thLang)
    thDoc := THDocument{}
    thDoc.initialize(uri, node)

    n.Nodes = make(map[lsp.DocumentUri]THDocument) 
    n.Nodes[uri] = thDoc

    return nil
}

func (t *THDocument) initialize(uri lsp.DocumentUri, rootNode *sitter.Node) {
}

//Initalizes a new graph
func NewGraph(uri lsp.DocumentUri, text []byte) (NodzGraph, error) {
    nodzGraph := NodzGraph{}
    err := nodzGraph.initialize(uri, text)
    return nodzGraph, err
}
