package main

import (
	"bufio"
	"log"
	"os"

	"github.com/Cyber-cicco/nodzcript-lsp/logging"
	"github.com/Cyber-cicco/nodzcript-lsp/rpc"
)

func main() {
    logger := logging.GetLogger("/home/hijokaidan/PC/nodzcript-lsp/logs.txt")
    logger.Println("LSP server started")
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Split(rpc.SplitFunc)

    for scanner.Scan() {
        msg := scanner.Text()
        HandleMessage(logger, msg)
    }
}


func HandleMessage(logger *log.Logger, msg any) {
    logger.Println(msg)
}
