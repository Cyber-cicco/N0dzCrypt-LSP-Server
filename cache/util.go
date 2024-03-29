package cache

import (
	"strings"

	"github.com/Cyber-cicco/nodzcript-lsp/lsp"
)

//Gets the URL reference of a template in the backend
func GetRouteReferences(uri lsp.DocumentUri, rootUrl string) []string {

    path := strings.TrimPrefix(uri.AbsolutePath(), rootUrl)
    paths := []string{ path }

    if strings.HasSuffix(path, GetDefaultSuffix()) {
        paths = append(paths, strings.TrimSuffix(path, GetDefaultSuffix()))
    }

    return paths
}
