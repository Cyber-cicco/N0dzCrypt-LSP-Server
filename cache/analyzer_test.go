package cache

import (
	"context"
	"testing"

	"github.com/Cyber-cicco/nodzcript-lsp/config"
)

var irrigatorContent = []byte(`
package fr.edpurolo.freelearning.page.irrigator;

import fr.eduprolo.freelearning.entity.BaseUser;
import fr.eduprolo.freelearning.repository.BaseUserRepository;
import fr.eduprolo.freelearning.security.AuthenticationInfos;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.ui.Model;

@Service
@RequiredArgsConstructor
public class RecrutementIrrigator {

    private final BaseUserRepository baseUserRepository;
    public void irrigateBaseRecrutement(AuthenticationInfos userInfos, Model model) {
        BaseUser baseUser = baseUserRepository.findById(userInfos.getId()).orElseThrow();
        model.addAttribute("user", baseUser);
    }
}
`)

var controllerContent = []byte(`
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

	tree, err := javaParser.ParseCtx(context.Background(), nil, controllerContent)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	session := Session{
		RootURL: "/home/hijokaidan/",
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

	err = assembleJavaIrrigator(javaDocument, &session, tree, controllerContent)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	if javaDocument.URLToMethods["test"] == nil {
		t.Fatalf("Didn't expect a nil result")
	}

}

func TestFindUrlForJavaPackage(t *testing.T) {

	session := Session{
		RootURL: "/home/hijokaidan/",
		NodzConf: &config.NodzcriptFile{
			JavaBack: config.JavaBack{
				RootDir: "src/main/java/",
				PagesDir: config.PageBackDir{
					RootDir:    "pages/",
					Controller: "",
					Irrigator:  "",
				},
			},
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

	imp := "fr.eduprolo.Testing"

	url := findURLOfJavaFromPackage(&session, imp)

	expected := "/home/hijokaidan/src/main/java/fr/eduprolo/Testing.java"

	if url != expected {
		t.Fatalf("Expected %s, got %s", expected, url)
	}
}

func TestFindImports(t *testing.T) {

	session := Session{
		RootURL: "/home/hijokaidan/",
		NodzConf: &config.NodzcriptFile{
			JavaBack: config.JavaBack{
				BasePackage: "fr.eduprolo.freelearning",
				RootDir:     "src/main/java/",
				PagesDir: config.PageBackDir{
					RootDir:    "pages/",
					Controller: "",
					Irrigator:  "",
				},
			},
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

	tree, err := javaParser.ParseCtx(context.Background(), nil, irrigatorContent)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	javaImports, err := findImports(&session, tree, irrigatorContent)

	if err != nil {
		t.Fatalf("Expected no error, got %s", err)
	}

	if len(javaImports) != 6 {
		t.Fatalf("Expected an array of length 6, got %d", len(javaImports))
	}

    expectedImportKind := IMP_PROJECT

	expectedClass1 := "BaseUser"
	expectedURL1 := "/home/hijokaidan/src/main/java/fr/eduprolo/freelearning/entity/BaseUser.java"

	expectedClass2 := "BaseUserRepository"
	expectedURL2 := "/home/hijokaidan/src/main/java/fr/eduprolo/freelearning/repository/BaseUserRepository.java"

	expectedClass3 := "AuthenticationInfos"
	expectedURL3 := "/home/hijokaidan/src/main/java/fr/eduprolo/freelearning/security/AuthenticationInfos.java"

	if javaImports[0].ClassIdentifier != expectedClass1 || *javaImports[0].CorrepondingURL != expectedURL1 {
		t.Fatalf("Expected class : %s\n, URL \n%s and type \n%d\n, got %s\n, %s\n and %d\n",
            expectedClass1,
            expectedURL1,
            expectedImportKind,
			javaImports[0].ClassIdentifier,
			*javaImports[0].CorrepondingURL,
			javaImports[0].ImportType,
		)
	}

	if javaImports[1].ClassIdentifier != expectedClass2 || *javaImports[1].CorrepondingURL != expectedURL2 {
		t.Fatalf("Expected class : %s\n, URL \n%s and type \n%d\n, got %s\n, %s\n and %d\n",
            expectedClass2,
            expectedURL2,
            expectedImportKind,
			javaImports[1].ClassIdentifier,
			*javaImports[1].CorrepondingURL,
			javaImports[1].ImportType,
		)
	}

	if javaImports[2].ClassIdentifier != expectedClass3 || *javaImports[2].CorrepondingURL != expectedURL3 {
		t.Fatalf("Expected class : %s\n, URL \n%s and type \n%d\n, got %s\n, %s\n and %d\n",
            expectedClass3,
            expectedURL3,
            expectedImportKind,
			javaImports[2].ClassIdentifier,
			*javaImports[2].CorrepondingURL,
			javaImports[2].ImportType,
		)
	}
}
