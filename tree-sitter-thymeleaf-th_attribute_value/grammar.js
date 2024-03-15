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
    CAST: 14,        // (Type)
    UNARY: 15,
    INSTANCE_OF : 15,
    ARRAY: 16,       // [Index]
    OBJ_ACCESS: 16,  // .
    PARENS: 16,      // (Expression)
    CLASS_LITERAL: 17,  // .
}

module.exports = grammar({
    name: 'thymeleaf',

    extras: $ => [
        $.comment,
        /\s+/,
        /\n/,
        /\r/,
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
             prec(10, $.th_attribute), 
             prec(0, $.attribute), 
        ),


        th_attribute_value: $ => choice( $._th_std_expression),

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

        th_attribute: $ => seq(
            'th:',
            choice(
                seq(field("attribute_name",$._th_generic), '=', '"', field("attribute_value", $.th_attribute_value), '"'),
                seq(field("attribute_name",$._th_ognl_only), '=', '"', field("attribute_value", $.ognl_th_std_expression),'"'),
                seq(field("attribute_name",$._th_assignation_sequence), '=', '"', field("attribute_value", $.th_assignation_sequence),'"'),
                seq(field("attribute_name",$.th_fragment), '=', '"', field("attribute_value", $.th_fragment_declaration),'"'),
                seq(field("attribute_name",$.th_inline), '=', '"', field("attribute_value", $._th_inline_value),'"'),
                seq(field("attribute_name",$.th_remove), '=', '"', field("attribute_value", $._th_remove_value),'"'),
                seq(field("attribute_name",$.th_each), '=', '"', field("attribute_value", $.th_each_value),'"'),
                seq(field("attribute_name",$._th_fragments_insert), '=', '"', field("attribute_value", choice($.th_attribute_value, $.fragment_std_expression)),'"'),
            ),
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

        attribute_name: _ => /[^<>:"'/=\s]+/,


        _th_inline_value : $ => choice(
            $.inline_text,
            $.inline_javascript,
            $.inline_none
        ),

        th_each_value : $ => seq(
            $.each_element, 
            optional(seq(
                ',',
                $.iterStat,
            )),
            ':',
            $.ognl_th_std_expression,
        ),

        iterStat : _ => 'iterStat',

        each_element : _ => /[a-zA-Z]+/,

        _th_remove_value : $ => choice(
            $.remove_all,
            $.remove_body,
            $.remove_tag,
            $.remove_abf,
            $.remove_none,
        ),

        remove_all : _ => 'all',
        remove_body : _ => 'body',
        remove_tag : _ => 'tag',
        remove_abf : _ => 'all-but-first',
        remove_none : _ => 'none',

        inline_text : _ => 'text',
        inline_javascript : _ => 'javascript',
        inline_none : _ => 'none',

        th_fragment_declaration : $ => seq(
            $.fragment_name,
            seq(
                '(',
                commaSep($.fragment_arg),
                ')'
            )
        ),

        //WTF THYMELEAF
        //This regex is wrong because you can actually put parenthesis in the name of the fragment
        fragment_name : _ => /[^\.%\/\(\)]+/ ,

        //exemple of a perfectly valid thymeleaf arg :
        //1${!}c\acçççèèa__--1*
        //(this is not satire)
        fragment_arg : _ => /[^\.%,\(\)\/]+/,


        th_assignation_sequence: $ => seq(
            commaSep1(seq(
                $.attribute_name,
                '=',
                field("value", $._th_std_expression) 
            )),
            optional(','),
        ),

        _th_generic: $ => choice(
            $.th_if,
            $.th_switch,
            $.th_case,
            $.th_unless,
            $.th_generic,
        ),

        _th_fragments_insert : $ => choice(
            $.th_insert,
            $.th_replace,
        ),

        _th_ognl_only: $ => choice(
            $.th_object,
            $.th_with,
        ),

        _th_assignation_sequence : $ => choice(
            $.th_attr,
            $.th_attrappend,
            $.th_attrprepend,
        ),

        th_insert: $ => 'insert',
        th_replace: $ => 'replace',
        th_each: $ => 'each',
        th_if: $ => 'if',
        th_unless: $ => 'unless',
        th_switch: $ => 'switch',
        th_case: $ => 'case',

        //${} only
        th_object: $ => 'object',
        th_with: $ => 'with',

        //assingation sequence tags
        th_attr: $ => 'attr',
        th_attrappend: $ => 'attrappend',
        th_attrprepend: $ => 'attrprepend',

        th_text: $ => 'text',
        th_utext: $ => 'utext',
        th_remove: $ => 'remove',

        //specific
        th_fragment: $ => 'fragment',
        th_inline : $ => 'inline',
        th_generic : $ => /[^<>"'/=\s]+/,

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
            $.interpolated_string_literal,
            $.true_literal,
            $.false_literal,
            $.null_literal,
            $.token_literal,
        ),

        true_literal: _ => 'true',
        false_literal: _ => 'false',
        null_literal: _ => 'null',
        number_literal: _ => seq(
            /[0-9]+/,
            optional(seq(
                '.',
                /[0-9]+/,
            ))
        ),
        
        token_literal: _ => repeat1(
            seq(
                optional(/[\-\+]/),
                /[a-zA-Z\-_\.]+/,
            ),
        ),

        string_literal: $ => choice(
            $._interpreted_string_literal,
        ),

        interpolated_string_literal: $ => seq(
            "|",
            repeat(choice(
                $.interpolated_string_literal_basic_content,
                $.ognl_th_std_expression,
                $.varselect_th_std_expression,
                $.message_th_std_expression,
                $.url_th_std_expression,
                '#',
                '~',
                '$',
                '*',
            )),
            "|",
        ),

        _interpreted_string_literal: $ => seq(
            "'",
            repeat(choice(
                $._interpreted_string_literal_basic_content,
                $._escape_sequence,
            )),
            "'",
        ),

        _interpreted_string_literal_basic_content: _ => token.immediate(prec(1, /[^'\\]+/)),

        interpolated_string_literal_basic_content: _ => token.immediate(prec(1, /[^@|#~$*]+/)),

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

        _th_std_expression: $ => choice(
            $.unary_th_std_expression,
            $.binary_th_std_expression,
            $.ternary_th_std_expression,
            $.parenthesized_th_std_expression,
            $._literal,
            $.ognl_th_std_expression,
            $.varselect_th_std_expression,
            $.message_th_std_expression,
            $.url_th_std_expression,
            $.fragment_th_std_expression,
        ),

        fragment_th_std_expression : $ => seq(
            '~{',
            optional($.fragment_std_expression),
            '}',
        ),

        url_th_std_expression : $ => seq(
            '@{',
            optional($.url_std_expression),
            '}',
        ),

        message_th_std_expression : $ => seq(
            '#{',
            optional($.message_std_expression),
            '}',
        ),

        varselect_th_std_expression : $ => seq(
            '*{',
            optional($._ognl_std_expression),
            '}',
        ),

        ognl_th_std_expression : $ => seq(
            '${',
            optional($._ognl_std_expression),
            '}',
        ),

        url_std_expression : $ => seq(
            optional('/'),
            repeat(seq(
                choice(
                    $.standard_url_fragment,
                    $.parameterized_url_fragment
                ),
                '/'
            )),  
            choice(
                $.standard_url_fragment,
                $.parameterized_url_fragment
            ),
            optional('/'),
            optional(seq(
                '(',
                commaSep($.url_parameter_assignement),
                ')',
            ))
               
        ),

        fragment_std_expression : $ => seq(
            optional('/'),
            repeat1(seq(
                $.standard_url_fragment,
                optional('/'),
            )),  
            optional(seq(
                '::',
                $.fragment_call
            ))
        ),

        fragment_call : $ => seq(
            /[0-9a-zA-Z_]+/,
            optional(seq(
                '(',
                commaSep($._th_std_expression),
                ')',
            ))
        ),

        url_parameter_assignement : $ => seq(
            field("param", $.url_parameter),
            '=',
            field("value", $._th_std_expression)
        ),

        standard_url_fragment : _ => /[0-9a-zA-Z_\-]+/,

        url_parameter : _ => /[0-9a-zA-Z_]+/,

        parameterized_url_fragment : $ => seq(
            '{',
            $.url_parameter,
            '}'
        ),

        message_name : $ => seq(
            optional(seq(
                /[0-9a-zA-Z_]+/,
                '.'
            )),
            /[0-9a-zA-Z_]+/,
        ), 

        message_std_expression : $ => seq(
            field("message", $.message_name),
            field("args", 
                optional(seq(
                    '(',
                        commaSep($._th_std_expression),
                    ')',
                ))
            )
        ),

        ternary_th_std_expression: $ => prec.right(PREC.TERNARY, seq(
            field('condition', $._th_std_expression),
            '?',
            field('consequence', $._th_std_expression),
            optional(seq(
                ':',
                field('alternative', $._th_std_expression)
            )),
        )),

        unary_th_std_expression : $ => choice(...[
            ['+', PREC.UNARY],
            ['-', PREC.UNARY],
            ['!', PREC.UNARY],
        ].map(([operator, precedence]) =>
            prec.left(precedence, seq(
                field('operator', operator),
                field('operand', $._th_std_expression)
            ))
        )),


        parenthesized_th_std_expression: $ => seq(
            '(',
            $._th_std_expression,
            ')',
        ),

        binary_th_std_expression: $ => choice(
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
                    field('left', $._th_std_expression),
                    field('operator', operator),
                    field('right', $._th_std_expression)
                ))
            )),

        //OGNL 
        _ognl_std_expression : $ => choice(
            //TODO : add rules for ognl
            $._ognl_primary_expression,
            $.binary_ognl_expression,
            $.ognl_assignement_expression,
        ),

        _ognl_primary_expression : $ => choice(
            $._ognl_literal,
            $.object_creation_expression,
        ),

        _ognl_literal : $ => choice(
            $.number_literal,
            $.string_literal,
            $.true_literal,
            $.false_literal,
            $.null_literal,
            $.ognl_object_literal,
            $.ognl_method_literal,
            $.ognl_instanceof,
            $.ognl_new,
            $.ognl_java_class,
            $.ognl_variable,
        ),

        object_creation_expression : $ => seq(
            $.ognl_new,
            /[a-zA-Z_]+/,
            '(',
            ')'
            //TODO continuer sur OGNL quand j'en aurai moins marre de ce langage de merde
        ),

        ognl_assignement_expression : $ => seq(
            field("var", $.ognl_variable), 
            '=',
            field("value", $._ognl_literal) 
        ),

        ognl_greater_or_equal: _ => 'gte',
        ognl_lower_or_equal: _ => 'lte',
        ognl_not_equal : _ => 'neq',
        ognl_in : _ => 'in',
        ognl_new : $ => 'new',
        ognl_instanceof : $ => 'instanceof',
        bit_shift_left: $ => '<<',
        ognl_bit_shift_left: $ => 'shl',
        bit_shift_right: $ => '>>',
        ognl_bit_shift_right: $ => 'shr',
        logical_shift_right: $ => '>>>',
        bitwise_not: $ => '~',

        binary_ognl_expression : $ => choice(
            ...[
                [$.greater_than, PREC.REL],
                [$.lesser_than, PREC.REL],
                [$.greater_or_equal, PREC.REL],
                [$.lesser_or_equal, PREC.REL],
                [$.greater_than_2, PREC.REL],
                [$.lesser_than_2, PREC.REL],
                [$.ognl_greater_or_equal, PREC.REL],
                [$.ognl_lower_or_equal, PREC.REL],
                [$.equal, PREC.EQUALITY],
                [$.equal_2, PREC.EQUALITY],
                [$.not_equal, PREC.EQUALITY],
                [$.not_equal_2, PREC.EQUALITY],
                [$.and, PREC.AND],
                [$.or, PREC.OR],
                [$.add, PREC.ADD],
                [$.substract, PREC.ADD],
                [$.ognl_instanceof, PREC.INSTANCE_OF],
                [$.multiply, PREC.MULT],
                [$.divide, PREC.MULT],
                [$.modulo, PREC.MULT],
                [$.bit_shift_left, PREC.SHIFT],
                [$.ognl_bit_shift_left, PREC.SHIFT],
                [$.bit_shift_right, PREC.SHIFT],
                [$.ognl_bit_shift_right, PREC.SHIFT],
                [$.logical_shift_right, PREC.SHIFT],
                [$.bitwise_not, PREC.UNARY],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $._ognl_std_expression),
                    field('operator', operator),
                    field('right', $._ognl_std_expression)
                ))
            )),


        ognl_variable : $ => seq(
            '#',
            /[a-zA-Z_]+/,
            optional($._ognl_post_accessor),
        ),


        _ognl_post_accessor : $ => choice(
            $.ognl_property_access,
            $.ognl_method_access,
        ),

        ognl_java_class : $ => seq(
            '@',
            repeat(seq(
                /[a-zA-Z_]+/,
                '.'
            )),
            /[a-zA-Z_]+/,
            optional($._ognl_post_java_class)
        ),

        _ognl_post_java_class : $ => choice(
            $.ognl_java_method,
            $.ognl_java_field,
        ),

        ognl_java_method : $ => seq(
            seq(
                '@',
                /[a-zA-Z_]+/,
                $.ognl_method_args,
            ),
        ),

        ognl_java_field : $ => seq(
            seq(
                '@',
                /[a-zA-Z_]+/,
            ),
        ),

        index : _ => /[0-9]+/,

        ognl_object_literal : $ => seq(
            /[A-Za-z_]+/,
            repeat(/[0-9A-Za-z_]/),
            optional($._ognl_post_accessor),
        ),

        ognl_property_access : $ => choice(
            seq(
                '.',
                field('name',$.ognl_object_literal),
            ),
            seq(
                '[',
                field('name',$._ognl_literal),
                ']',
                optional($._ognl_post_accessor)
            )
        ),

        ognl_method_access : $ => seq(
            '.',
            $.ognl_method_literal,
        ),

        ognl_method_literal : $ => seq(
            field('name', $.ognl_method_name),
            field('args', $.ognl_method_args),
            optional($._ognl_post_accessor),
        ),

        ognl_method_name : $ => seq(
            /[A-Za-z_]+/,
            repeat(/[0-9A-Za-z_]/),
        ),

        ognl_method_args : $ => seq(
            '(',
            commaSep($._ognl_literal),
            ')',
        ), 
    }
});


function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
