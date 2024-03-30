package querier

import (
	"context"
	"testing"

	sitter "github.com/Cyber-cicco/go-tree-sitter"
	"github.com/Cyber-cicco/go-tree-sitter/java"
)

var lang *sitter.Language
var parser *sitter.Parser

func init() {
    parser = sitter.NewParser()
    lang = java.GetLanguage()
    parser.SetLanguage(lang)
}

func TestQuery(t *testing.T) {

    parser := sitter.NewParser()
    parser.SetLanguage(java.GetLanguage())

    content := []byte(`
package fr.edpurolo.freelearning.page;

/**
 * THIS CLASS CAN BE OVERWRITTEN BY N0DZCRYPT
 * IF YOU INTEND TO USE THE N0DZCRYPT CLI IN YOUT APP, TRY NOT TO CHANGE IT.
 *
 * Contains constants pointing to thymeleaf fragments
 */
public class Routes {

    public static final String ADR_BASE_LAYOUT = "layout/base";
    public static final String ADR_HOME = "page/home/home";
    public static final String ADR_ABOUT = "page/about/about";
    public static final String ADR_LOGIN = "page/about/login";
    public static final String ADR_FORM_ERROR = "components/form-error";
}
`)

    qb := NewQB()
    qb.
    NewSExpression("field_declaration").
        NewSExpression("modifiers").End().
        NewSExpression("variable_declarator").
            Prop("declarator").
            NewSExpression("identifier").
                Prop("name").
                End().
            NewSExpression("string_literal").
                Prop("value").
                NewSExpression("string_fragment").
                Var("fragment", qb)

    qb.NewMatcher("match").Identifier("fragment").ValueAsString("page.+")
    query := qb.Marshal()
    query.Content = content
    query.Lang = lang

    tree, err := parser.ParseCtx(context.Background(), nil, content)

    if err != nil {
        t.Fatalf("Shouldn't have had error, got %s", err)
    }

    query.Tree = tree

    captures := []*sitter.QueryCapture{}
    err = query.ExecuteQuery(func(c *sitter.QueryCapture) error {captures = append(captures, c); return nil}) 

    if err != nil {
        t.Fatalf("Shouldn't have had error, got %s", err)
    }

    if len(captures) != 3 {
        t.Fatalf("Wrong number of captures. Expected 3, got %d", len(captures))
    }
}
