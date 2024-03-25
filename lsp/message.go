package lsp

import "strings"

type DocumentUri string

func (d DocumentUri) Raw() string {
    return string(d)
}

func (d DocumentUri) AbsoluteDirPath() string {
    return strings.TrimPrefix(d.GetDirectory(), "file://")
}

func (d DocumentUri) AbsolutePath() string {
    return strings.TrimPrefix(d.Raw(), "file://")
}

func (d DocumentUri) GetDirectory() string {
    idx := -1
    for i, b := range d {
        if b == '/' {
            idx = i
        }
    }
    if idx == -1 {
        return "/"
    }
    return d.Raw()[:idx]
}
type Request struct {
    RPC string `json:"jsonrpc"`
    ID int `json:"id"`
    Method string `json:"method"`

    //Params
}

type Response struct {
    RPC string `json:"jsonrpc"`
    ID *int `json:"id,omitempty"`

    //Result | error
}

type Notification struct {
    RPC string `json:"jsonrpc"`
    Method string `json:"method"`
}
