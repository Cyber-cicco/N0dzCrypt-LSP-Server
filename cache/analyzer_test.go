package cache

import (
	"context"
	"testing"
)

func TestQueryRouteFromTree(t *testing.T) {
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
    expected := "ADR_LOGIN"
    tree, err := javaParser.ParseCtx(context.Background(), nil, content)

    if err != nil {
        t.Fatalf("Expected no error, got %s", err)
    }

    routeReferences1 := []string{"page/about/login", "page/about/login.html"}

    varName, ok, err := queryRouteFromTree(routeReferences1, tree, content)

    if err != nil {
        t.Fatalf("Expected no error, got %s", err)
    }

    if !ok {
        t.Fatalf("Found no match while there was supposed to be one")
    }

    if varName != expected {
        t.Fatalf("Expected %s, got %s", expected, varName)
    }
}
