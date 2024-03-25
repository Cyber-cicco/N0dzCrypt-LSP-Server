package main

import (
	"bufio"
	"encoding/json"
	"log"
	"os"

	"github.com/Cyber-cicco/nodzcript-lsp/cache"
	"github.com/Cyber-cicco/nodzcript-lsp/logging"
	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
	"github.com/Cyber-cicco/nodzcript-lsp/rpc"
)

var writer = os.Stdout

func main() {
    logger := logging.Logger()
    logger.Println("LSP server started")
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Split(rpc.SplitFunc)

    for scanner.Scan() {
        msg := scanner.Bytes()
        method, content, err := rpc.DecodeMessage(msg)
        if err != nil {
            logger.Printf("Error encountered : %s", err)
            continue
        }
        HandleMessage(logger, method, content)
    }
}


func HandleMessage(logger *log.Logger, method string, content []byte) {
    logger.Printf("Received message with method : %s", method)
    switch method {

    case "initialize" :

        var request lsp.InitializeRequest 
        if err := json.Unmarshal(content, &request); err != nil {
            logger.Printf("Error parsing the request : %s", err)
        }
        logger.Printf("Connected to : %s, %s", request.Params.ClientInfo.Name, request.Params.ClientInfo.Version)
        msg := lsp.NewInitializeResponse(request.ID)
        reply, err := rpc.EncodeMessage(msg)
        if err != nil {
            logger.Printf("Error parsing encoding the response : %s", err)
            break
        }
        writer.Write([]byte(reply))
        logger.Println("Sent the reply")

    case "textDocument/didOpen":
        var request lsp.DidOpenTextDocumentNotification 
        if err := json.Unmarshal(content, &request); err != nil {
            logger.Printf("Error parsing the request : %s", err)
        }
        logger.Printf("Text document URI : %s. Text document content : %s",
            request.Params.TextDocument.URI,
            request.Params.TextDocument.Text)
        graph, err := cache.NewGraph(request.Params.TextDocument.URI, []byte(request.Params.TextDocument.Text))
    }
}
