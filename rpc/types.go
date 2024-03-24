package rpc

type BaseMessage struct {
    Jsonrpc string  `json:"jsonrpc"`
    Id int `json:"id"`
    Method string `json:"method"`
}
