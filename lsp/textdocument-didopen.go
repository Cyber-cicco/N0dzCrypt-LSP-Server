package lsp

type DidOpenTextDocumentNotification struct {
	Notification
	Params DidOpenTextDocumentationParams `json:"params"`
}

type DidOpenTextDocumentationParams struct {
	TextDocument TextDocumentItem `json:"textDocument"`
}
