package querier



const (
    MATCH = "#match?"
)

type MATCH_TYPE string

type ParameterizedQuery string

//A query is obviously less performant than a simple string, since
//you have to traverse the graph to create a string.
//However, it is easier to do than trying to build this string
//manually. We recommend, in performance critical environnement, 
//which will almost always be the case if you're using go and tree sitter
//together, you use strings when needed, even if it means using the query 
//builder to create it, print it in the terminal and copy paste it in your code.
type Query struct {
    rootNode *SExpression
    matcher *Matcher
    Values []string
}

func (q *Query) NewSExpression(name string) *SExpression {

    newSE := SExpression{identifier: name}
    q.rootNode = &newSE
    return &newSE
}

type Matcher struct {

}

type SExpression struct {

    //If true, identifer shouldn't be set
    alternation bool

    //If true, identifer shouldn't be set
    group bool

    //If nil, means it is root node
    parent *SExpression

    unary string
    property string
    identifier string

    //If node has no name, it can match a string
    value string

    //Is the 
    variable string
    quantifier string
    children []*SExpression
}

func (e *SExpression) Alternation() *SExpression {

    e.alternation = true
    return e
}

func (e *SExpression) For(condition func() bool, operation func (e *SExpression) *SExpression, termination func()) *SExpression {
    for condition() {

    }
    return e
}

func (s *SExpression) Not() *SExpression {

    s.unary = "!"
    return s
}

func (s *SExpression) Prop(value string) *SExpression {

    s.property = value
    return s
}

func (s *SExpression) Value(value string) *SExpression {

    s.value = value
    return s
}

func (s *SExpression) Var(value string, query *Query) *SExpression {

    s.variable = "@" + value
    query.Values = append(query.Values, value)
    return s
}

func (s *SExpression) NewSExpression(name string) *SExpression {

    newSE := SExpression{identifier: name, parent: s}
    s.children = append(s.children, &newSE)
    return &newSE
}

func (s *SExpression) End() *SExpression {

    return s.parent
}

func Init() *Query {
    return &Query{}
}
