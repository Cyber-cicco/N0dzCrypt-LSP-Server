package rpc_test

import (
	"testing"

	"github.com/Cyber-cicco/nodzcript-lsp/rpc"
)

type TestEncoding struct {
    Testing string `json:"testing"`
}

func TestEncode(t *testing.T) {
    expected := "Content-Length: 18\r\n\r\n{\"testing\":\"test\"}"
    testEncoding := TestEncoding{
        Testing: "test",
    }
    encodedMessage, err := rpc.EncodeMessage(testEncoding)
    if err != nil {
        t.Fatal("Got error from message encoding")
    }
    if encodedMessage != expected {
        t.Fatalf("expected %s, got %s", expected, encodedMessage)
    }
}

func TestDecode(t *testing.T) {
    expected := 17
    method, contentLength, err := rpc.DecodeMessage([]byte("Content-Length: 17\r\n\r\n{\"method\":\"test\"}"))
    if err != nil {
        t.Fatalf("got error")
    }
    if len(contentLength) != expected {
        t.Fatalf("Expected %d, got %d", expected, contentLength)
    }

    if method != "test" {
        t.Fatalf("Expected test, got %s", method)
    }
}
