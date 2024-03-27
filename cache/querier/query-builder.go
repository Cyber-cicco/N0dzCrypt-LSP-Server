package querier

import "bytes"



const (
    MATCH = "#match?"
)

type MATCH_TYPE string

type ParameterizedQuery string

//Allows for programmatic and less error prone construction of a tree sitter query.
//If you don't need dynamic construction of the query, it is recommended to use
//a string instead, since it will be more performant.
//You can still use the QueryBuilder to help you create the query, print it and
//copy paste it in your code tho.
type QueryBuilder struct {
    rootNode *SExpression
    matcher *Matcher
    Values []string
}

//Creates a new tree sitter expression
func (q *QueryBuilder) NewSExpression(name string) *SExpression {

    newSE := SExpression{identifier: name}
    q.rootNode = &newSE
    return &newSE
}

//Construct the string representation of your query
func (q *QueryBuilder) Marshal() string {

    var b bytes.Buffer
    b.WriteString("(\n")
    marshal("", q.rootNode, &b)
    b.WriteString("\n)")
    return b.String()
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
        b.WriteString(": ")
    }

    if s.alternation {
        b.WriteString("[")
    } else if s.group {
        b.WriteString("(")
    } else if s.identifier != "" {
        b.WriteString("(")
        b.WriteString(s.identifier)
    } else {
        b.WriteString(s.value)
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

    b.WriteString(s.quantifier)

    if s.variable != "" {
        b.WriteString(" ")
        b.WriteString(s.variable)
    }

    if s.anchorAfter {
        b.WriteString(" .")
    }

    return b
}

type Matcher struct {

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

//Allows for creation of a query by using a for loop
func (e *SExpression) For(condition func() bool, operation func (e *SExpression), termination func()) *SExpression {
    for condition() {
        operation(e)
        termination()
    }
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

//Prefixes the expression with a property file, like so "prop : (expression)"
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
func Init() *QueryBuilder {
    return &QueryBuilder{}
}
