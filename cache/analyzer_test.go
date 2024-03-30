package cache

import (
	"context"
	"testing"

	"github.com/Cyber-cicco/nodzcript-lsp/config"
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
	tree, err := javaParser.ParseCtx(context.Background(), nil, content)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	nodzGraph := Session{
		RootURL: "jesapelroot/",
		NodzConf: &config.NodzcriptFile{
			Resources: config.Resources{
				RootDir: "resources/",
				Templates: config.FrontTemplates{
					RootDir: "templates/",
				},
				Static: config.Static{},
			},
		},
	}

	varName, err := queryRoutesFromTree(&nodzGraph, tree, content)
	adrHome := varName["ADR_HOME"]

	if adrHome != "jesapelroot/resources/templates/page/home/home" {
		t.Fatalf("Expected jesapelroot/resources/templates/page/home/home got %s", adrHome)
	}
}

func TestQueryMethodsFromJavaFile(t *testing.T) {

	content := []byte(`
package fr.edpurolo.freelearning.page;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import lombok.RequiredArgsConstructor;

@Controller
@RequiredArgsConstructor
@RequestMapping("/home")
public class HomeController {

    @GetMapping
    public String getHome(Model model) {
        model.addAttribute("routerOutlet", Routes.ADR_HOME);
        return Routes.ADR_BASE_LAYOUT;
    }

    @GetMapping("/partial")
    public String getHomePart(Model model) {
        return Routes.ADR_HOME;
    }

    public String nothingToSeeHere(Mdoel model) {
        return yomama
    }
}

`)
	tree, err := javaParser.ParseCtx(context.Background(), nil, content)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	session := Session{
		RootURL: "jesapelroot/",
		NodzConf: &config.NodzcriptFile{
			Resources: config.Resources{
				RootDir: "resources/",
				Templates: config.FrontTemplates{
					RootDir: "templates/",
				},
				Static: config.Static{}}},

		Nodes:        map[string]*THDocument{},
		JavaNodes:    map[string]*JavaIrrigator{},
		Routes:       map[string]string{},
		FragmentURLs: []string{},
	}

    session.Routes["ADR_HOME"] = "test"

	javaDocument := &JavaIrrigator{
		URL:          "",
		Content:      tree,
		ShaSum:       [20]byte{},
		OpenBuffer:   false,
		URLToMethods: map[string][]*IrrigatorMethod{},
	}

	err = irrigateJavaDoc(javaDocument, &session, tree, content)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	if javaDocument.URLToMethods["test"] == nil {
		t.Fatalf("Didn't expect a nil result")
	}

}
