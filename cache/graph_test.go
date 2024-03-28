package cache

import (
	"testing"

	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

func TestInitialization(t *testing.T) {
    uri1 := "file:///home/hijokaidan/PC/golang/nodzcript-lsp/test-env/src/main/resources/templates/page/home/home.html"
    uri2 := "file:///home/hijokaidan/PC/golang/nodzcript-lsp/test.html"
    textDoc1 := `
<section class="flex flex-col h-full w-full items-center justify-center bg-gradient-to-r from-blue-950 to-gray-900">
    <img th:insert="/svg/n0dzCrypt :: svg('270', '270')">
    <h1 class="text-5xl text-white font-bold">N0dzCrypt App</h1>
    <article class="flex flex-col text-center p-10 gap-5 text-white w-full md:w-2/3 text-lg justify-center lg:w-1/2">
      <h2 class="font-bold text-3xl p-2">Congratulations !!!</h2>
      <div>
        <p> You juste typed a command in the terminal and some random bullshit appeared in your browser.</p>
        <p> Based on where I'm at in this project, I guess you also had to do a bit of debugging, so actually yeah congrats on making it work.</p>
      </div>
      <div>
        <p> You probably don't want any of it to hit production, so you better go to see
          <a class="text-gray-400" href="https://github.com/Cyber-cicco/N0dzCrypt/wiki"> the docs</a>
          and learn how to get rid of it asap.
        </p>
      </div>
      <div>
        Although there is an automatically created profile page that got done, you could keep that, even though there is
        not much to it.
      </div>
    </article>
</section>
    `
    textDoc2 := ` 
<div class="bonjour">bonjour</div>
<div id="test"></div>
    `
    _, err := NewGraph(lsp.DocumentUri(uri1), []byte(textDoc1))

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    _, err = NewGraph(lsp.DocumentUri(uri2), []byte(textDoc2))

    if err == nil {
        t.Fatal("Got no error while it was supposed to fail")
    }
    
}

func TestGetRouteReferences(t *testing.T) {
    uri1 := "file:///home/hijokaidan/PC/golang/nodzcript-lsp/test-env/src/main/resources/templates/page/home/home.html"
    textDoc1 := ` 
<div class="bonjour">bonjour</div>
<div id="test"></div>
    `
    graph1, err := NewGraph(lsp.DocumentUri(uri1), []byte(textDoc1))

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    expectedRoute1 := "src/main/resources/templates/page/home/home.html" 
    expectedRoute2 := "src/main/resources/templates/page/home/home" 

    route := graph1.GetRouteReferences(lsp.DocumentUri(uri1))

    if route[0] != expectedRoute1 {
        t.Fatalf("Expected %s, got %s", expectedRoute1, route[0])
    }
    if route[1] != expectedRoute2 {
        t.Fatalf("Expected %s, got %s", expectedRoute2, route[1])
    }
}

//TODO : change this test to a mock, the method it is testing is used as an internal of NewGraph()
func TestJavaDocExistsAndUpToDate(t *testing.T) {

    uri1 := "file:///home/hijokaidan/PC/golang/nodzcript-lsp/test-env/src/main/resources/templates/page/home/home.html"
    textDoc1 := ` 
<div class="bonjour">bonjour</div>
<div id="test"></div>
    `
    javaFileURI :=  "/home/hijokaidan/PC/golang/nodzcript-lsp/test-env/src/main/java/fr/edpurolo/freelearning/page/AboutController.java"

    graph1, err := NewGraph(lsp.DocumentUri(uri1), []byte(textDoc1))

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    _, exists, upToDate, err := javaDocExistsAndUpToDate(&graph1, javaFileURI)

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    if exists || upToDate {
        t.Fatalf("Check shouldn't be true")

    }

    sum := [20]byte{169, 164, 167, 201, 207, 213, 86, 80, 23, 58, 253, 242, 100, 12, 33, 70, 251, 134, 228, 126}
    graph1.JavaNodes[javaFileURI] = &JavaDocument{
        ShaSum: sum,
    }

    _, exists, upToDate, err = javaDocExistsAndUpToDate(&graph1, javaFileURI)

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    if !exists || !upToDate {
        t.Fatalf("Check should be true")
    }

    sum = [20]byte{168, 164, 167, 201, 207, 213, 86, 80, 23, 58, 253, 242, 100, 12, 33, 70, 251, 134, 228, 126}
    graph1.JavaNodes[javaFileURI] = &JavaDocument{
        ShaSum: sum,
    }

    _, exists, upToDate, err = javaDocExistsAndUpToDate(&graph1, javaFileURI)

    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }

    if !exists || upToDate {
        t.Fatalf("Check shouldn't be true")
    }

}
