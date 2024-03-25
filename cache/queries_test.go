package cache

import (
	"context"
	"testing"
)

func TestJavaQuery(t *testing.T) {
    sourceCode := `
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
    `
    tree, err := javaParser.ParseCtx(context.Background(), nil, []byte(sourceCode))

    if err != nil {
        t.Fatalf("Shouldn't have had an error at init, but got : %s", err)
    }

    queryRouteFromTree([]string{}, tree, []byte(sourceCode))
}
