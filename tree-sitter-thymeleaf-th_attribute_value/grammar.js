const 
    TERMINATOR = choice('\0'),
    DECIMAL_DIGIT = /[0-9]/,
    BINARY_OPERATORS = ['+', '-', '*', '/', '%'],
    STRING_CONCAT_OPERATOR = ['+'],
    UNARY_OPERATORS = ['-'],
    COMPARATIVE_OPERATORS = ['==', '!=', '<', '<=', '>', '>='];

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

        _expression: $ => choice(
            $.string_literal,
            $.ognl_expression,
            $.selection_variable_expression,
            $.message_expression,
            $.url_expression,
            $.fragment_expression
        ),

        ognl_expression : $ => {
        },

        selection_variable_expression : $ => {
        },
        
        message_expression : $ => {
        },

        url_expression : $ => {
        },

        fragment_expression : $ => {
        },

        string_literal: $ => choice(
            $._interpreted_string_literal,
        ),

        _interpreted_string_literal: $ => seq(
            "'",
            repeat(choice(
                $._interpreted_string_literal_basic_content,
                $.escape_sequence,
            )),
            "'",
        ),

        _interpreted_string_literal_basic_content: _ => token.immediate(prec(1, /[^'\n\\]+/)),

        escape_sequence: _ => token.immediate(seq(
            '\\',
        )),
    }
});

