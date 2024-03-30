package rpc

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"
	"strconv"
)

// Encode any struct into a message that can be understood by the client
func EncodeMessage(msg any) (string, error) {
	content, err := json.Marshal(msg)
	if err != nil {
		return "", err
	}
	return fmt.Sprintf("Content-Length: %d\r\n\r\n%s", len(content), content), nil
}

// Func to determine at which point of the scan a sing message should be returned.
// You should get the content length header, + the 4 bytes of the separator, + the
// content lenght of bytes.
func SplitFunc(data []byte, atEOF bool) (advance int, token []byte, err error) {
	header, content, found := bytes.Cut(data, []byte{'\r', '\n', '\r', '\n'})

	if !found {
		return 0, nil, nil
	}

	contentLenBytes := header[16:]
	contentLength, err := strconv.Atoi(string(contentLenBytes))

	if err != nil {
		return 0, nil, err
	}

	if len(content) < contentLength {
		return 0, nil, nil
	}

	totalLength := len(header) + 4 + contentLength
	return totalLength, data[:totalLength], nil
}

// Get the content of the message as deserializable JSON, and the method type
// from a standard LSP client message.
func DecodeMessage(msg []byte) (string, []byte, error) {
	header, content, found := bytes.Cut(msg, []byte{'\r', '\n', '\r', '\n'})

	if !found {
		return "", nil, errors.New("Message header not found")
	}

	contentLenBytes := header[16:]
	contentLength, err := strconv.Atoi(string(contentLenBytes))

	if err != nil {
		return "", nil, err
	}

	var baseMessage BaseMessage

	err = json.Unmarshal(content[:contentLength], &baseMessage)
	if err != nil {
		return "", nil, err
	}
	return baseMessage.Method, content[:contentLength], nil
}
