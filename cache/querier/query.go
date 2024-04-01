package querier

import (
	sitter "github.com/Cyber-cicco/go-tree-sitter"
)

type Query struct {
    Query []byte
    Content []byte
    Lang *sitter.Language
    Tree *sitter.Tree
}

func (q *Query) ExecuteQuery(captureFunc func(c *sitter.QueryCapture) error) error {

    query, err := sitter.NewQuery(q.Query, q.Lang)

    if err != nil {
        return err
    }

    qc := sitter.NewQueryCursor()
    qc.Exec(query, q.Tree.RootNode())

    for {

        m, ok := qc.NextMatch()

        if !ok {
            break
        }

        m = qc.FilterPredicates(m, q.Content)

        for _, c := range m.Captures {
            err := captureFunc(&c)

            if err != nil {
                return err
            }
        }
    }

    return nil 
}
