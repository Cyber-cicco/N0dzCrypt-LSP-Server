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
func ExtractRoutes(session *Session, routeReferences []string, routePath string) (map[string]string, error) {

    var tree *sitter.Tree
    content, exists, upToDate, err := javaDocExistsAndUpToDate(session, routePath)

    if err != nil {
        return nil, errors.New("Routes.java was not found")
    }

    if !exists {
        session.addJavaDocToNodes(nil, routePath, content)
    }

    if exists && !upToDate {
        session.addJavaDocToNodes(session.JavaNodes[routePath].Content, routePath, content)
    }

    tree = session.JavaNodes[routePath].Content

    routeMap, err := queryRoutesFromTree(session, tree, content)

    if err != nil {
        return nil, err
    }

    return routeMap, nil
}

//Get in the route folder, and give back the name of the route variable corresponding to the name of the route.
func queryRoutesFromTree(graph *Session, tree *sitter.Tree, content []byte) (map[string]string, error) {

    routes := make(map[string]string)

    q := querier.Query{
    	Query:   []byte(Q_JAVA_STRING),
    	Content: content,
    	Lang:    javaLang,
    	Tree:    tree,
    }

    err := q.ExecuteQuery(func(c *sitter.QueryCapture){
        varName := c.Node.Parent().Parent().ChildByFieldName("name").Content(content)
        url := graph.RootURL + graph.NodzConf.GetTemplateDir() + c.Node.Content(content)
        routes[varName] = url
    })

    if err != nil {
        return nil, err
    }

    return routes, nil
}
