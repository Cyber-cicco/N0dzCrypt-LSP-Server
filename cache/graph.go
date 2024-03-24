package cache

import (
	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
    sitter "github.com/Cyber-cicco/go-tree-sitter"
)


type THGraph struct {
    Structure NodzcriptFile 
    Nodes map[lsp.DocumentUri]THDocument
}

type THDocument struct {

    //Absolute path of the document.
    URI lsp.DocumentUri

    //The java class(es) responsible for irrigating the context variables.
    ContextProvider []JavaDocument

    //The context objects provided by the java classes.
    BaseContext []ContextObject

    //A root node with AST of the document.
    Content sitter.Node

    //Map from node to any additional context object.
    AdditionalContext map[sitter.Node]*ContextObject
}

type JavaDocument struct {
    sitter.Node
}

type ContextObject struct {
    Identifier string
    Methods []Method
    Properties []Property
}

type Method struct {

}

type Property struct  {

}

func test() {
}
