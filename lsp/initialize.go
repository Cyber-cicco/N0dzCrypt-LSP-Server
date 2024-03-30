package lsp

const (
	NO_SYNC = iota
	FULL_SYNC
	INCR_SYNC
)

type ClientCapabilities struct {
}

type TraceValue string

type WorkspaceFolder struct {
}

type ClientInfo struct {
	/**
	 * The name of the client as defined by the client.
	 */
	Name string `json:"name"`

	/**
	 * The client's version as defined by the client.
	 */
	Version string `json:"version"`
}

type InitializeRequest struct {
	Request
	Params InitializeRequestParams `json:"params"`
}

type InitializeRequestParams struct {

	//The process Id of the parent process that started the server. Is null if
	//the process has not been started by another process. If the parent
	//process is not alive then the server should exit (see exit notification)
	//its process.
	ProcessId *int `json:"processId"`

	//Information about the client
	//
	//@since 3.15.0
	//
	ClientInfo *ClientInfo `json:"clientInfo"`

	/**
	 * The locale the client is currently showing the user interface
	 * in. This must not necessarily be the locale of the operating
	 * system.
	 *
	 * Uses IETF language tags as the value's syntax
	 * (See https://en.wikipedia.org/wiki/IETF_language_tag)
	 *
	 * @since 3.16.0
	 */
	Locale *string `json:"locale"`

	/**
	 * The rootPath of the workspace. Is null
	 * if no folder is open.
	 *
	 * @deprecated in favour of `rootUri`.
	 */
	RootPath *string

	//The rootUri of the workspace. Is null if no
	//folder is open. If both `rootPath` and `rootUri` are set
	//`rootUri` wins.
	//
	//@deprecated in favour of `workspaceFolders`
	RootUri *DocumentUri `json:"rootUri"`

	/**
	  * User provided initialization options.

	  initializationOptions?: LSPAny;

	*/

	//The capabilities provided by the client (editor or tool)
	Capabilities ClientCapabilities `json:"capabilities"`

	//The initial trace setting. If omitted trace is disabled ('off').
	Trace TraceValue `json:"trace"`

	//The workspace folders configured in the client when the server starts.
	//This property is only available if the client supports workspace folders.
	//It can be `null` if the client supports workspace folders but none are
	//configured.
	//
	//@since 3.6.0
	//
	WorkspaceFolders []WorkspaceFolder `json:"workspaceFolders"`
}

type InitializeResponse struct {
	Response
	Result InitializeResult `json:"result"`
}

type InitializeResult struct {
	Capabilities ServerCapabilities `json:"capabilities"`
	ServerInfo   *ServerInfo        `json:"serverInfo"`
}

type ServerInfo struct {
	Name    string `json:"name"`
	Version string `json:"version"`
}

type ServerCapabilities struct {
	TextDocumentSync int `json:"textDocumentSync"`
}

func NewInitializeResponse(id int) InitializeResponse {
	return InitializeResponse{
		Response: Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: InitializeResult{
			Capabilities: ServerCapabilities{
				TextDocumentSync: FULL_SYNC,
			},
			ServerInfo: &ServerInfo{
				Name:    "nodzcript-lsp",
				Version: "0.1.0",
			},
		},
	}
}
