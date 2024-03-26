package querier

import "testing"

func TestNewSexpression(t *testing.T) {
    query := Init()
    i := 0
    query.
        NewSExpression("call_expression").
            For(func() bool {return i < 10},
            func(e * SExpression) * SExpression {
                return e.
                    NewSExpression("test").
                    End()
            },
            func(){i += 1}).
            End().
        End()
}
