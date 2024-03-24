package logging

import (
	"log"
	"os"
)

//TODO : implement a better logger once it is needed
func GetLogger(filename string) *log.Logger {
    logfile, err := os.OpenFile(filename, os.O_CREATE | os.O_TRUNC | os.O_WRONLY, 0666)
    if err != nil {
        panic("couldn't open file")
    }
    return log.New(logfile, "[nodzcript lsp]", log.Ldate | log.Ltime | log.Lshortfile)
}
