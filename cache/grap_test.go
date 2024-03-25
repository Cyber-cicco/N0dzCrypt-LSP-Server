package cache

import (
	"fmt"
	"testing"

	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

func TestInitialization(t *testing.T) {
    uri1 := "file:///home/hijokaidan/PC/nodzcript-lsp/test-env/src/main/resources/templates/page/home/home.html"
    uri2 := "file:///home/hijokaidan/PC/nodzcript-lsp/test.html"
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
    graph1, err := NewGraph(lsp.DocumentUri(uri1), []byte(textDoc1))
    if err != nil {
        t.Fatalf("Got an error while it was supposed to be working : %s", err)
    }
    graph2, err := NewGraph(lsp.DocumentUri(uri2), []byte(textDoc2))
    if err == nil {
        t.Fatal("Got no error while it was supposed to fail")
    }
    fmt.Printf("graph1: %v\n", graph1)
    fmt.Printf("graph2: %v\n", graph2)
}
