package querier

import (
	"testing"
)

func TestBinaryExpression(t *testing.T) {
    expected := `(
(binary_expression
    (number_literal)
    (number_literal))
)`
    query := NewQB()
    query.
    NewSExpression("binary_expression").
        NewSExpression("number_literal").End().
        NewSExpression("number_literal").End().
    End()
    result := query.Marshal()
    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestNoIdentifierExpression(t *testing.T) {
    expected := `(
(binary_expression
    operator: "!="
    right: (null))
)`
    query := NewQB()
    query.
    NewSExpression("binary_expression").
        NewSExpression("").
            Prop("operator").
            Value("!=").
            End().
        NewSExpression("null").
            Prop("right").
            End().
    End()
    result := query.Marshal()
    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestParamNegation(t *testing.T) {
    expected := `(
(class_declaration
    name: (identifier) @class_name
    !type_parameters)
)`
    query := NewQB()
    query.
    NewSExpression("class_declaration").
        NewSExpression("identifier").
            Prop("name").
            Var("class_name", query).
            End().
        NewSExpression("").
            Not().
            Prop("type_parameters").
            End().
    End()
    result := query.Marshal()
    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestQuantifier(t *testing.T) {
    expected := `(
(class_declaration
    (decorator)* @the-decorator
    name: (identifier) @the-name)
)`
    query := NewQB()
    query.
    NewSExpression("class_declaration").
        NewSExpression("decorator").
            Quantifier("*").
            Var("the-decorator", query).
            End().
        NewSExpression("identifier").
            Var("the-name", query).
            Prop("name").
            End().
    End()
    result := query.Marshal()
    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestAlternation(t *testing.T) {
    expected := `(
[
    "break"
    "delete"
    "else"
    "for"
    "function"
    "if"
    "return"
    "try"
    "while"] @keyword
)`
    query := NewQB()
    query.
    NewSExpression("").
        Alternation().
        NewSExpression("").Value("break").End().
        NewSExpression("").Value("delete").End().
        NewSExpression("").Value("else").End().
        NewSExpression("").Value("for").End().
        NewSExpression("").Value("function").End().
        NewSExpression("").Value("if").End().
        NewSExpression("").Value("return").End().
        NewSExpression("").Value("try").End().
        NewSExpression("").Value("while").End().
        Var("keyword", query).
    End()

    result := query.Marshal()

    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestAnchorBefore(t *testing.T) {
    expected := `(
(array
    . (identifier) @the-element)
)`
    query := NewQB()
    query.
    NewSExpression("array").
        NewSExpression("identifier").
            AnchorBefore().
            Var("the-element", query).
            End().
    End()

    result := query.Marshal()

    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestAnchorAfter(t *testing.T) {
    expected := `(
(block
    (_) @last-expression .)
)`
    query := NewQB()
    query.
    NewSExpression("block").
        NewSExpression("_").
            Var("last-expression", query).
            AnchorAfter().
            End().
    End()

    result := query.Marshal()

    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}
func TestIfFor(t *testing.T) {
    expected := `(
(call_expression
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    field: (string_literal
        (string_value))
    (string_literal
        (string_value))) @myexpression
)`
    query := NewQB()
    i := 0
    query.
    NewSExpression("call_expression").
        If(
            i == 0,
            func(e *SExpression) {
                e.For(func() bool {return i < 10},
                func(e2 *SExpression){

                    e2.NewSExpression("string_literal").
                        If(i < 9,
                        func(e *SExpression) {e.Prop("field")},
                        ).
                        NewSExpression("string_value")
                },
                func(){i += 1})
            }).
        Var("myexpression", query).
    End()

    result := query.Marshal()

    if string(result.Query) != expected {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestMultipleChildsForGroup(t *testing.T) {
    expected := `(
(call_expression
    args: (
        (string_literal)
        (integer_literal)))
)`
    query := NewQB()
    query.
    NewSExpression("call_expression").
        NewSExpression("").
        Group().
        Prop("args").
            NewSExpression("string_literal").End().
            NewSExpression("integer_literal").End().
        End().
    End()

    result := query.Marshal()

    if expected != string(result.Query) {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}

func TestPatternMatching(t *testing.T) {
    expected := `(
(identifier) @variable.builtin
(#eq? @variable.builtin "self")
)`
    query := NewQB()
    query.
    NewSExpression("identifier").
        Var("variable.builtin", query)

    identifier, err := query.GetValue("variable.builtin")

    if err != nil {
        t.Fatalf("Expected no error, got %s", err)
    }

    query.NewMatcher("eq").Identifier(identifier).ValueAsString("self")
    result := query.Marshal()
    
    if expected != string(result.Query) {
        t.Fatalf("Expected %s, got %s", expected, string(result.Query))
    }
}
