package querier

import (
	sitter "github.com/Cyber-cicco/go-tree-sitter"
)

type matchingFunc func(node *sitter.Node) bool

// Allows for searches in a node instead of a tree.
// Recursively parses every subnodes of a given sitter node to find every child matching
// a pattern defined in a func.
func GetChildrenMatching(curr *sitter.Node, matcher matchingFunc, matched []*sitter.Node) []*sitter.Node {

	for i := 0; i < int(curr.ChildCount()); i++ {
		if matcher(curr.Child(i)) {
			matched = append(matched, curr.Child(i))
		}
		matched = GetChildrenMatching(curr.Child(i), matcher, matched)
	}
    return matched
}
