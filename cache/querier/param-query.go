package querier

import (
	"bytes"
	"errors"
	"unicode"
)

// Query builder with placeholder parameters
// More error prone than the QueryBuilder, and can't be dynamically
// generated, but performances should be better
type ParamaterizedQuery struct {
	content string
	values  map[string]string
}

// Create new ParamaterizedQuery
func NewPQ(value string) *ParamaterizedQuery {

	newPQ := &ParamaterizedQuery{content: value, values: make(map[string]string)}
	return newPQ
}

// Adds a value to specified parameter
func (q *ParamaterizedQuery) AddValue(key, value string) {

	q.values[key] = value
}

// Creates the query from the parameter. Gives back a query object.
func (q *ParamaterizedQuery) GetQuery() (*Query, error) {

	var buffer bytes.Buffer
	lastIndex := 0

	for i := 0; i < len(q.content); i++ {
		if q.content[i] == '~' {

			buffer.WriteString(q.content[lastIndex:i])
			i++
			lastIndex = i

			for i < len(q.content) && unicode.IsLetter(rune(q.content[i])) {
				i++
			}

			key := q.content[lastIndex:i]
			value, ok := q.values[key]

			if !ok {
				return nil, errors.New("Parameter : " + key + " wasn't valued. Can't get back query")
			}

			buffer.WriteString(value)
			lastIndex = i
		}
	}

	buffer.WriteString(q.content[lastIndex:])

	return &Query{Query: buffer.Bytes()}, nil
}
