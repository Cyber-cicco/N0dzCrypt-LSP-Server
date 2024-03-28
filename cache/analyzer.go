package cache

import (
	"context"
	"errors"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/go-tree-sitter/java"
	"github.com/Cyber-cicco/go-tree-sitter/thymeleaf"
	"github.com/Cyber-cicco/tree-sitter-query-builder/querier"
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

func ParseJava(oldContent *sitter.Tree, newContent []byte) (*sitter.Tree, error) {

    return javaParser.ParseCtx(context.Background(), oldContent, newContent)
}

//Goes and check the route java file if it can find path and get back the variable name holding the path.
//Mutates graph
func ExtractRouteNameFromFile(graph *NodzGraph, routeReferences []string, routePath string) (map[VarName]URL, error) {

    var tree *sitter.Tree
    content, exists, upToDate, err := javaDocExistsAndUpToDate(graph, routePath)

    if err != nil {
        return nil, errors.New("Routes.java was not found")
    }

    if !exists {
        graph.addJavaDocToNodes(nil, routePath, content)
    }

    if exists && !upToDate {
        graph.addJavaDocToNodes(graph.JavaNodes[routePath].Content, routePath, content)
    }

    tree = graph.JavaNodes[routePath].Content

    routeMap, err := queryRoutesFromTree(graph, tree, content)

    if err != nil {
        return nil, err
    }

    return routeMap, nil
}

//Get in the route folder, and give back the name of the route variable corresponding to the name of the route.
func queryRoutesFromTree(graph *NodzGraph, tree *sitter.Tree, content []byte) (map[VarName]URL, error) {

    routes := make(map[VarName]URL)

    q := querier.Query{
    	Query:   []byte(Q_JAVA_STRING),
    	Content: content,
    	Lang:    javaLang,
    	Tree:    tree,
    }

    err := q.ExecuteQuery(func(c *sitter.QueryCapture){
        varName := VarName(c.Node.Parent().Parent().ChildByFieldName("name").Content(content))
        url := URL(graph.RootURL + graph.Structure.GetTemplateDir() + c.Node.Content(content))
        routes[varName] = url
    })

    if err != nil {
        return nil, err
    }

    return routes, nil
}
