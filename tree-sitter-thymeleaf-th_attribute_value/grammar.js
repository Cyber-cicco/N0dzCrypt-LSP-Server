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
    name: 'thymeleaf',

    extras: $ => [
        $.comment,
        /\s+/,
    ],

    externals: $ => [
        $._start_tag_name,
        $._script_start_tag_name,
        $._style_start_tag_name,
        $._end_tag_name,
        $.erroneous_end_tag_name,
        '/>',
        $._implicit_end_tag,
        $.raw_text,
        $.comment,
    ],


    rules: {

        document: $ => repeat($._node),

        doctype: $ => seq(
            '<!',
            alias($._doctype, 'doctype'),
            /[^>]+/,
            '>',
        ),

        _doctype: _ => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

        _node: $ => choice(
            $.doctype,
            $.entity,
            $.text,
            $.element,
            $.script_element,
            $.style_element,
            $.erroneous_end_tag,
        ),

        element: $ => choice(
            seq(
                $.start_tag,
                repeat($._node),
                choice($.end_tag, $._implicit_end_tag),
            ),
            $.self_closing_tag,
        ),

        script_element: $ => seq(
            alias($.script_start_tag, $.start_tag),
            optional($.raw_text),
            $.end_tag,
        ),

        style_element: $ => seq(
            alias($.style_start_tag, $.start_tag),
            optional($.raw_text),
            $.end_tag,
        ),

        start_tag: $ => seq(
            '<',
            alias($._start_tag_name, $.tag_name),
            repeat($._attributes),
            '>',
        ),

        _attributes: $ => choice(
             $.th_attribute, 
             $.attribute, 
        ),

        th_attribute: $ => seq(
            $.th_attribute_name,
            optional(seq(
                '=',
                '"',
                $.th_attribute_value,
                '"',
            )),
        ),

        th_attribute_value: $ => choice( $._expression),

        script_start_tag: $ => seq(
            '<',
            alias($._script_start_tag_name, $.tag_name),
            repeat($._attributes),
            '>',
        ),

        style_start_tag: $ => seq(
            '<',
            alias($._style_start_tag_name, $.tag_name),
            repeat($._attributes),
            '>',
        ),

        self_closing_tag: $ => seq(
            '<',
            alias($._start_tag_name, $.tag_name),
            repeat($._attributes),
            '/>',
        ),

        end_tag: $ => seq(
            '</',
            alias($._end_tag_name, $.tag_name),
            '>',
        ),

        erroneous_end_tag: $ => seq(
            '</',
            $.erroneous_end_tag_name,
            '>',
        ),

        attribute: $ => seq(
            $.attribute_name,
            optional(seq(
                '=',
                choice(
                    $.attribute_value,
                    $.quoted_attribute_value,
                ),
            )),
        ),

        attribute_name: _ => /[^(th:)<>"'/=\s]+/,

        th_attribute_name: _ => seq('th:', /[^<>"'/=\s]+/),

        attribute_value: _ => /[^<>"'=\s]+/,

        // An entity can be named, numeric (decimal), or numeric (hexacecimal). The
        // longest entity name is 29 characters long, and the HTML spec says that
        // no more will ever be added.
        entity: _ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

        quoted_attribute_value: $ => choice(
            seq('\'', optional(alias(/[^']+/, $.attribute_value)), '\''),
            seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
        ),

        text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,
        
        //Literals
        _literal : $ => choice(
            $.number_literal,
            $.string_literal,
            $.true_literal,
            $.false_literal,
            $.null_literal,
        ),

        true_literal: _ => 'true',
        false_literal: _ => 'false',
        null_literal: _ => 'null',
        number_literal: _ => /[0-9]+/,

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

        greater_than: $ => '>',
        greater_than_2: $ => 'gt',
        lesser_than: $ => '<',
        lesser_than_2: $ => 'lt',
        greater_or_equal: $ => '>=',
        greater_or_equal_2: $ => 'ge',
        lesser_or_equal: $ => '<=',
        lesser_or_equal_2: $ => 'le',
        equal: $ => '==',
        not_equal: $ => '!=',
        equal_2: $ => 'eq',
        not_equal_2: $ => 'ne',
        and: $ => 'and',
        or: $ => 'or',
        add: $ => '+',
        substract: $ => '-',
        multiply: $ => '*',
        divide: $ => '/',
        modulo: $ => '%',

        _expression: $ => choice(
            $.binary_expression,
            $.ternary_expression,
            $.parenthesized_expression,
            $._literal,
            //$.ognl_expression,
            //$.selection_variable_expression,
            //$.message_expression,
            //$.url_expression,
            //$.fragment_expression,
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

        parenthesized_expression: $ => seq(
            '(',
            $._expression,
            ')',
        ),

        binary_expression: $ => choice(
            ...[
                [$.greater_than, PREC.REL],
                [$.lesser_than, PREC.REL],
                [$.greater_or_equal, PREC.REL],
                [$.lesser_or_equal, PREC.REL],
                [$.greater_than_2, PREC.REL],
                [$.lesser_than_2, PREC.REL],
                [$.greater_or_equal_2, PREC.REL],
                [$.lesser_or_equal_2, PREC.REL],
                [$.equal, PREC.EQUALITY],
                [$.equal_2, PREC.EQUALITY],
                [$.not_equal, PREC.EQUALITY],
                [$.not_equal_2, PREC.EQUALITY],
                [$.and, PREC.AND],
                [$.or, PREC.OR],
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
    }
});

