
const TERMINATOR = choice('\0');
const DECIMAL_DIGIT = /[0-9]/;
const BINARY_OPERATORS = ['+', '-', '*', '/', '%'];
const STRING_CONCAT_OPERATOR = ['+'];
const UNARY_OPERATORS = ['-'];
const COMPARATIVE_OPERATORS = ['==', '!=', '<', '<=', '>', '>='];
const PREC = {
    COMMENT: 0,      // //  /*  */
    ASSIGN: 1,       // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
    DECL: 2,
    ELEMENT_VAL: 2,
    TERNARY: 3,      // ?:
    OR: 4,           // ||
    AND: 5,          // &&
    BIT_OR: 6,       // |
    BIT_XOR: 7,      // ^
    BIT_AND: 8,      // &
    EQUALITY: 9,     // ==  !=
    GENERIC: 10,
    REL: 10,         // <  <=  >  >=  instanceof
    SHIFT: 11,       // <<  >>  >>>
    ADD: 12,         // +  -
    MULT: 13,        // *  /  %
    UNARY_EXPRESSION : 14
}

module.exports = grammar({
    name: 'thymeleaf_attribute',

    extras: $ => [
        /\s/,
        /\r/,
        /\n/
    ],

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._node),

        _node: $ => choice(
            $._expression,
            TERMINATOR,
        ),

        greater_than: $ => '>',
        lesser_than: $ => '<',
        greater_or_equal: $ => '>=',
        lesser_or_equal: $ => '<=',
        equal: $ => '==',
        equal_2: $ => 'eq',
        not_equal: $ => 'ne',
        add: $ => '+',
        substract: $ => '-',
        multiply: $ => '*',
        divide: $ => '/',
        modulo: $ => '%',

        _expression: $ => choice(
            $.string_literal,
            //$.ognl_expression,
            //$.selection_variable_expression,
            //$.message_expression,
            //$.url_expression,
            //$.fragment_expression,
            $.binary_expression,
            $.ternary_expression
        ),

        //ognl_expression : $ => {
        //},

        //selection_variable_expression : $ => {
        //},
        //
        //message_expression : $ => {
        //},

        //url_expression : $ => {
        //},

        //fragment_expression : $ => {
        //},
        ternary_expression: $ => prec.right(PREC.TERNARY, seq(
            field('condition', $._expression),
            '?',
            field('consequence', $._expression),
            ':',
            field('alternative', $._expression)
        )),

        binary_expression: $ => choice(
            ...[
                [$.greater_than, PREC.REL],
                [$.lesser_than, PREC.REL],
                [$.greater_or_equal, PREC.REL],
                [$.lesser_or_equal, PREC.REL],
                [$.equal, PREC.EQUALITY],
                [$.equal_2, PREC.EQUALITY],
                [$.not_equal, PREC.EQUALITY],
                [$.add, PREC.ADD],
                [$.substract, PREC.ADD],
                [$.multiply, PREC.MULT],
                [$.divide, PREC.MULT],
                [$.modulo, PREC.MULT],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression)
                ))
            )),

        string_literal: $ => choice(
            $._interpreted_string_literal,
        ),

        _interpreted_string_literal: $ => seq(
            "'",
            repeat(choice(
                $._interpreted_string_literal_basic_content,
                $._escape_sequence,
            )),
            "'",
        ),

        _interpreted_string_literal_basic_content: _ => token.immediate(prec(1, /[^'\n\\]+/)),

        _escape_sequence: _ => token.immediate(seq(
            '\\',
            /./
        )),
    }
});

