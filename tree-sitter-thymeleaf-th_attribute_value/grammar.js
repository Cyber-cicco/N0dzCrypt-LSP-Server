const TERMINATOR = choice('\0');
const DECIMAL_DIGIT = /[0-9]/;
const BINARY_OPERATORS = ['+', '-', '*', '/', '%'];
const STRING_CONCAT_OPERATOR = ['+'];
const UNARY_OPERATORS = ['-'];
const COMPARATIVE_OPERATORS = ['==', '!=', '<', '<=', '>', '>='];
const PREC = {
    COMMENT: 0,      // //  /*  */
    SEQUENCE: 0,
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
    EXP:14,
    CAST: 14,        // (Type)
    UNARY: 15,
    INSTANCE_OF : 15,
    ARRAY: 16,       // [Index]
    OBJ_ACCESS: 16,  // .
    PARENS: 16,      // (Expression)
    TH_STD_EXPRESSION: 17,
    FRAGMENT_EXPRESSION: 18,
}

module.exports = grammar({
    name: 'thymeleaf',

    extras: $ => [
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
            $.comment,
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


        th_attribute_value: $ => $._th_std_expression, 

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
            token(prec(PREC.TH_STD_EXPRESSION, 'th:')) ,
            choice(
                seq(field("attribute_name",$._th_generic), '=', '"', field("attribute_value", $.th_attribute_value), '"'),
                seq(field("attribute_name",$._th_spel_only), '=', '"', field("attribute_value", $.spel_th_std_expression),'"'),
                seq(field("attribute_name",$._th_assignation_sequence), '=', '"', field("attribute_value", $.th_assignation_sequence),'"'),
                seq(field("attribute_name",$.th_fragment), '=', '"', field("attribute_value", $.th_fragment_declaration),'"'),
                seq(field("attribute_name",$.th_inline), '=', '"', field("attribute_value", $._th_inline_value),'"'),
                seq(field("attribute_name",$.th_remove), '=', '"', field("attribute_value", $._th_remove_value),'"'),
                seq(field("attribute_name",$.th_each), '=', '"', field("attribute_value", $.th_each_value),'"'),
                seq(field("attribute_name",$._th_fragments_insert), '=', '"', field("attribute_value", $._fragment_std_expression,),'"'),
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

        attribute_name: _ => /[^<>"'/=\s]+/,


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
            $.spel_th_std_expression,
        ),

        iterStat : _ =>/[a-zA-Z]+/,

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

        _th_spel_only: $ => choice(
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

        number_literal : _ => seq(
            /[0-9]+/,
            optional(seq(
                '.',
                /[0-9]+/,
            ))
        ),

        long_literal: _ => seq(
            /[0-9]+/,
            'l',
        ),

        integer_literal: _ => seq(
            /[0-9]+/,
        ),

        float_literal: _ => seq(
            /[0-9]+/,
            '.',
            /[0-9]+/,
            'f',
        ),
        double_literal: _ => seq(
            /[0-9]+/,
            '.',
            /[0-9]+/,
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
                $.spel_th_std_expression,
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
        and_2: $ => '&&',
        or: $ => 'or',
        or_2: $ => '||',
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
            $.spel_th_std_expression,
            $.varselect_th_std_expression,
            $.message_th_std_expression,
            $.url_th_std_expression,
            $.fragment_th_std_expression,
        ),

        fragment_th_std_expression : $ => seq(
            '~{',
            optional($._fragment_std_expression),
            '}',
        ),

        url_th_std_expression : $ => seq(
            '@{',
            optional($._url_std_expression),
            '}',
        ),

        message_th_std_expression : $ => seq(
            '#{',
            optional($._message_std_expression),
            '}',
        ),

        varselect_th_std_expression : $ => seq(
            '*{',
            optional($._spel_std_expression),
            '}',
        ),

        spel_th_std_expression : $ => seq(
            '${',
            optional($._spel_std_expression),
            '}',
        ),

        _url_std_expression : $ => seq(
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

        _fragment_std_expression : $ => prec(PREC.FRAGMENT_EXPRESSION, seq(
            choice(
                $.standard_url,
                $._th_std_expression
            ),
            optional(seq(
                '::',
                $.fragment_call
            ))
        )),

        fragment_call : $ => seq(
            $._th_std_expression,
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

        standard_url : _ => /[0-9a-zA-Z_\-\/\.]+/,
        standard_url_fragment : _ => /[0-9a-zA-Z_\-\.]+/,

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

        _message_std_expression : $ => seq(
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
                [$.and_2, PREC.AND],
                [$.or, PREC.OR],
                [$.or_2, PREC.OR],
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

        //spel 
        _spel_std_expression : $ => choice(
            //TODO : add rules for spel
            $._spel_primary_expression,
            $.binary_spel_expression,
            $.unary_spel_expression,
            $.array_creation,
            $.spel_parenthesized_expression,
            $.spel_assignement_expression,
        ),

        _type: $ => choice(
            $.integral_type,
            $.floating_point_type,
            $.boolean_type,
        ),

        boolean_type: _ => 'boolean',

        floating_point_type: _ => choice(
            'float',
            'double'
        ),

        integral_type: _ => choice(
            'byte',
            'short',
            'int',
            'long',
            'char'
        ),

        array_creation : $ => seq(
            'new',
            $._type,
            repeat1(seq(
                '[',
                optional($.integer_literal),
                ']',
            )),
            optional($.array_content),
        ),

        array_content : $ => seq(
            '{',
            commaSep($._spel_std_expression),
            '}',
        ),

        spel_parenthesized_expression : $ => seq(
            '(',
            $._spel_std_expression,
            ')',
        ),

        unary_spel_expression : $ => choice(...[
            ['+', PREC.UNARY],
            ['-', PREC.UNARY],
            ['!', PREC.UNARY],
            ['~', PREC.UNARY],
            ['not', PREC.UNARY],
        ].map(([operator, precedence]) =>
            prec.left(precedence, seq(
                field('operator', operator),
                field('operand', $._spel_std_expression)
            ))
        )),

        _spel_primary_expression : $ => choice(
            $._spel_literal,
            $.object_creation_expression,
            $.inline_list,
            $.inline_map,
        ),

        _spel_literal : $ => choice(
            $.double_literal,
            $.float_literal,
            $.integer_literal,
            $.double_literal,
            $.spel_string_literal,
            $.true_literal,
            $.false_literal,
            $.null_literal,
            $.spel_object_literal,
            $.spel_method_literal,
            $.spel_variable,
        ),

        spel_string_literal : $ => seq(
            "'",
            repeat(choice(
                $._interpreted_string_literal_basic_content,
                $._escape_sequence,
            )),
            "'",
            optional($._spel_post_accessor),
        ),

        inline_list : $ => seq(
            '{',
            commaSep($._spel_std_expression),
            '}',
            optional($._spel_post_accessor),
        ),

        inline_map : $ => choice(
            seq(
            '{',
            commaSep1(seq(
                field("key", $._spel_std_expression),
                ':',
                field("value", $._spel_std_expression),
            )),
            '}',
            optional($._spel_post_accessor),
            ),
            seq('{:}', $._spel_post_accessor)
        ),

        object_creation_expression : $ => seq(
            $.spel_new,
            /[a-zA-Z_]+/,

        ),



        spel_assignement_expression : $ => seq(
            field("var", $.spel_variable), 
            '=',
            field("value", $._spel_literal) 
        ),

        spel_new : _ => 'new',
        spel_instanceof: _ => 'instanceof',
        spel_between: _ => 'between',
        spel_matches: _ => 'matches',
        exp : _ => '^', 


        binary_spel_expression : $ => choice(
            ...[
                [$.and, PREC.AND],
                [$.and_2, PREC.AND],
                [$.or, PREC.OR],
                [$.or_2, PREC.OR],
                [$.equal, PREC.EQUALITY],
                [$.equal_2, PREC.EQUALITY],
                [$.not_equal, PREC.EQUALITY],
                [$.not_equal_2, PREC.EQUALITY],
                [$.greater_than, PREC.REL],
                [$.lesser_than, PREC.REL],
                [$.greater_or_equal, PREC.REL],
                [$.greater_or_equal_2, PREC.REL],
                [$.lesser_or_equal, PREC.REL],
                [$.lesser_or_equal_2, PREC.REL],
                [$.add, PREC.ADD],
                [$.substract, PREC.ADD],
                [$.multiply, PREC.MULT],
                [$.divide, PREC.MULT],
                [$.modulo, PREC.MULT],
                [$.exp, PREC.EXP],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $._spel_std_expression),
                    field('operator', operator),
                    field('right', $._spel_std_expression)
                ))
            ),
            prec.left(PREC.INSTANCE_OF, seq(
                    field('left', $._spel_std_expression),
                    field('operator', $.spel_between),
                    field('right', $.range)
            )),
            prec.left(PREC.INSTANCE_OF, seq(
                    field('left', $._spel_std_expression),
                    field('operator', $.spel_instanceof),
                    field('right', $.type)
            )),
            prec.left(PREC.INSTANCE_OF, seq(
                    field('left', $._spel_std_expression),
                    field('operator', $.matches),
                    field('right', $.string_literal)
            )),
        ),

        range : $ => seq(
            '{',
            field('begin', $._spel_std_expression),
            ',',
            field('end', $._spel_std_expression),
            '}',
        ),

        type : $ => seq(
            'T(',
            $._type_adress,
            ')'
        ),

        _type_adress : $ => seq(
            repeat(seq(
                $._spel_name,
                '.',
            )),
            $._spel_name
        ),


        spel_variable : $ => seq(
            '#',
            /[a-zA-Z_]+/,
            optional($._spel_post_accessor),
        ),


        _spel_post_accessor : $ => choice(
            $.spel_property_access,
            $.spel_method_access,
        ),

        index : _ => /[0-9]+/,

        spel_object_literal : $ => seq(
            /[A-Za-z_]+/,
            repeat(/[0-9A-Za-z_]/),
            optional($._spel_post_accessor),
        ),

        null_operator : _ => '?',

        spel_property_access : $ => choice(
            seq(
                '.',
                field('name',seq(
                    /[A-Za-z_]+/,
                    repeat(/[0-9A-Za-z_]/),
                )),
                optional($.null_operator),
                optional($._spel_post_accessor),
            ),
            seq(
                '[',
                field('name',$._spel_std_expression),
                ']',
                optional($.null_operator),
                optional($._spel_post_accessor)
            )
        ),

        spel_method_access : $ => seq(
            '.',
            $.spel_method_literal,
        ),

        spel_method_literal : $ => seq(
            field('name', $._spel_name),
            field('args', $.spel_method_args),
            optional($._spel_post_accessor),
        ),

        _spel_name : $ => seq(
            /[A-Za-z_]+/,
            repeat(/[0-9A-Za-z_]/),
        ),

        spel_method_args : $ => seq(
            '(',
            commaSep($._spel_literal),
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
