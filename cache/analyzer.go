package cache

import (
	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/go-tree-sitter/java"
	"github.com/Cyber-cicco/go-tree-sitter/thymeleaf"
	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

var thLang *sitter.Language
var javaLang *sitter.Language
var thParser *sitter.Parser
var javaParser *sitter.Parser

func init() {
    javaLang = java.GetLanguage()
    javaParser = sitter.NewParser()
    javaParser.SetLanguage(javaLang)
    thLang = thymeleaf.GetLanguage()
    thParser = sitter.NewParser()
    thParser.SetLanguage(thLang)
}

func initContextProviders(nodzGraph NodzGraph, uri lsp.DocumentUri) {
}
