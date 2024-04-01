package cache

import (
	"context"
	"crypto/sha1"
	"errors"
	"strings"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/go-tree-sitter/java"
	"github.com/Cyber-cicco/go-tree-sitter/thymeleaf"
	"github.com/Cyber-cicco/nodzcript-lsp/cache/querier"
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

// Goes and check the route java file if it can find path and get back the variable name holding the path.
// Mutates graph
func ExtractRoutes(session *Session, routeReferences []string, routePath string) (map[string]string, error) {

	var tree *sitter.Tree
	content, exists, upToDate, err := javaDocExistsAndUpToDate(session, routePath)

	if err != nil {
		return nil, errors.New("Routes.java was not found, url " + routePath + " doesn't seem to exists")
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

// Get in the route folder, and give back the name of the route variable corresponding to the name of the route.
func queryRoutesFromTree(session *Session, tree *sitter.Tree, content []byte) (map[string]string, error) {

	routes := make(map[string]string)

	q := querier.Query{
		Query:   []byte(Q_JAVA_STRING),
		Content: content,
		Lang:    javaLang,
		Tree:    tree,
	}

	err := q.ExecuteQuery(func(c *sitter.QueryCapture) error {
		varName := c.Node.Parent().Parent().ChildByFieldName("name").Content(content)
		url := session.RootURL + session.NodzConf.GetTemplateDir() + c.Node.Content(content)
		routes[varName] = url
		return nil
	})

	if err != nil {
		return nil, err
	}

	return routes, nil
}

// Extracts all the information of a java file that is needed in this LSP.
func ExtractJavaDoc(session *Session, oldTree *sitter.Tree, content []byte, openedBuffer bool) (*JavaIrrigator, error) {
	tree, err := javaParser.ParseCtx(context.Background(), oldTree, content)

	javaDocument := &JavaIrrigator{
		Content:      &sitter.Tree{},
		ShaSum:       sha1.Sum(content),
		OpenBuffer:   openedBuffer,
		URLToMethods: map[string][]*IrrigatorMethod{},
	}

	if err != nil {
		return nil, err
	}

	err = assembleJavaIrrigator(javaDocument, session, tree, content)

	if err != nil {
		return nil, err
	}

	return javaDocument, nil
}

// This method does a LOT of things
//
// First of all, it checks for every method that take a Model interface/object as parameter
// It then check if it corresponds to the org.springframework.ui.Model interface.
// If it does, it checks for any use of a Routes object field access.
// If it finds one, it puts the method object in a map that has the absolute URL of the route
// Then, it check for any access to the Model.addAttribute method,
// finds the first argument string, creates a context object with it,
// and finds the type of the second argument by checking the imports of the file.
//
// If the second argument is an object, it finds it's reference in the method, then it's type.
// If it's type is infered from a method, it uses the findTypeFromMethod() function to get it's type.
// If the second argument is a method, it creates an identifier for
// that method based on it's name and the type of it's parameters.
//
// TODO : handle the case where a interface named Model has been imported from another scope than the right one.
func assembleJavaIrrigator(javaDocument *JavaIrrigator, session *Session, tree *sitter.Tree, content []byte) error {

	methodQuery := querier.Query{
		Query:   []byte(Q_JAVA_METHOD_WITH_MODEL),
		Content: content,
		Lang:    javaLang,
		Tree:    tree,
	}

    importQB := querier.NewPQ(Q_JAVA_IMPORTS)
    importQB.AddValue("basePackage", session.NodzConf.JavaBack.BasePackage + ".+;")

	importQuery, err := importQB.GetQuery()

    if err != nil {
        return err
    }

    importQuery.Lang = javaLang
    importQuery.Tree = tree
    importQuery.Content = content

    findImports(session, importQuery, content)

    err = methodQuery.ExecuteQuery(func(c *sitter.QueryCapture) error {

		if c.Node.Type() == "method_declaration" {


			method := &IrrigatorMethod{
				Objects:        []*ContextObject{},
				ReferencedURLs: []string{},
			}

			routes := findRoutesInMethod(c, content)

			for _, route := range routes {
				routeName := route.ChildByFieldName("field").Content(content)
				method.ReferencedURLs = append(method.ReferencedURLs, routeName)
				javaDocument.URLToMethods[session.Routes[routeName]] = append(javaDocument.URLToMethods[routeName], method)
			}

		}
		return nil
	})

	return err
}

func findImports(session *Session, query *querier.Query, content []byte) ([]*JavaImport, error) {
    importNodes := []*sitter.Node{}
    imports := []*JavaImport{}

    err := query.ExecuteQuery(func(c *sitter.QueryCapture) error {
        importNodes = append(importNodes, c.Node) 
        return nil
    })

    if err != nil {
        return nil, err
    }
    
    for _, impNode := range importNodes {
        imp := &JavaImport{
        	CorrepondingURL: findURLOfJavaFromPackage(session, impNode.Content(content)) ,
        	ClassIdentifier: "",
        }
        imports = append(imports, imp)
    }

    return imports, nil
}

func findURLOfJavaFromPackage(session *Session, content string) string {
    return session.RootURL + session.NodzConf.GetJavaDir() + strings.ReplaceAll(content, ".", "/") + ".java"
}

func findTypeFromVariable(javaDocument *JavaIrrigator, session *Session, varName string) {
    
}

func findModelVarName(c *sitter.QueryCapture) {

}

func findRoutesInMethod(c *sitter.QueryCapture, content []byte) []*sitter.Node {

	routesInMethod := []*sitter.Node{}
	routesInMethod = querier.GetChildrenMatching(
		c.Node,
		func(n *sitter.Node) bool {

			isField := n.Type() == "field_access"
			if !isField {
				return false
			}
			object := n.ChildByFieldName("object")

			return object.Content(content) == "Routes" && n.ChildByFieldName("field") != nil
		},
		routesInMethod)

	return routesInMethod
}
