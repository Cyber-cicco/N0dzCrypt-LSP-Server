package querier

import (
	"bytes"
	"errors"
	"slices"
)



const (
    MATCH = "#match?"
)

type ParameterizedQuery string

//Allows for programmatic and less error prone construction of a tree sitter query.
//If you don't need dynamic construction of the query, it is recommended to use
//a string instead, since it will be more performant.
//You can still use the QueryBuilder to help you create the query, print it and
//copy paste it in your code tho.
type QueryBuilder struct {
    rootNode *SExpression
    matchers []*Matcher
    Values []string
}

//Creates a new tree sitter expression
func (q *QueryBuilder) NewSExpression(name string) *SExpression {

    newSE := SExpression{identifier: name}
    q.rootNode = &newSE

    return &newSE
}

func (q *QueryBuilder) GetValue(value string) (string, error) {

    if slices.Contains[[]string, string](q.Values, value)    {
        return value, nil
    }

    return "", errors.New("Couldn't get value")
}

//Creates a new Matcher for the query
func (q *QueryBuilder) NewMatcher(predicate string) *Matcher {

    matcher := &Matcher{predicate: predicate}
    q.matchers = append(q.matchers, matcher)

    return matcher
}

//Construct the string representation of your query
func (q *QueryBuilder) Marshal() Query {

    var b bytes.Buffer
    b.WriteString("(\n")
    marshal("", q.rootNode, &b)

    for _, m := range q.matchers {
        b.WriteString("\n(")
        m.marshal(&b)
        b.WriteString(")")
    }

    b.WriteString("\n)")

    return Query{Query: b.Bytes()}
}

//Recursive function allowing for the construction of the query
func marshal(indent string, s *SExpression, b *bytes.Buffer) *bytes.Buffer {

    b.WriteString(indent)

    if s.anchorBefore {
        b.WriteString(". ")
    }

    if s.unary != "" {
        b.WriteString(s.unary)
    }

    if s.property != "" {
        b.WriteString(s.property)
    }

    if s.alternation {
        if s.property != "" {
            b.WriteString(": ")
        }
        b.WriteString("[")
    } else if s.group {
        if s.property != "" {
            b.WriteString(": ")
        }
        b.WriteString("(")
    } else if s.identifier != "" {
        if s.property != "" {
            b.WriteString(": ")
        }
        b.WriteString("(")
        b.WriteString(s.identifier)
    } else if s.value != "" {
         if s.property != "" {
            b.WriteString(": ")
        }
        b.WriteString("\"")
        b.WriteString(s.value)
        b.WriteString("\"")
    }


    for _, child := range s.children {
        b.WriteString("\n")
        marshal(indent + "    ", child, b)
    }

    if s.alternation {
        b.WriteString("]")
    } else if s.group {
        b.WriteString(")")
    } else if s.identifier != "" {
        b.WriteString(")")
    }

    if s.quantifier != "" {
        b.WriteString(s.quantifier)
    }

    if s.variable != "" {
        b.WriteString(" ")
        b.WriteString(s.variable)
    }

    if s.anchorAfter {
        b.WriteString(" .")
    }

    return b
}

//Tree sitter expression of a syntax node
type SExpression struct {

    //If true, identifer shouldn't be set
    alternation bool

    //If true, identifier shouldn't be set
    group bool

    //If nil, means it is root node
    parent *SExpression

    unary string
    property string
    identifier string

    //If node has no name, it can match a string
    value string

    //Is the identifier of a variable that can be used when matching
    variable string
    quantifier string
    children []*SExpression
    anchorBefore bool
    anchorAfter bool
}

//Represents a query that matches if one of it's sibling exists
//if this method is called, sexpression shouldn't have identifier or value
func (e *SExpression) Alternation() *SExpression {

    e.alternation = true

    return e
}

//Represents a query that matches if all it's sibling exists
//if this method is called, sexpression shouldn't have identifier or value
func (e *SExpression) Group() *SExpression {

    e.group = true

    return e
}

//Sets an anchor after the expression
func (e *SExpression) AnchorAfter() *SExpression {

    e.anchorAfter = true

    return e
}

//Sets an anchor before the expression
func (e *SExpression) AnchorBefore() *SExpression {

    e.anchorBefore = true

    return e
}

//Allows for creation of a query by using a for loop
func (e *SExpression) For(condition func() bool, operation func (e *SExpression), termination func()) *SExpression {
    for condition() {
        operation(e)
        termination()
    }
    return e
}

//Adds a quantifier to the expression.
func (e *SExpression) Quantifier(value string) *SExpression {

    e.quantifier = value

    return e
}

//Allows for conditionnally adding a S-expression 
func (e *SExpression) If(condition bool, operation func(e *SExpression)) * SExpression {

    if condition {
        operation(e)
    }

    return e
}

//Allows for conditionnally adding a S-expression and an alternative.
func (e *SExpression) IfElse(condition bool, operation func(e *SExpression), alternative func(e *SExpression)) * SExpression {

    if condition {
        operation(e)
    } else {
        alternative(e)
    }

    return e
}

//Tells tree sitter to match an expression not matching this expression
func (s *SExpression) Not() *SExpression {

    s.unary = "!"

    return s
}

//Prefixes the expression with a property, like so "prop : (expression)"
func (s *SExpression) Prop(value string) *SExpression {

    s.property = value

    return s
}

//Identifies a node by it's value if it doesn't have a name.
func (s *SExpression) Value(value string) *SExpression {

    s.value = value

    return s
}

//Tags an expression to make it a variable you can use in the match clause.
func (s *SExpression) Var(value string, query *QueryBuilder) *SExpression {

    s.variable = "@" + value
    query.Values = append(query.Values, value)
    return s
}

//Create a child expression
func (s *SExpression) NewSExpression(name string) *SExpression {

    newSE := SExpression{identifier: name, parent: s}
    s.children = append(s.children, &newSE)
    return &newSE
}

//Get back to the parent Expression. Returns nil if it is the root node
func (s *SExpression) End() *SExpression {

    return s.parent
}

//Creates a new query builder.
func NewQB() *QueryBuilder {

    return &QueryBuilder{}
}

//Matcher appended a the end of the query if it exists
type Matcher struct {
    predicate string
    identifier string
    values []string
}

//Setter for the identifier
func (m *Matcher) Identifier(value string) *Matcher {

    m.identifier = value

    return m
}

//Simple Setter for the value
func (m *Matcher) Value(value string) *Matcher {

    m.values = append(m.values, value)

    return m
}

//Transforms the struct into a string that represents a pattern matcher in the query
func (m *Matcher) marshal(b *bytes.Buffer) {

    b.WriteString("#")
    b.WriteString(m.predicate)
    b.WriteString("? @")
    b.WriteString(m.identifier)

    for _, val := range m.values {
        b.WriteString(" ")
        b.WriteString(val)
    }
}

//Adds a value as a capture of the query.
//Means that if the string you give it doesn't start with an '@',
//it will prepend one.
func (m *Matcher) ValueAsCapture(value string) *Matcher {

    if len(value) > 0 && value[0] == '@' {
        m.values = append(m.values, value)
        return m
    }

    m.values = append(m.values, "@" + value)

    return m
}

//Adds a value as a string to match with the predicate
//Means that it will append a '"' at the start and end of your value
func (m *Matcher) ValueAsString(value string) *Matcher {

    m.values = append(m.values, `"` + value + `"`)

    return m
}
