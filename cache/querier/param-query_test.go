package querier

import "testing"

func TestGetQuery(t *testing.T) {
    content := `(
(field_declaration
    declarator: (variable_declarator
        name: (identifier)
        value: (string_literal
            (string_fragment) @fragment)))
(#match? @fragment "~param")
)`
    expected := `(
(field_declaration
    declarator: (variable_declarator
        name: (identifier)
        value: (string_literal
            (string_fragment) @fragment)))
(#match? @fragment "self")
)`
    pQuery := NewPQ(content)
    pQuery.AddValue("param", "self")
    result, err := pQuery.GetQuery()

    if err != nil {
        t.Fatalf("No error should have been raised, but got : %s", err)
    }

    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, result.Query)
    }

    pQuery = NewPQ(content)
    pQuery.AddValue("parma", "page.+")
    result, err = pQuery.GetQuery()

    if err == nil {
        t.Fatalf("Expected an error, got %s", result.Query)
    }
}
