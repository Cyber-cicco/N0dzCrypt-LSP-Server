package logging

import (
	"log"
	"os"
)

var logger *log.Logger
var filename = "/home/hijokaidan/PC/nodzcript-lsp/logs.txt"

func Logger() *log.Logger {
    if logger == nil {
        logfile, err := os.OpenFile(filename, os.O_CREATE | os.O_TRUNC | os.O_WRONLY, 0666)
        if err != nil {
            panic("couldn't open file")
        }
        logger = log.New(logfile, "[nodzcript lsp]", log.Ldate | log.Ltime | log.Lshortfile)
        return logger
    }
    return logger
}
