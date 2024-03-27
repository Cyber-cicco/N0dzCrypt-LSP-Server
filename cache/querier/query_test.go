package querier

import "testing"

func TestNewSexpression(t *testing.T) {
    query := Init()
    i := 0
    query.
    NewSExpression("call_expression").
        If(
            i == 0,
            func(e *SExpression) {
                e.For(func() bool {return i < 10},
                    func(e2 *SExpression){
                        e2.NewSExpression("test")
                    },
                    func(){i += 1})
            }).
        End().
    End()
}
