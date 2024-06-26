package lsp

type TextDocumentItem struct {
	/**
	 * The text document's URI.
	 */
	URI DocumentUri `json:"uri"`

	/**
	 * The text document's language identifier.
	 */
	LanguageId string `json:"languageId"`

	/**
	 * The version number of this document (it will increase after each
	 * change, including undo/redo).
	 */
	Version int `json:"version"`

	/**
	 * The content of the opened text document.
	 */
	Text string `json:"text"`
}
