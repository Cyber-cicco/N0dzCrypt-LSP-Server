package cache

import (
	"context"
	"errors"
	"fmt"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/go-tree-sitter/java"
	"github.com/Cyber-cicco/go-tree-sitter/thymeleaf"
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
func ExtractRouteNameFromFile(graph *NodzGraph, routeReferences []string, routePath string) (string, error) {

    var tree *sitter.Tree
    content, exists, upToDate, err := javaDocExistsAndUpToDate(graph, routePath)

    if err != nil {
        return "", errors.New("Routes.java was not found")
    }

    if !exists {
        graph.addJavaDocToNodes(nil, routePath, content)
    }

    if exists && !upToDate {
        graph.addJavaDocToNodes(graph.JavaNodes[routePath].Content, routePath, content)
    }

    tree = graph.JavaNodes[routePath].Content

    queryRouteFromTree(routeReferences, tree, content)

    return "", nil
}

func queryRouteFromTree(routeReferences []string, tree *sitter.Tree, content []byte) (string, error) {

    q, err := sitter.NewQuery([]byte(Q_JAVA_STRING), javaLang)

    if err != nil {
        return "", err
    }

    qc := sitter.NewQueryCursor()
    qc.Exec(q, tree.RootNode())

    for {

        m, ok := qc.NextMatch()

        if !ok {
            break
        }

        m = qc.FilterPredicates(m, content)

        for _, c := range m.Captures {
            fmt.Println(c.Node.Content(content))
        }
    }

    return "", nil
}
