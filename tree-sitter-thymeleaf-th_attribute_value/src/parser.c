#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 470
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 227
#define ALIAS_COUNT 0
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_th_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_attribute_name_token1 = 11,
  anon_sym_COMMA = 12,
  anon_sym_COLON = 13,
  aux_sym_iterStat_token1 = 14,
  sym_remove_all = 15,
  sym_remove_body = 16,
  sym_remove_tag = 17,
  sym_remove_abf = 18,
  anon_sym_none = 19,
  anon_sym_text = 20,
  sym_inline_javascript = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_fragment_name = 24,
  sym_fragment_arg = 25,
  sym_th_insert = 26,
  sym_th_replace = 27,
  sym_th_each = 28,
  sym_th_if = 29,
  sym_th_unless = 30,
  sym_th_switch = 31,
  sym_th_case = 32,
  sym_th_object = 33,
  sym_th_with = 34,
  sym_th_attr = 35,
  sym_th_attrappend = 36,
  sym_th_attrprepend = 37,
  sym_th_remove = 38,
  sym_th_fragment = 39,
  sym_th_inline = 40,
  sym_attribute_value = 41,
  sym_entity = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_quoted_attribute_value_token1 = 44,
  aux_sym_quoted_attribute_value_token2 = 45,
  sym_text = 46,
  sym_true_literal = 47,
  sym_false_literal = 48,
  sym_null_literal = 49,
  aux_sym_number_literal_token1 = 50,
  anon_sym_DOT = 51,
  anon_sym_l = 52,
  anon_sym_f = 53,
  aux_sym_token_literal_token1 = 54,
  aux_sym_token_literal_token2 = 55,
  anon_sym_PIPE = 56,
  anon_sym_POUND = 57,
  anon_sym_TILDE = 58,
  anon_sym_DOLLAR = 59,
  anon_sym_STAR = 60,
  sym__interpreted_string_literal_basic_content = 61,
  sym_interpolated_string_literal_basic_content = 62,
  sym__escape_sequence = 63,
  sym_greater_than_2 = 64,
  sym_lesser_than_2 = 65,
  sym_greater_or_equal = 66,
  sym_greater_or_equal_2 = 67,
  sym_lesser_or_equal = 68,
  sym_lesser_or_equal_2 = 69,
  sym_equal = 70,
  sym_not_equal = 71,
  sym_equal_2 = 72,
  sym_not_equal_2 = 73,
  sym_and = 74,
  sym_and_2 = 75,
  sym_or = 76,
  sym_or_2 = 77,
  anon_sym_PLUS = 78,
  anon_sym_DASH = 79,
  anon_sym_SLASH = 80,
  sym_modulo = 81,
  anon_sym_TILDE_LBRACE = 82,
  anon_sym_RBRACE = 83,
  anon_sym_AT_LBRACE = 84,
  anon_sym_POUND_LBRACE = 85,
  anon_sym_STAR_LBRACE = 86,
  anon_sym_DOLLAR_LBRACE = 87,
  anon_sym_COLON_COLON = 88,
  sym_standard_url = 89,
  sym_standard_url_fragment = 90,
  aux_sym_url_parameter_token1 = 91,
  anon_sym_LBRACE = 92,
  anon_sym_QMARK = 93,
  anon_sym_BANG = 94,
  sym_boolean_type = 95,
  anon_sym_float = 96,
  anon_sym_double = 97,
  anon_sym_byte = 98,
  anon_sym_short = 99,
  anon_sym_int = 100,
  anon_sym_long = 101,
  anon_sym_char = 102,
  anon_sym_new = 103,
  anon_sym_LBRACK = 104,
  anon_sym_RBRACK = 105,
  anon_sym_not = 106,
  anon_sym_LBRACE_COLON_RBRACE = 107,
  aux_sym_object_creation_expression_token1 = 108,
  sym_exp = 109,
  aux_sym_spel_object_literal_token1 = 110,
  aux_sym_spel_object_literal_token2 = 111,
  sym__start_tag_name = 112,
  sym__script_start_tag_name = 113,
  sym__style_start_tag_name = 114,
  sym__end_tag_name = 115,
  sym_erroneous_end_tag_name = 116,
  sym__implicit_end_tag = 117,
  sym_raw_text = 118,
  sym_comment = 119,
  sym_document = 120,
  sym_doctype = 121,
  sym__node = 122,
  sym_element = 123,
  sym_script_element = 124,
  sym_style_element = 125,
  sym_start_tag = 126,
  sym__attributes = 127,
  sym_th_attribute_value = 128,
  sym_script_start_tag = 129,
  sym_style_start_tag = 130,
  sym_self_closing_tag = 131,
  sym_end_tag = 132,
  sym_erroneous_end_tag = 133,
  sym_th_attribute = 134,
  sym_attribute = 135,
  sym_attribute_name = 136,
  sym__th_inline_value = 137,
  sym_th_each_value = 138,
  sym_iterStat = 139,
  sym_each_element = 140,
  sym__th_remove_value = 141,
  sym_remove_none = 142,
  sym_inline_text = 143,
  sym_inline_none = 144,
  sym_th_fragment_declaration = 145,
  sym_th_assignation_sequence = 146,
  sym__th_generic = 147,
  sym__th_fragments_insert = 148,
  sym__th_spel_only = 149,
  sym__th_assignation_sequence = 150,
  sym_th_generic = 151,
  sym_quoted_attribute_value = 152,
  sym__literal = 153,
  sym_number_literal = 154,
  sym_integer_literal = 155,
  sym_float_literal = 156,
  sym_double_literal = 157,
  sym_token_literal = 158,
  sym_string_literal = 159,
  sym_interpolated_string_literal = 160,
  sym__interpreted_string_literal = 161,
  sym_greater_than = 162,
  sym_lesser_than = 163,
  sym_add = 164,
  sym_substract = 165,
  sym_multiply = 166,
  sym_divide = 167,
  sym__th_std_expression = 168,
  sym_fragment_th_std_expression = 169,
  sym_url_th_std_expression = 170,
  sym_message_th_std_expression = 171,
  sym_varselect_th_std_expression = 172,
  sym_spel_th_std_expression = 173,
  sym__url_std_expression = 174,
  sym__fragment_std_expression = 175,
  sym_fragment_call = 176,
  sym_url_parameter_assignement = 177,
  sym_url_parameter = 178,
  sym_parameterized_url_fragment = 179,
  sym_message_name = 180,
  sym__message_std_expression = 181,
  sym_ternary_th_std_expression = 182,
  sym_unary_th_std_expression = 183,
  sym_parenthesized_th_std_expression = 184,
  sym_binary_th_std_expression = 185,
  sym__spel_std_expression = 186,
  sym__type = 187,
  sym_floating_point_type = 188,
  sym_integral_type = 189,
  sym_array_creation = 190,
  sym_array_content = 191,
  sym_spel_parenthesized_expression = 192,
  sym_unary_spel_expression = 193,
  sym__spel_primary_expression = 194,
  sym__spel_literal = 195,
  sym_spel_string_literal = 196,
  sym_inline_list = 197,
  sym_inline_map = 198,
  sym_object_creation_expression = 199,
  sym_spel_assignement_expression = 200,
  sym_spel_new = 201,
  sym_binary_spel_expression = 202,
  sym_spel_variable = 203,
  sym__spel_post_accessor = 204,
  sym_spel_object_literal = 205,
  sym_null_operator = 206,
  sym_spel_property_access = 207,
  sym_spel_method_access = 208,
  sym_spel_method_literal = 209,
  sym__spel_name = 210,
  sym_spel_method_args = 211,
  aux_sym_document_repeat1 = 212,
  aux_sym_start_tag_repeat1 = 213,
  aux_sym_th_fragment_declaration_repeat1 = 214,
  aux_sym_th_assignation_sequence_repeat1 = 215,
  aux_sym_token_literal_repeat1 = 216,
  aux_sym_interpolated_string_literal_repeat1 = 217,
  aux_sym__interpreted_string_literal_repeat1 = 218,
  aux_sym__url_std_expression_repeat1 = 219,
  aux_sym__url_std_expression_repeat2 = 220,
  aux_sym_fragment_call_repeat1 = 221,
  aux_sym_array_creation_repeat1 = 222,
  aux_sym_array_content_repeat1 = 223,
  aux_sym_inline_map_repeat1 = 224,
  aux_sym_spel_object_literal_repeat1 = 225,
  aux_sym_spel_method_args_repeat1 = 226,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_th_COLON] = "th:",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_name_token1] = "attribute_name_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [aux_sym_iterStat_token1] = "iterStat_token1",
  [sym_remove_all] = "remove_all",
  [sym_remove_body] = "remove_body",
  [sym_remove_tag] = "remove_tag",
  [sym_remove_abf] = "remove_abf",
  [anon_sym_none] = "none",
  [anon_sym_text] = "text",
  [sym_inline_javascript] = "inline_javascript",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_fragment_name] = "fragment_name",
  [sym_fragment_arg] = "fragment_arg",
  [sym_th_insert] = "th_insert",
  [sym_th_replace] = "th_replace",
  [sym_th_each] = "th_each",
  [sym_th_if] = "th_if",
  [sym_th_unless] = "th_unless",
  [sym_th_switch] = "th_switch",
  [sym_th_case] = "th_case",
  [sym_th_object] = "th_object",
  [sym_th_with] = "th_with",
  [sym_th_attr] = "th_attr",
  [sym_th_attrappend] = "th_attrappend",
  [sym_th_attrprepend] = "th_attrprepend",
  [sym_th_remove] = "th_remove",
  [sym_th_fragment] = "th_fragment",
  [sym_th_inline] = "th_inline",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_l] = "l",
  [anon_sym_f] = "f",
  [aux_sym_token_literal_token1] = "token_literal_token1",
  [aux_sym_token_literal_token2] = "token_literal_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_interpolated_string_literal_basic_content] = "interpolated_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_greater_than_2] = "greater_than_2",
  [sym_lesser_than_2] = "lesser_than_2",
  [sym_greater_or_equal] = "greater_or_equal",
  [sym_greater_or_equal_2] = "greater_or_equal_2",
  [sym_lesser_or_equal] = "lesser_or_equal",
  [sym_lesser_or_equal_2] = "lesser_or_equal_2",
  [sym_equal] = "equal",
  [sym_not_equal] = "not_equal",
  [sym_equal_2] = "equal_2",
  [sym_not_equal_2] = "not_equal_2",
  [sym_and] = "and",
  [sym_and_2] = "and_2",
  [sym_or] = "or",
  [sym_or_2] = "or_2",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_modulo] = "modulo",
  [anon_sym_TILDE_LBRACE] = "~{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_STAR_LBRACE] = "*{",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_COLON] = "::",
  [sym_standard_url] = "standard_url",
  [sym_standard_url_fragment] = "standard_url_fragment",
  [aux_sym_url_parameter_token1] = "url_parameter_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [sym_boolean_type] = "boolean_type",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_new] = "new",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE_COLON_RBRACE] = "{:}",
  [aux_sym_object_creation_expression_token1] = "object_creation_expression_token1",
  [sym_exp] = "exp",
  [aux_sym_spel_object_literal_token1] = "spel_object_literal_token1",
  [aux_sym_spel_object_literal_token2] = "spel_object_literal_token2",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym__attributes] = "_attributes",
  [sym_th_attribute_value] = "th_attribute_value",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_th_attribute] = "th_attribute",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [sym__th_inline_value] = "_th_inline_value",
  [sym_th_each_value] = "th_each_value",
  [sym_iterStat] = "iterStat",
  [sym_each_element] = "each_element",
  [sym__th_remove_value] = "_th_remove_value",
  [sym_remove_none] = "remove_none",
  [sym_inline_text] = "inline_text",
  [sym_inline_none] = "inline_none",
  [sym_th_fragment_declaration] = "th_fragment_declaration",
  [sym_th_assignation_sequence] = "th_assignation_sequence",
  [sym__th_generic] = "_th_generic",
  [sym__th_fragments_insert] = "_th_fragments_insert",
  [sym__th_spel_only] = "_th_spel_only",
  [sym__th_assignation_sequence] = "_th_assignation_sequence",
  [sym_th_generic] = "th_generic",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_number_literal] = "number_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_double_literal] = "double_literal",
  [sym_token_literal] = "token_literal",
  [sym_string_literal] = "string_literal",
  [sym_interpolated_string_literal] = "interpolated_string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym__th_std_expression] = "_th_std_expression",
  [sym_fragment_th_std_expression] = "fragment_th_std_expression",
  [sym_url_th_std_expression] = "url_th_std_expression",
  [sym_message_th_std_expression] = "message_th_std_expression",
  [sym_varselect_th_std_expression] = "varselect_th_std_expression",
  [sym_spel_th_std_expression] = "spel_th_std_expression",
  [sym__url_std_expression] = "_url_std_expression",
  [sym__fragment_std_expression] = "_fragment_std_expression",
  [sym_fragment_call] = "fragment_call",
  [sym_url_parameter_assignement] = "url_parameter_assignement",
  [sym_url_parameter] = "url_parameter",
  [sym_parameterized_url_fragment] = "parameterized_url_fragment",
  [sym_message_name] = "message_name",
  [sym__message_std_expression] = "_message_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_unary_th_std_expression] = "unary_th_std_expression",
  [sym_parenthesized_th_std_expression] = "parenthesized_th_std_expression",
  [sym_binary_th_std_expression] = "binary_th_std_expression",
  [sym__spel_std_expression] = "_spel_std_expression",
  [sym__type] = "_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym_integral_type] = "integral_type",
  [sym_array_creation] = "array_creation",
  [sym_array_content] = "array_content",
  [sym_spel_parenthesized_expression] = "spel_parenthesized_expression",
  [sym_unary_spel_expression] = "unary_spel_expression",
  [sym__spel_primary_expression] = "_spel_primary_expression",
  [sym__spel_literal] = "_spel_literal",
  [sym_spel_string_literal] = "spel_string_literal",
  [sym_inline_list] = "inline_list",
  [sym_inline_map] = "inline_map",
  [sym_object_creation_expression] = "object_creation_expression",
  [sym_spel_assignement_expression] = "spel_assignement_expression",
  [sym_spel_new] = "spel_new",
  [sym_binary_spel_expression] = "binary_spel_expression",
  [sym_spel_variable] = "spel_variable",
  [sym__spel_post_accessor] = "_spel_post_accessor",
  [sym_spel_object_literal] = "spel_object_literal",
  [sym_null_operator] = "null_operator",
  [sym_spel_property_access] = "spel_property_access",
  [sym_spel_method_access] = "spel_method_access",
  [sym_spel_method_literal] = "spel_method_literal",
  [sym__spel_name] = "_spel_name",
  [sym_spel_method_args] = "spel_method_args",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_th_fragment_declaration_repeat1] = "th_fragment_declaration_repeat1",
  [aux_sym_th_assignation_sequence_repeat1] = "th_assignation_sequence_repeat1",
  [aux_sym_token_literal_repeat1] = "token_literal_repeat1",
  [aux_sym_interpolated_string_literal_repeat1] = "interpolated_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [aux_sym__url_std_expression_repeat1] = "_url_std_expression_repeat1",
  [aux_sym__url_std_expression_repeat2] = "_url_std_expression_repeat2",
  [aux_sym_fragment_call_repeat1] = "fragment_call_repeat1",
  [aux_sym_array_creation_repeat1] = "array_creation_repeat1",
  [aux_sym_array_content_repeat1] = "array_content_repeat1",
  [aux_sym_inline_map_repeat1] = "inline_map_repeat1",
  [aux_sym_spel_object_literal_repeat1] = "spel_object_literal_repeat1",
  [aux_sym_spel_method_args_repeat1] = "spel_method_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_th_COLON] = anon_sym_th_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_name_token1] = aux_sym_attribute_name_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_iterStat_token1] = aux_sym_iterStat_token1,
  [sym_remove_all] = sym_remove_all,
  [sym_remove_body] = sym_remove_body,
  [sym_remove_tag] = sym_remove_tag,
  [sym_remove_abf] = sym_remove_abf,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_text] = anon_sym_text,
  [sym_inline_javascript] = sym_inline_javascript,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_fragment_name] = sym_fragment_name,
  [sym_fragment_arg] = sym_fragment_arg,
  [sym_th_insert] = sym_th_insert,
  [sym_th_replace] = sym_th_replace,
  [sym_th_each] = sym_th_each,
  [sym_th_if] = sym_th_if,
  [sym_th_unless] = sym_th_unless,
  [sym_th_switch] = sym_th_switch,
  [sym_th_case] = sym_th_case,
  [sym_th_object] = sym_th_object,
  [sym_th_with] = sym_th_with,
  [sym_th_attr] = sym_th_attr,
  [sym_th_attrappend] = sym_th_attrappend,
  [sym_th_attrprepend] = sym_th_attrprepend,
  [sym_th_remove] = sym_th_remove,
  [sym_th_fragment] = sym_th_fragment,
  [sym_th_inline] = sym_th_inline,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [sym_null_literal] = sym_null_literal,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_f] = anon_sym_f,
  [aux_sym_token_literal_token1] = aux_sym_token_literal_token1,
  [aux_sym_token_literal_token2] = aux_sym_token_literal_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_interpolated_string_literal_basic_content] = sym_interpolated_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_greater_than_2] = sym_greater_than_2,
  [sym_lesser_than_2] = sym_lesser_than_2,
  [sym_greater_or_equal] = sym_greater_or_equal,
  [sym_greater_or_equal_2] = sym_greater_or_equal_2,
  [sym_lesser_or_equal] = sym_lesser_or_equal,
  [sym_lesser_or_equal_2] = sym_lesser_or_equal_2,
  [sym_equal] = sym_equal,
  [sym_not_equal] = sym_not_equal,
  [sym_equal_2] = sym_equal_2,
  [sym_not_equal_2] = sym_not_equal_2,
  [sym_and] = sym_and,
  [sym_and_2] = sym_and_2,
  [sym_or] = sym_or,
  [sym_or_2] = sym_or_2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_modulo] = sym_modulo,
  [anon_sym_TILDE_LBRACE] = anon_sym_TILDE_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_STAR_LBRACE] = anon_sym_STAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_standard_url] = sym_standard_url,
  [sym_standard_url_fragment] = sym_standard_url_fragment,
  [aux_sym_url_parameter_token1] = aux_sym_url_parameter_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_boolean_type] = sym_boolean_type,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE_COLON_RBRACE] = anon_sym_LBRACE_COLON_RBRACE,
  [aux_sym_object_creation_expression_token1] = aux_sym_object_creation_expression_token1,
  [sym_exp] = sym_exp,
  [aux_sym_spel_object_literal_token1] = aux_sym_spel_object_literal_token1,
  [aux_sym_spel_object_literal_token2] = aux_sym_spel_object_literal_token2,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym__attributes] = sym__attributes,
  [sym_th_attribute_value] = sym_th_attribute_value,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_th_attribute] = sym_th_attribute,
  [sym_attribute] = sym_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [sym__th_inline_value] = sym__th_inline_value,
  [sym_th_each_value] = sym_th_each_value,
  [sym_iterStat] = sym_iterStat,
  [sym_each_element] = sym_each_element,
  [sym__th_remove_value] = sym__th_remove_value,
  [sym_remove_none] = sym_remove_none,
  [sym_inline_text] = sym_inline_text,
  [sym_inline_none] = sym_inline_none,
  [sym_th_fragment_declaration] = sym_th_fragment_declaration,
  [sym_th_assignation_sequence] = sym_th_assignation_sequence,
  [sym__th_generic] = sym__th_generic,
  [sym__th_fragments_insert] = sym__th_fragments_insert,
  [sym__th_spel_only] = sym__th_spel_only,
  [sym__th_assignation_sequence] = sym__th_assignation_sequence,
  [sym_th_generic] = sym_th_generic,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_number_literal] = sym_number_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_double_literal] = sym_double_literal,
  [sym_token_literal] = sym_token_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_interpolated_string_literal] = sym_interpolated_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym__th_std_expression] = sym__th_std_expression,
  [sym_fragment_th_std_expression] = sym_fragment_th_std_expression,
  [sym_url_th_std_expression] = sym_url_th_std_expression,
  [sym_message_th_std_expression] = sym_message_th_std_expression,
  [sym_varselect_th_std_expression] = sym_varselect_th_std_expression,
  [sym_spel_th_std_expression] = sym_spel_th_std_expression,
  [sym__url_std_expression] = sym__url_std_expression,
  [sym__fragment_std_expression] = sym__fragment_std_expression,
  [sym_fragment_call] = sym_fragment_call,
  [sym_url_parameter_assignement] = sym_url_parameter_assignement,
  [sym_url_parameter] = sym_url_parameter,
  [sym_parameterized_url_fragment] = sym_parameterized_url_fragment,
  [sym_message_name] = sym_message_name,
  [sym__message_std_expression] = sym__message_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_unary_th_std_expression] = sym_unary_th_std_expression,
  [sym_parenthesized_th_std_expression] = sym_parenthesized_th_std_expression,
  [sym_binary_th_std_expression] = sym_binary_th_std_expression,
  [sym__spel_std_expression] = sym__spel_std_expression,
  [sym__type] = sym__type,
  [sym_floating_point_type] = sym_floating_point_type,
  [sym_integral_type] = sym_integral_type,
  [sym_array_creation] = sym_array_creation,
  [sym_array_content] = sym_array_content,
  [sym_spel_parenthesized_expression] = sym_spel_parenthesized_expression,
  [sym_unary_spel_expression] = sym_unary_spel_expression,
  [sym__spel_primary_expression] = sym__spel_primary_expression,
  [sym__spel_literal] = sym__spel_literal,
  [sym_spel_string_literal] = sym_spel_string_literal,
  [sym_inline_list] = sym_inline_list,
  [sym_inline_map] = sym_inline_map,
  [sym_object_creation_expression] = sym_object_creation_expression,
  [sym_spel_assignement_expression] = sym_spel_assignement_expression,
  [sym_spel_new] = sym_spel_new,
  [sym_binary_spel_expression] = sym_binary_spel_expression,
  [sym_spel_variable] = sym_spel_variable,
  [sym__spel_post_accessor] = sym__spel_post_accessor,
  [sym_spel_object_literal] = sym_spel_object_literal,
  [sym_null_operator] = sym_null_operator,
  [sym_spel_property_access] = sym_spel_property_access,
  [sym_spel_method_access] = sym_spel_method_access,
  [sym_spel_method_literal] = sym_spel_method_literal,
  [sym__spel_name] = sym__spel_name,
  [sym_spel_method_args] = sym_spel_method_args,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_th_fragment_declaration_repeat1] = aux_sym_th_fragment_declaration_repeat1,
  [aux_sym_th_assignation_sequence_repeat1] = aux_sym_th_assignation_sequence_repeat1,
  [aux_sym_token_literal_repeat1] = aux_sym_token_literal_repeat1,
  [aux_sym_interpolated_string_literal_repeat1] = aux_sym_interpolated_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [aux_sym__url_std_expression_repeat1] = aux_sym__url_std_expression_repeat1,
  [aux_sym__url_std_expression_repeat2] = aux_sym__url_std_expression_repeat2,
  [aux_sym_fragment_call_repeat1] = aux_sym_fragment_call_repeat1,
  [aux_sym_array_creation_repeat1] = aux_sym_array_creation_repeat1,
  [aux_sym_array_content_repeat1] = aux_sym_array_content_repeat1,
  [aux_sym_inline_map_repeat1] = aux_sym_inline_map_repeat1,
  [aux_sym_spel_object_literal_repeat1] = aux_sym_spel_object_literal_repeat1,
  [aux_sym_spel_method_args_repeat1] = aux_sym_spel_method_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_th_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iterStat_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_remove_all] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_body] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_abf] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_javascript] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_fragment_name] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_th_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_th_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_th_each] = {
    .visible = true,
    .named = true,
  },
  [sym_th_if] = {
    .visible = true,
    .named = true,
  },
  [sym_th_unless] = {
    .visible = true,
    .named = true,
  },
  [sym_th_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_th_case] = {
    .visible = true,
    .named = true,
  },
  [sym_th_object] = {
    .visible = true,
    .named = true,
  },
  [sym_th_with] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attrappend] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attrprepend] = {
    .visible = true,
    .named = true,
  },
  [sym_th_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_th_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_th_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_false_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_token_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_string_literal_basic_content] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_greater_than_2] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_than_2] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_or_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_and_2] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_or_2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_standard_url] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_url_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_url_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_COLON_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_creation_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_spel_object_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_object_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_th_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_th_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__th_inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_th_each_value] = {
    .visible = true,
    .named = true,
  },
  [sym_iterStat] = {
    .visible = true,
    .named = true,
  },
  [sym_each_element] = {
    .visible = true,
    .named = true,
  },
  [sym__th_remove_value] = {
    .visible = false,
    .named = true,
  },
  [sym_remove_none] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_none] = {
    .visible = true,
    .named = true,
  },
  [sym_th_fragment_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_th_assignation_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__th_generic] = {
    .visible = false,
    .named = true,
  },
  [sym__th_fragments_insert] = {
    .visible = false,
    .named = true,
  },
  [sym__th_spel_only] = {
    .visible = false,
    .named = true,
  },
  [sym__th_assignation_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_th_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_token_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_than] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_substract] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym__th_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_fragment_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_url_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_message_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_varselect_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__url_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__fragment_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_fragment_call] = {
    .visible = true,
    .named = true,
  },
  [sym_url_parameter_assignement] = {
    .visible = true,
    .named = true,
  },
  [sym_url_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterized_url_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym__message_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_creation] = {
    .visible = true,
    .named = true,
  },
  [sym_array_content] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_spel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__spel_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_list] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_map] = {
    .visible = true,
    .named = true,
  },
  [sym_object_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_assignement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_new] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_spel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_post_accessor] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_property_access] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_method_access] = {
    .visible = true,
    .named = true,
  },
  [sym_spel_method_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__spel_name] = {
    .visible = false,
    .named = true,
  },
  [sym_spel_method_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_th_fragment_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_th_assignation_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__url_std_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__url_std_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fragment_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_creation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_object_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spel_method_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_args = 2,
  field_attribute_name = 3,
  field_attribute_value = 4,
  field_condition = 5,
  field_consequence = 6,
  field_key = 7,
  field_left = 8,
  field_message = 9,
  field_name = 10,
  field_operand = 11,
  field_operator = 12,
  field_param = 13,
  field_right = 14,
  field_value = 15,
  field_var = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_args] = "args",
  [field_attribute_name] = "attribute_name",
  [field_attribute_value] = "attribute_value",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_key] = "key",
  [field_left] = "left",
  [field_message] = "message",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_param] = "param",
  [field_right] = "right",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 4},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 3},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
  [18] = {.index = 36, .length = 5},
  [19] = {.index = 41, .length = 2},
  [20] = {.index = 43, .length = 4},
  [21] = {.index = 47, .length = 4},
  [22] = {.index = 51, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute_name, 1},
    {field_attribute_value, 4},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_message, 0},
  [5] =
    {field_args, 1, .inherited = true},
    {field_message, 1, .inherited = true},
  [7] =
    {field_args, 1},
    {field_name, 0},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [12] =
    {field_condition, 0},
    {field_consequence, 2},
  [14] =
    {field_value, 2},
  [15] =
    {field_args, 1},
    {field_args, 2},
    {field_message, 0},
  [18] =
    {field_name, 1},
  [19] =
    {field_value, 2},
    {field_var, 0},
  [21] =
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [23] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_message, 0},
  [27] =
    {field_name, 1},
    {field_name, 2},
  [29] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [32] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_param, 0},
    {field_value, 2},
  [36] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_message, 0},
  [41] =
    {field_key, 1},
    {field_value, 3},
  [43] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [47] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [51] =
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 10,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 126,
  [131] = 127,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 164,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 173,
  [178] = 174,
  [179] = 175,
  [180] = 176,
  [181] = 170,
  [182] = 171,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 20,
  [189] = 189,
  [190] = 26,
  [191] = 96,
  [192] = 97,
  [193] = 112,
  [194] = 108,
  [195] = 100,
  [196] = 56,
  [197] = 58,
  [198] = 107,
  [199] = 95,
  [200] = 98,
  [201] = 201,
  [202] = 57,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 204,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 201,
  [212] = 60,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 77,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 213,
  [225] = 218,
  [226] = 226,
  [227] = 219,
  [228] = 221,
  [229] = 229,
  [230] = 226,
  [231] = 231,
  [232] = 232,
  [233] = 215,
  [234] = 234,
  [235] = 220,
  [236] = 231,
  [237] = 69,
  [238] = 84,
  [239] = 79,
  [240] = 232,
  [241] = 214,
  [242] = 70,
  [243] = 64,
  [244] = 222,
  [245] = 229,
  [246] = 217,
  [247] = 234,
  [248] = 248,
  [249] = 86,
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 254,
  [258] = 255,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 260,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 252,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 259,
  [281] = 281,
  [282] = 267,
  [283] = 283,
  [284] = 268,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 286,
  [296] = 296,
  [297] = 297,
  [298] = 288,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 279,
  [308] = 308,
  [309] = 264,
  [310] = 310,
  [311] = 311,
  [312] = 273,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 321,
  [322] = 300,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 316,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 318,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 337,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 344,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 340,
  [353] = 353,
  [354] = 338,
  [355] = 355,
  [356] = 356,
  [357] = 351,
  [358] = 348,
  [359] = 359,
  [360] = 360,
  [361] = 336,
  [362] = 362,
  [363] = 342,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 378,
  [408] = 408,
  [409] = 392,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 408,
  [416] = 416,
  [417] = 414,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 413,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 403,
  [428] = 420,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 411,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 435,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 375,
  [446] = 446,
  [447] = 447,
  [448] = 432,
  [449] = 437,
  [450] = 416,
  [451] = 374,
  [452] = 400,
  [453] = 405,
  [454] = 394,
  [455] = 444,
  [456] = 442,
  [457] = 439,
  [458] = 458,
  [459] = 431,
  [460] = 460,
  [461] = 430,
  [462] = 436,
  [463] = 443,
  [464] = 446,
  [465] = 447,
  [466] = 458,
  [467] = 460,
  [468] = 468,
  [469] = 468,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(85)
      if (lookahead == '!') ADVANCE(345);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == '^') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '&') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(320);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'q') ADVANCE(314);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(334);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(336);
      END_STATE();
    case 44:
      if (lookahead == '{') ADVANCE(335);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(333);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(331);
      END_STATE();
    case 47:
      if (lookahead == '|') ADVANCE(323);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(358);
      END_STATE();
    case 49:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (lookahead == '!') ADVANCE(344);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 50:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (lookahead == '!') ADVANCE(344);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 51:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '[') ADVANCE(355);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == '^') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '{') ADVANCE(341);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == '^') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'j') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      if (lookahead == '!') ADVANCE(344);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '~') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 54:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 55:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(56)
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 't') ADVANCE(397);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 57:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(299);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '~') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 58:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '[') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 59:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(59)
      if (lookahead == 'b') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 's') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 60:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(60)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == 't') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(167);
      END_STATE();
    case 61:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '{') ADVANCE(341);
      if (lookahead == '}') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(61)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 62:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 63:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(63)
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '}') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 64:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 66:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(66)
      if (lookahead == '"') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(67)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 68:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(181);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(182);
      END_STATE();
    case 69:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(244);
      if (lookahead == '"') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 70:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 71:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(183);
      if (lookahead == ')') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(184);
      END_STATE();
    case 72:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(72)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 73:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(74)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 81:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 82:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(246);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(85)
      if (lookahead == '!') ADVANCE(345);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '(') ADVANCE(179);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(355);
      if (lookahead == ']') ADVANCE(356);
      if (lookahead == '^') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '~') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '/') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_iterStat_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_remove_all);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_remove_body);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_remove_tag);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_remove_abf);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_inline_javascript);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(181);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_fragment_name);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_fragment_arg);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_th_each);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_th_attrappend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_th_attrprepend);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_th_inline);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(167);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_true_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_false_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_null_literal);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(271);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(247);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(250);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(282);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(253);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(272);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(284);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(265);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(264);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(275);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(336);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(335);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_and_2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_or_2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('/' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_standard_url);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_standard_url_fragment);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_url_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_boolean_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_double);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_short);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_long);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON_RBRACE);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'a') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'b') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'g') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'y') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'u') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'l') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'r') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 's') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 't') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'u') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (lookahead == 'w') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'q') ADVANCE(314);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_spel_object_literal_token2);
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 86, .external_lex_state = 2},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 53},
  [45] = {.lex_state = 53},
  [46] = {.lex_state = 53},
  [47] = {.lex_state = 53},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 53},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 51},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 51},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 51},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 51},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 51},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 52},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 51},
  [84] = {.lex_state = 51},
  [85] = {.lex_state = 52},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 52},
  [88] = {.lex_state = 52},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 52},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 52},
  [96] = {.lex_state = 52},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 52},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 51},
  [103] = {.lex_state = 52},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 52},
  [108] = {.lex_state = 52},
  [109] = {.lex_state = 52},
  [110] = {.lex_state = 52},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 52},
  [113] = {.lex_state = 52},
  [114] = {.lex_state = 52},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 51},
  [118] = {.lex_state = 51},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 51},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 51},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 51},
  [126] = {.lex_state = 51},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 51},
  [129] = {.lex_state = 51},
  [130] = {.lex_state = 51},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 51},
  [134] = {.lex_state = 51},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 51},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 51},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 52},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 51},
  [146] = {.lex_state = 51},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 51},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 51},
  [158] = {.lex_state = 51},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 51},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 55},
  [163] = {.lex_state = 86, .external_lex_state = 3},
  [164] = {.lex_state = 86, .external_lex_state = 3},
  [165] = {.lex_state = 86, .external_lex_state = 3},
  [166] = {.lex_state = 86, .external_lex_state = 3},
  [167] = {.lex_state = 86, .external_lex_state = 2},
  [168] = {.lex_state = 86, .external_lex_state = 3},
  [169] = {.lex_state = 86, .external_lex_state = 2},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 53},
  [172] = {.lex_state = 56},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 53},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 53},
  [177] = {.lex_state = 49},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 49},
  [183] = {.lex_state = 56},
  [184] = {.lex_state = 56},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 57},
  [187] = {.lex_state = 57},
  [188] = {.lex_state = 58},
  [189] = {.lex_state = 59},
  [190] = {.lex_state = 58},
  [191] = {.lex_state = 57},
  [192] = {.lex_state = 57},
  [193] = {.lex_state = 57},
  [194] = {.lex_state = 57},
  [195] = {.lex_state = 57},
  [196] = {.lex_state = 58},
  [197] = {.lex_state = 58},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 57},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 60, .external_lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 60, .external_lex_state = 4},
  [204] = {.lex_state = 60, .external_lex_state = 4},
  [205] = {.lex_state = 60, .external_lex_state = 4},
  [206] = {.lex_state = 60, .external_lex_state = 4},
  [207] = {.lex_state = 60},
  [208] = {.lex_state = 60},
  [209] = {.lex_state = 60},
  [210] = {.lex_state = 60},
  [211] = {.lex_state = 60},
  [212] = {.lex_state = 58},
  [213] = {.lex_state = 86, .external_lex_state = 3},
  [214] = {.lex_state = 86, .external_lex_state = 2},
  [215] = {.lex_state = 61},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 86, .external_lex_state = 2},
  [219] = {.lex_state = 86, .external_lex_state = 2},
  [220] = {.lex_state = 86, .external_lex_state = 3},
  [221] = {.lex_state = 86, .external_lex_state = 2},
  [222] = {.lex_state = 86, .external_lex_state = 3},
  [223] = {.lex_state = 86, .external_lex_state = 3},
  [224] = {.lex_state = 86, .external_lex_state = 2},
  [225] = {.lex_state = 86, .external_lex_state = 3},
  [226] = {.lex_state = 86, .external_lex_state = 2},
  [227] = {.lex_state = 86, .external_lex_state = 3},
  [228] = {.lex_state = 86, .external_lex_state = 3},
  [229] = {.lex_state = 86, .external_lex_state = 3},
  [230] = {.lex_state = 86, .external_lex_state = 3},
  [231] = {.lex_state = 86, .external_lex_state = 3},
  [232] = {.lex_state = 86, .external_lex_state = 3},
  [233] = {.lex_state = 61},
  [234] = {.lex_state = 86, .external_lex_state = 2},
  [235] = {.lex_state = 86, .external_lex_state = 2},
  [236] = {.lex_state = 86, .external_lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 86, .external_lex_state = 2},
  [241] = {.lex_state = 86, .external_lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 86, .external_lex_state = 2},
  [245] = {.lex_state = 86, .external_lex_state = 2},
  [246] = {.lex_state = 52},
  [247] = {.lex_state = 86, .external_lex_state = 3},
  [248] = {.lex_state = 86, .external_lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 52},
  [251] = {.lex_state = 52},
  [252] = {.lex_state = 60, .external_lex_state = 4},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 60, .external_lex_state = 4},
  [255] = {.lex_state = 62},
  [256] = {.lex_state = 62},
  [257] = {.lex_state = 60},
  [258] = {.lex_state = 62},
  [259] = {.lex_state = 63},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 62},
  [262] = {.lex_state = 62},
  [263] = {.lex_state = 63},
  [264] = {.lex_state = 60, .external_lex_state = 4},
  [265] = {.lex_state = 63},
  [266] = {.lex_state = 61},
  [267] = {.lex_state = 64},
  [268] = {.lex_state = 60, .external_lex_state = 4},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 61},
  [271] = {.lex_state = 61},
  [272] = {.lex_state = 61},
  [273] = {.lex_state = 60, .external_lex_state = 4},
  [274] = {.lex_state = 63},
  [275] = {.lex_state = 61},
  [276] = {.lex_state = 63},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 60, .external_lex_state = 4},
  [280] = {.lex_state = 63},
  [281] = {.lex_state = 62},
  [282] = {.lex_state = 64},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 60},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0, .external_lex_state = 5},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0, .external_lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 49},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 49},
  [293] = {.lex_state = 49},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0, .external_lex_state = 5},
  [299] = {.lex_state = 49},
  [300] = {.lex_state = 65},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 66},
  [303] = {.lex_state = 49},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 60},
  [308] = {.lex_state = 63},
  [309] = {.lex_state = 60},
  [310] = {.lex_state = 66},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 60},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 67},
  [319] = {.lex_state = 66},
  [320] = {.lex_state = 66},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 65},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 67},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0, .external_lex_state = 5},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 68},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0, .external_lex_state = 7},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 7},
  [347] = {.lex_state = 66},
  [348] = {.lex_state = 69},
  [349] = {.lex_state = 63},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 70},
  [352] = {.lex_state = 68},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0, .external_lex_state = 5},
  [356] = {.lex_state = 61},
  [357] = {.lex_state = 70},
  [358] = {.lex_state = 69},
  [359] = {.lex_state = 71},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 67},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 86},
  [379] = {.lex_state = 49},
  [380] = {.lex_state = 71},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 72},
  [385] = {.lex_state = 63},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 86},
  [393] = {.lex_state = 49},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 86},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 86},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 86},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 73},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 49},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 86},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 74},
  [432] = {.lex_state = 0, .external_lex_state = 8},
  [433] = {.lex_state = 73},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0, .external_lex_state = 9},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 52},
  [438] = {.lex_state = 0, .external_lex_state = 9},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 74},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0, .external_lex_state = 8},
  [449] = {.lex_state = 52},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 74},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [aux_sym_token_literal_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_greater_or_equal_2] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal_2] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_equal_2] = ACTIONS(1),
    [sym_not_equal_2] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_and_2] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_STAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_COLON_RBRACE] = ACTIONS(1),
    [sym_exp] = ACTIONS(1),
    [aux_sym_spel_object_literal_token2] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(441),
    [sym_doctype] = STATE(169),
    [sym__node] = STATE(169),
    [sym_element] = STATE(169),
    [sym_script_element] = STATE(169),
    [sym_style_element] = STATE(169),
    [sym_start_tag] = STATE(165),
    [sym_script_start_tag] = STATE(298),
    [sym_style_start_tag] = STATE(295),
    [sym_self_closing_tag] = STATE(236),
    [sym_erroneous_end_tag] = STATE(169),
    [aux_sym_document_repeat1] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_SLASH] = ACTIONS(9),
    [sym_entity] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [70] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(37), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(83), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [140] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(41), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(111), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [210] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(45), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(128), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [280] = 20,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_number_literal_token1,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      sym_standard_url,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(419), 1,
      sym__fragment_std_expression,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(68), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [358] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(81), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(126), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [428] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(85), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(130), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [498] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(89), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(74), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [565] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(91), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(131), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [632] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(93), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(63), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [699] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(95), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(124), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [766] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(97), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(62), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [833] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(99), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(73), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [900] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(101), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(121), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [967] = 19,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_number_literal_token1,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      sym_standard_url,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(408), 1,
      sym__fragment_std_expression,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(68), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1042] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(103), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(72), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1109] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(105), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(75), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1176] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(107), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(71), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1243] = 10,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_spel_object_literal_token2,
    STATE(60), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(70), 1,
      sym_null_operator,
    ACTIONS(109), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(135), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(111), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [1300] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(123), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(118), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1367] = 19,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_number_literal_token1,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      sym_standard_url,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(415), 1,
      sym__fragment_std_expression,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(68), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1442] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(125), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(125), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1509] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(127), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(94), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1576] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(129), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(127), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1643] = 10,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_spel_object_literal_token2,
    STATE(20), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(79), 1,
      sym_null_operator,
    ACTIONS(131), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(139), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(133), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [1700] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_new,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_LBRACE_COLON_RBRACE,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(141), 1,
      sym_spel_variable,
    STATE(339), 1,
      sym__spel_name,
    STATE(440), 1,
      sym_spel_new,
    ACTIONS(139), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    ACTIONS(23), 4,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(76), 17,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_std_expression,
      sym_array_creation,
      sym_spel_parenthesized_expression,
      sym_unary_spel_expression,
      sym__spel_primary_expression,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_inline_list,
      sym_inline_map,
      sym_object_creation_expression,
      sym_spel_assignement_expression,
      sym_binary_spel_expression,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [1767] = 5,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(141), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(143), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [1813] = 17,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(149), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1883] = 8,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(175), 23,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [1935] = 18,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(179), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(65), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2007] = 17,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(183), 6,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [2077] = 5,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(175), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2123] = 15,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(175), 9,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2189] = 18,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(408), 1,
      sym_th_attribute_value,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(187), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(99), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2261] = 14,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(173), 1,
      anon_sym_COLON,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(175), 11,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2325] = 18,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(364), 1,
      sym_fragment_call,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(189), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(67), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2397] = 18,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(193), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(80), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2469] = 10,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(175), 21,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2525] = 13,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(173), 1,
      anon_sym_COLON,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(175), 15,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [2587] = 18,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    STATE(415), 1,
      sym_th_attribute_value,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(187), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(99), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2659] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(195), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(28), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2728] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(197), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(66), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2797] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(199), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(88), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2866] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(201), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(85), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [2935] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(203), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(29), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3004] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(205), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(30), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3073] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(207), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(32), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3142] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(209), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(109), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3211] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(211), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(33), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3280] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(213), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(34), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3349] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(215), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(36), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3418] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(217), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(81), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3487] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(219), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(40), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3556] = 17,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(59), 1,
      aux_sym_token_literal_token2,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(71), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(75), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      aux_sym_number_literal_token1,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(93), 1,
      sym__interpreted_string_literal,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(221), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(39), 15,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
      sym_interpolated_string_literal,
      sym__th_std_expression,
      sym_fragment_th_std_expression,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [3625] = 8,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      aux_sym_spel_object_literal_token2,
    STATE(58), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(223), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(147), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(225), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [3675] = 7,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_null_operator,
    ACTIONS(229), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(137), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(231), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [3723] = 8,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_spel_object_literal_token2,
    STATE(60), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(233), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(156), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(235), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [3773] = 5,
    ACTIONS(241), 1,
      aux_sym_token_literal_token1,
    ACTIONS(244), 1,
      aux_sym_token_literal_token2,
    STATE(59), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(237), 12,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(239), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [3816] = 4,
    ACTIONS(251), 1,
      aux_sym_spel_object_literal_token2,
    STATE(60), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(247), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(249), 27,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [3857] = 5,
    ACTIONS(57), 1,
      aux_sym_token_literal_token1,
    ACTIONS(258), 1,
      aux_sym_token_literal_token2,
    STATE(59), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(254), 12,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(256), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [3900] = 6,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(260), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(262), 22,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3944] = 5,
    ACTIONS(266), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(268), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [3986] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(132), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(272), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4028] = 18,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4096] = 18,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_th_assignation_sequence_repeat1,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4164] = 17,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    ACTIONS(282), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4230] = 17,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(288), 1,
      anon_sym_COLON_COLON,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    ACTIONS(286), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4296] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(140), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(292), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4338] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(296), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4380] = 11,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(260), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(262), 17,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4434] = 13,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(262), 13,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4492] = 14,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(262), 9,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4552] = 15,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(262), 7,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_or,
      sym_or_2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4614] = 5,
    ACTIONS(260), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(262), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4656] = 9,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(260), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(262), 19,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [4706] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(133), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(320), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4748] = 2,
    ACTIONS(237), 14,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(239), 17,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_and_2,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [4784] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    STATE(137), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(231), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4826] = 18,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_fragment_call_repeat1,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4894] = 16,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    ACTIONS(324), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [4957] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(326), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(159), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(328), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [4998] = 19,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5067] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(150), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(340), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5108] = 16,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5171] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(148), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(346), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5212] = 3,
    ACTIONS(352), 1,
      anon_sym_DOT,
    ACTIONS(348), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(350), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5249] = 16,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5312] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(146), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(358), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5353] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(160), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(362), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5394] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(155), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(366), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5435] = 5,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(153), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
    ACTIONS(370), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5476] = 2,
    ACTIONS(372), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(374), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5510] = 18,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_inline_map_repeat1,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [5576] = 2,
    ACTIONS(380), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(382), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5610] = 2,
    ACTIONS(384), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(386), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5644] = 2,
    ACTIONS(388), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(390), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5678] = 2,
    ACTIONS(392), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(394), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5712] = 16,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [5774] = 2,
    ACTIONS(398), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(400), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5808] = 2,
    ACTIONS(402), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(404), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5842] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_array_creation_repeat1,
    STATE(158), 1,
      sym_array_content,
    ACTIONS(406), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [5884] = 2,
    ACTIONS(414), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(416), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5918] = 2,
    ACTIONS(418), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(420), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5952] = 2,
    ACTIONS(422), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(424), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [5986] = 2,
    ACTIONS(426), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(428), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6020] = 2,
    ACTIONS(430), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(432), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6054] = 2,
    ACTIONS(434), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(436), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6088] = 16,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_PLUS,
    ACTIONS(165), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym_modulo,
    ACTIONS(171), 1,
      anon_sym_QMARK,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 2,
      sym_and,
      sym_and_2,
    ACTIONS(161), 2,
      sym_or,
      sym_or_2,
    STATE(47), 2,
      sym_add,
      sym_substract,
    STATE(50), 2,
      sym_multiply,
      sym_divide,
    STATE(55), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(157), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(155), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [6150] = 2,
    ACTIONS(440), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(442), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6184] = 18,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym_array_content_repeat1,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6250] = 2,
    ACTIONS(446), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(448), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6284] = 2,
    ACTIONS(450), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(452), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6318] = 2,
    ACTIONS(454), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COLON,
    ACTIONS(456), 26,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_QMARK,
  [6352] = 4,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_array_creation_repeat1,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 24,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [6389] = 2,
    ACTIONS(465), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(467), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6422] = 2,
    ACTIONS(469), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(471), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6455] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6516] = 2,
    ACTIONS(475), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(477), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6549] = 2,
    ACTIONS(479), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(481), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6582] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    ACTIONS(483), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6643] = 2,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6675] = 2,
    ACTIONS(485), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 25,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_exp,
  [6707] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6767] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(491), 1,
      anon_sym_COLON,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6827] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6887] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [6947] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7007] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7067] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7127] = 16,
    ACTIONS(264), 1,
      sym_exp,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      sym_modulo,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(310), 1,
      anon_sym_LT,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    ACTIONS(316), 2,
      sym_and,
      sym_and_2,
    ACTIONS(334), 2,
      sym_or,
      sym_or_2,
    STATE(13), 2,
      sym_multiply,
      sym_divide,
    STATE(19), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(312), 4,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(314), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
  [7187] = 2,
    ACTIONS(505), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(507), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7218] = 2,
    ACTIONS(509), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(511), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7249] = 3,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(513), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(515), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7282] = 2,
    ACTIONS(294), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(296), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7313] = 2,
    ACTIONS(519), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(521), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7344] = 2,
    ACTIONS(270), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(272), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7375] = 2,
    ACTIONS(523), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(525), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7406] = 2,
    ACTIONS(229), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(231), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7437] = 2,
    ACTIONS(527), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(529), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7468] = 3,
    ACTIONS(533), 1,
      anon_sym_EQ,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(535), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7501] = 3,
    ACTIONS(541), 1,
      anon_sym_f,
    ACTIONS(537), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(539), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7534] = 2,
    ACTIONS(543), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(545), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7564] = 2,
    ACTIONS(547), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(549), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7594] = 2,
    ACTIONS(551), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(553), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7624] = 2,
    ACTIONS(555), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(557), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7654] = 2,
    ACTIONS(233), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7684] = 2,
    ACTIONS(338), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7714] = 2,
    ACTIONS(559), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(561), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7744] = 2,
    ACTIONS(563), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(565), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7774] = 2,
    ACTIONS(567), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(569), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7804] = 2,
    ACTIONS(571), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(573), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7834] = 2,
    ACTIONS(575), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(577), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7864] = 2,
    ACTIONS(579), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(581), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7894] = 2,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7924] = 2,
    ACTIONS(583), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7954] = 2,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(589), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [7984] = 2,
    ACTIONS(591), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [8014] = 2,
    ACTIONS(364), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [8044] = 2,
    ACTIONS(595), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(597), 23,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_and_2,
      sym_or,
      sym_or_2,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_exp,
  [8074] = 13,
    ACTIONS(599), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(603), 1,
      sym_th_each,
    ACTIONS(611), 1,
      sym_th_remove,
    ACTIONS(613), 1,
      sym_th_fragment,
    ACTIONS(615), 1,
      sym_th_inline,
    STATE(466), 1,
      sym__th_fragments_insert,
    STATE(467), 1,
      sym__th_spel_only,
    STATE(468), 1,
      sym__th_assignation_sequence,
    ACTIONS(601), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(607), 2,
      sym_th_object,
      sym_th_with,
    STATE(465), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(609), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(605), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8122] = 13,
    ACTIONS(599), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(619), 1,
      sym_th_each,
    ACTIONS(627), 1,
      sym_th_remove,
    ACTIONS(629), 1,
      sym_th_fragment,
    ACTIONS(631), 1,
      sym_th_inline,
    STATE(458), 1,
      sym__th_fragments_insert,
    STATE(460), 1,
      sym__th_spel_only,
    STATE(469), 1,
      sym__th_assignation_sequence,
    ACTIONS(617), 2,
      sym_th_insert,
      sym_th_replace,
    ACTIONS(623), 2,
      sym_th_object,
      sym_th_with,
    STATE(447), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(625), 3,
      sym_th_attr,
      sym_th_attrappend,
      sym_th_attrprepend,
    ACTIONS(621), 4,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
  [8170] = 11,
    ACTIONS(633), 1,
      anon_sym_LT_BANG,
    ACTIONS(635), 1,
      anon_sym_LT,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    ACTIONS(641), 1,
      sym__implicit_end_tag,
    STATE(163), 1,
      sym_start_tag,
    STATE(225), 1,
      sym_end_tag,
    STATE(231), 1,
      sym_self_closing_tag,
    STATE(286), 1,
      sym_style_start_tag,
    STATE(288), 1,
      sym_script_start_tag,
    ACTIONS(639), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(164), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8212] = 11,
    ACTIONS(633), 1,
      anon_sym_LT_BANG,
    ACTIONS(635), 1,
      anon_sym_LT,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    ACTIONS(645), 1,
      sym__implicit_end_tag,
    STATE(163), 1,
      sym_start_tag,
    STATE(231), 1,
      sym_self_closing_tag,
    STATE(247), 1,
      sym_end_tag,
    STATE(286), 1,
      sym_style_start_tag,
    STATE(288), 1,
      sym_script_start_tag,
    ACTIONS(643), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(168), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8254] = 11,
    ACTIONS(633), 1,
      anon_sym_LT_BANG,
    ACTIONS(635), 1,
      anon_sym_LT,
    ACTIONS(647), 1,
      anon_sym_LT_SLASH,
    ACTIONS(651), 1,
      sym__implicit_end_tag,
    STATE(163), 1,
      sym_start_tag,
    STATE(218), 1,
      sym_end_tag,
    STATE(231), 1,
      sym_self_closing_tag,
    STATE(286), 1,
      sym_style_start_tag,
    STATE(288), 1,
      sym_script_start_tag,
    ACTIONS(649), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(166), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8296] = 11,
    ACTIONS(633), 1,
      anon_sym_LT_BANG,
    ACTIONS(635), 1,
      anon_sym_LT,
    ACTIONS(647), 1,
      anon_sym_LT_SLASH,
    ACTIONS(653), 1,
      sym__implicit_end_tag,
    STATE(163), 1,
      sym_start_tag,
    STATE(231), 1,
      sym_self_closing_tag,
    STATE(234), 1,
      sym_end_tag,
    STATE(286), 1,
      sym_style_start_tag,
    STATE(288), 1,
      sym_script_start_tag,
    ACTIONS(643), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(168), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8338] = 10,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(657), 1,
      anon_sym_LT_BANG,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(663), 1,
      anon_sym_LT_SLASH,
    STATE(165), 1,
      sym_start_tag,
    STATE(236), 1,
      sym_self_closing_tag,
    STATE(295), 1,
      sym_style_start_tag,
    STATE(298), 1,
      sym_script_start_tag,
    ACTIONS(666), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(167), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8377] = 10,
    ACTIONS(655), 1,
      sym__implicit_end_tag,
    ACTIONS(669), 1,
      anon_sym_LT_BANG,
    ACTIONS(672), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LT_SLASH,
    STATE(163), 1,
      sym_start_tag,
    STATE(231), 1,
      sym_self_closing_tag,
    STATE(286), 1,
      sym_style_start_tag,
    STATE(288), 1,
      sym_script_start_tag,
    ACTIONS(678), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(168), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8416] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
    STATE(165), 1,
      sym_start_tag,
    STATE(236), 1,
      sym_self_closing_tag,
    STATE(295), 1,
      sym_style_start_tag,
    STATE(298), 1,
      sym_script_start_tag,
    ACTIONS(683), 3,
      sym_comment,
      sym_entity,
      sym_text,
    STATE(167), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [8455] = 2,
    ACTIONS(687), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(685), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8477] = 2,
    ACTIONS(691), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(689), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8499] = 8,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      aux_sym_spel_object_literal_token1,
    STATE(337), 1,
      sym__spel_name,
    ACTIONS(697), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(315), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8533] = 2,
    ACTIONS(705), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(703), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8555] = 2,
    ACTIONS(709), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(707), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8577] = 2,
    ACTIONS(713), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(711), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8599] = 2,
    ACTIONS(717), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(715), 11,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
  [8621] = 2,
    ACTIONS(705), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(703), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8642] = 2,
    ACTIONS(709), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(707), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8663] = 2,
    ACTIONS(713), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(711), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8684] = 2,
    ACTIONS(717), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(715), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8705] = 2,
    ACTIONS(687), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(685), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8726] = 2,
    ACTIONS(691), 7,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_LBRACE,
      anon_sym_new,
      anon_sym_not,
      aux_sym_spel_object_literal_token1,
    ACTIONS(689), 9,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACE_COLON_RBRACE,
  [8747] = 7,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_spel_object_literal_token1,
    STATE(339), 1,
      sym__spel_name,
    ACTIONS(719), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(154), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8778] = 7,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      aux_sym_spel_object_literal_token1,
    STATE(337), 1,
      sym__spel_name,
    ACTIONS(721), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(343), 8,
      sym_integer_literal,
      sym_float_literal,
      sym_double_literal,
      sym__spel_literal,
      sym_spel_string_literal,
      sym_spel_variable,
      sym_spel_object_literal,
      sym_spel_method_literal,
  [8809] = 8,
    ACTIONS(723), 1,
      anon_sym_PIPE,
    ACTIONS(728), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(731), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(734), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(737), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(740), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(725), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(185), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [8841] = 8,
    ACTIONS(743), 1,
      anon_sym_PIPE,
    ACTIONS(747), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(749), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(751), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(753), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(745), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(185), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [8873] = 8,
    ACTIONS(749), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(751), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(753), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(757), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(759), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(186), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_spel_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [8905] = 9,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(767), 1,
      aux_sym_spel_object_literal_token2,
    STATE(212), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(242), 1,
      sym_null_operator,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(135), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [8936] = 5,
    ACTIONS(769), 1,
      sym_boolean_type,
    ACTIONS(775), 1,
      aux_sym_object_creation_expression_token1,
    ACTIONS(771), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(365), 3,
      sym__type,
      sym_floating_point_type,
      sym_integral_type,
    ACTIONS(773), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [8959] = 9,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(777), 1,
      aux_sym_spel_object_literal_token2,
    STATE(188), 1,
      aux_sym_spel_object_literal_repeat1,
    STATE(239), 1,
      sym_null_operator,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(139), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [8990] = 2,
    ACTIONS(386), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(384), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9005] = 2,
    ACTIONS(390), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(388), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9020] = 2,
    ACTIONS(448), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(446), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9035] = 2,
    ACTIONS(436), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(434), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9050] = 2,
    ACTIONS(400), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(398), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9065] = 7,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(779), 1,
      aux_sym_spel_object_literal_token2,
    STATE(197), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(147), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9090] = 7,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(767), 1,
      aux_sym_spel_object_literal_token2,
    STATE(212), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(156), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9115] = 2,
    ACTIONS(432), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(430), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9130] = 2,
    ACTIONS(382), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(380), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9145] = 2,
    ACTIONS(394), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(392), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [9160] = 5,
    ACTIONS(783), 1,
      anon_sym_th_COLON,
    ACTIONS(786), 1,
      aux_sym_attribute_name_token1,
    STATE(252), 1,
      sym_attribute_name,
    ACTIONS(781), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(201), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9180] = 6,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    STATE(243), 1,
      sym_null_operator,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(137), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9202] = 6,
    ACTIONS(789), 1,
      anon_sym_GT,
    ACTIONS(791), 1,
      anon_sym_SLASH_GT,
    ACTIONS(793), 1,
      anon_sym_th_COLON,
    ACTIONS(795), 1,
      aux_sym_attribute_name_token1,
    STATE(252), 1,
      sym_attribute_name,
    STATE(201), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9224] = 6,
    ACTIONS(793), 1,
      anon_sym_th_COLON,
    ACTIONS(795), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(797), 1,
      anon_sym_GT,
    ACTIONS(799), 1,
      anon_sym_SLASH_GT,
    STATE(252), 1,
      sym_attribute_name,
    STATE(203), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9246] = 6,
    ACTIONS(789), 1,
      anon_sym_GT,
    ACTIONS(793), 1,
      anon_sym_th_COLON,
    ACTIONS(795), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(801), 1,
      anon_sym_SLASH_GT,
    STATE(252), 1,
      sym_attribute_name,
    STATE(201), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9268] = 6,
    ACTIONS(793), 1,
      anon_sym_th_COLON,
    ACTIONS(795), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(797), 1,
      anon_sym_GT,
    ACTIONS(803), 1,
      anon_sym_SLASH_GT,
    STATE(252), 1,
      sym_attribute_name,
    STATE(205), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9290] = 5,
    ACTIONS(805), 1,
      anon_sym_GT,
    ACTIONS(807), 1,
      anon_sym_th_COLON,
    ACTIONS(809), 1,
      aux_sym_attribute_name_token1,
    STATE(269), 1,
      sym_attribute_name,
    STATE(210), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9309] = 5,
    ACTIONS(807), 1,
      anon_sym_th_COLON,
    ACTIONS(809), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(811), 1,
      anon_sym_GT,
    STATE(269), 1,
      sym_attribute_name,
    STATE(209), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9328] = 5,
    ACTIONS(807), 1,
      anon_sym_th_COLON,
    ACTIONS(809), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(813), 1,
      anon_sym_GT,
    STATE(269), 1,
      sym_attribute_name,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9347] = 5,
    ACTIONS(807), 1,
      anon_sym_th_COLON,
    ACTIONS(809), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(815), 1,
      anon_sym_GT,
    STATE(269), 1,
      sym_attribute_name,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9366] = 5,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(817), 1,
      anon_sym_th_COLON,
    ACTIONS(820), 1,
      aux_sym_attribute_name_token1,
    STATE(269), 1,
      sym_attribute_name,
    STATE(211), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [9385] = 3,
    ACTIONS(823), 1,
      aux_sym_spel_object_literal_token2,
    STATE(212), 1,
      aux_sym_spel_object_literal_repeat1,
    ACTIONS(249), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [9400] = 2,
    ACTIONS(828), 1,
      anon_sym_LT,
    ACTIONS(826), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9412] = 2,
    ACTIONS(832), 1,
      anon_sym_LT,
    ACTIONS(830), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9424] = 7,
    ACTIONS(834), 1,
      anon_sym_SLASH,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    ACTIONS(838), 1,
      sym_standard_url_fragment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(303), 1,
      sym_parameterized_url_fragment,
    STATE(428), 1,
      sym__url_std_expression,
  [9446] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(133), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9462] = 4,
    ACTIONS(842), 1,
      sym_remove_all,
    ACTIONS(846), 1,
      anon_sym_none,
    STATE(408), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(844), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [9478] = 2,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(848), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9490] = 2,
    ACTIONS(854), 1,
      anon_sym_LT,
    ACTIONS(852), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9502] = 2,
    ACTIONS(858), 1,
      anon_sym_LT,
    ACTIONS(856), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9514] = 2,
    ACTIONS(862), 1,
      anon_sym_LT,
    ACTIONS(860), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9526] = 2,
    ACTIONS(866), 1,
      anon_sym_LT,
    ACTIONS(864), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9538] = 2,
    ACTIONS(870), 1,
      anon_sym_LT,
    ACTIONS(868), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9550] = 2,
    ACTIONS(828), 1,
      anon_sym_LT,
    ACTIONS(826), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9562] = 2,
    ACTIONS(850), 1,
      anon_sym_LT,
    ACTIONS(848), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9574] = 2,
    ACTIONS(874), 1,
      anon_sym_LT,
    ACTIONS(872), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9586] = 2,
    ACTIONS(854), 1,
      anon_sym_LT,
    ACTIONS(852), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9598] = 2,
    ACTIONS(862), 1,
      anon_sym_LT,
    ACTIONS(860), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9610] = 2,
    ACTIONS(878), 1,
      anon_sym_LT,
    ACTIONS(876), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9622] = 2,
    ACTIONS(874), 1,
      anon_sym_LT,
    ACTIONS(872), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9634] = 2,
    ACTIONS(882), 1,
      anon_sym_LT,
    ACTIONS(880), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9646] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9658] = 7,
    ACTIONS(834), 1,
      anon_sym_SLASH,
    ACTIONS(838), 1,
      sym_standard_url_fragment,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(303), 1,
      sym_parameterized_url_fragment,
    STATE(420), 1,
      sym__url_std_expression,
  [9680] = 2,
    ACTIONS(892), 1,
      anon_sym_LT,
    ACTIONS(890), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9692] = 2,
    ACTIONS(858), 1,
      anon_sym_LT,
    ACTIONS(856), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9704] = 2,
    ACTIONS(882), 1,
      anon_sym_LT,
    ACTIONS(880), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9716] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(140), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9732] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(150), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9748] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(137), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9764] = 2,
    ACTIONS(886), 1,
      anon_sym_LT,
    ACTIONS(884), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9776] = 2,
    ACTIONS(832), 1,
      anon_sym_LT,
    ACTIONS(830), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9788] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(138), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9804] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(132), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9820] = 2,
    ACTIONS(866), 1,
      anon_sym_LT,
    ACTIONS(864), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9832] = 2,
    ACTIONS(878), 1,
      anon_sym_LT,
    ACTIONS(876), 6,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9844] = 4,
    ACTIONS(846), 1,
      anon_sym_none,
    ACTIONS(894), 1,
      sym_remove_all,
    STATE(415), 2,
      sym__th_remove_value,
      sym_remove_none,
    ACTIONS(896), 3,
      sym_remove_body,
      sym_remove_tag,
      sym_remove_abf,
  [9860] = 2,
    ACTIONS(892), 1,
      anon_sym_LT,
    ACTIONS(890), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9872] = 2,
    ACTIONS(900), 1,
      anon_sym_LT,
    ACTIONS(898), 6,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [9884] = 4,
    ACTIONS(763), 1,
      anon_sym_DOT,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(148), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9900] = 4,
    ACTIONS(896), 1,
      sym_inline_javascript,
    ACTIONS(902), 1,
      anon_sym_none,
    ACTIONS(904), 1,
      anon_sym_text,
    STATE(415), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [9915] = 4,
    ACTIONS(844), 1,
      sym_inline_javascript,
    ACTIONS(902), 1,
      anon_sym_none,
    ACTIONS(904), 1,
      anon_sym_text,
    STATE(408), 3,
      sym__th_inline_value,
      sym_inline_text,
      sym_inline_none,
  [9930] = 3,
    ACTIONS(908), 1,
      anon_sym_EQ,
    ACTIONS(910), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(906), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [9942] = 3,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(145), 3,
      sym__spel_post_accessor,
      sym_spel_property_access,
      sym_spel_method_access,
  [9954] = 2,
    ACTIONS(914), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(912), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [9964] = 3,
    ACTIONS(916), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(918), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [9975] = 3,
    ACTIONS(920), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(922), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [9986] = 2,
    ACTIONS(914), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(912), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_EQ,
  [9995] = 3,
    ACTIONS(925), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(927), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10006] = 4,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      aux_sym_url_parameter_token1,
    STATE(341), 1,
      sym_message_name,
    STATE(445), 1,
      sym__message_std_expression,
  [10019] = 3,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(935), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10030] = 3,
    ACTIONS(937), 1,
      anon_sym_SQUOTE,
    STATE(281), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(939), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10041] = 3,
    ACTIONS(941), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(935), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10052] = 4,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    STATE(332), 1,
      sym_url_parameter_assignement,
    STATE(388), 1,
      sym_url_parameter,
  [10065] = 2,
    ACTIONS(949), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(947), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10074] = 4,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_url_parameter_assignement,
    STATE(388), 1,
      sym_url_parameter,
  [10087] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_standard_url_fragment,
    STATE(271), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(290), 1,
      sym_parameterized_url_fragment,
  [10100] = 4,
    ACTIONS(955), 1,
      anon_sym_DQUOTE,
    ACTIONS(957), 1,
      sym_attribute_value,
    ACTIONS(959), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym_quoted_attribute_value,
  [10113] = 2,
    ACTIONS(963), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(961), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10122] = 3,
    ACTIONS(910), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(965), 1,
      anon_sym_EQ,
    ACTIONS(906), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10133] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_standard_url_fragment,
    STATE(275), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(290), 1,
      sym_parameterized_url_fragment,
  [10146] = 4,
    ACTIONS(967), 1,
      sym_standard_url_fragment,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(393), 1,
      sym_parameterized_url_fragment,
  [10159] = 3,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    ACTIONS(977), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10170] = 2,
    ACTIONS(981), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(979), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10179] = 4,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_url_parameter_assignement,
    STATE(388), 1,
      sym_url_parameter,
  [10192] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      sym_standard_url_fragment,
    STATE(271), 1,
      aux_sym__url_std_expression_repeat1,
    STATE(299), 1,
      sym_parameterized_url_fragment,
  [10205] = 4,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym_url_parameter_assignement,
    STATE(388), 1,
      sym_url_parameter,
  [10218] = 3,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    ACTIONS(977), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10229] = 3,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(977), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10240] = 2,
    ACTIONS(999), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(997), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_th_COLON,
  [10249] = 4,
    ACTIONS(931), 1,
      aux_sym_url_parameter_token1,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      sym_message_name,
    STATE(375), 1,
      sym__message_std_expression,
  [10262] = 3,
    ACTIONS(1003), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(935), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [10273] = 4,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      sym_attribute_value,
    ACTIONS(1009), 1,
      anon_sym_SQUOTE,
    STATE(312), 1,
      sym_quoted_attribute_value,
  [10286] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [10296] = 2,
    ACTIONS(963), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(961), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10304] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym__url_std_expression_repeat2,
  [10314] = 3,
    ACTIONS(1018), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1020), 1,
      sym_raw_text,
    STATE(228), 1,
      sym_end_tag,
  [10324] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_fragment_call_repeat1,
  [10334] = 3,
    ACTIONS(1018), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1024), 1,
      sym_raw_text,
    STATE(227), 1,
      sym_end_tag,
  [10344] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [10354] = 3,
    ACTIONS(973), 1,
      anon_sym_LPAREN,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    ACTIONS(1030), 1,
      anon_sym_SLASH,
  [10364] = 3,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_array_content_repeat1,
  [10374] = 3,
    ACTIONS(1035), 1,
      aux_sym_number_literal_token1,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      sym_integer_literal,
  [10384] = 1,
    ACTIONS(1039), 3,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [10390] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym__url_std_expression_repeat2,
  [10400] = 3,
    ACTIONS(1041), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1043), 1,
      sym_raw_text,
    STATE(221), 1,
      sym_end_tag,
  [10410] = 3,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym__url_std_expression_repeat2,
  [10420] = 2,
    ACTIONS(288), 1,
      anon_sym_COLON_COLON,
    ACTIONS(286), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [10428] = 3,
    ACTIONS(1041), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1045), 1,
      sym_raw_text,
    STATE(219), 1,
      sym_end_tag,
  [10438] = 3,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(1047), 1,
      anon_sym_SLASH,
  [10448] = 3,
    ACTIONS(1049), 1,
      aux_sym_spel_object_literal_token1,
    STATE(136), 1,
      sym_spel_method_literal,
    STATE(337), 1,
      sym__spel_name,
  [10458] = 3,
    ACTIONS(1051), 1,
      anon_sym_DQUOTE,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [10468] = 3,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    ACTIONS(1057), 1,
      aux_sym_attribute_name_token1,
    STATE(382), 1,
      sym_attribute_name,
  [10478] = 3,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    ACTIONS(1061), 1,
      anon_sym_SLASH,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
  [10488] = 2,
    ACTIONS(1067), 1,
      anon_sym_DOT,
    ACTIONS(1065), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [10496] = 3,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_spel_method_args_repeat1,
  [10506] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_th_fragment_declaration_repeat1,
  [10516] = 2,
    ACTIONS(999), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(997), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10524] = 3,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    STATE(371), 1,
      sym_url_parameter_assignement,
    STATE(388), 1,
      sym_url_parameter,
  [10534] = 2,
    ACTIONS(949), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(947), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10542] = 3,
    ACTIONS(1057), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
    STATE(382), 1,
      sym_attribute_name,
  [10552] = 3,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_th_assignation_sequence_repeat1,
  [10562] = 2,
    ACTIONS(981), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(979), 2,
      anon_sym_GT,
      anon_sym_th_COLON,
  [10570] = 3,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym__url_std_expression_repeat2,
  [10580] = 3,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym__url_std_expression_repeat2,
  [10590] = 3,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_spel_method_args_repeat1,
  [10600] = 3,
    ACTIONS(1084), 1,
      sym__start_tag_name,
    ACTIONS(1086), 1,
      sym__script_start_tag_name,
    ACTIONS(1088), 1,
      sym__style_start_tag_name,
  [10610] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym__url_std_expression_repeat2,
  [10620] = 3,
    ACTIONS(1095), 1,
      aux_sym_iterStat_token1,
    STATE(334), 1,
      sym_each_element,
    STATE(415), 1,
      sym_th_each_value,
  [10630] = 3,
    ACTIONS(1057), 1,
      aux_sym_attribute_name_token1,
    STATE(391), 1,
      sym_attribute_name,
    STATE(415), 1,
      sym_th_assignation_sequence,
  [10640] = 3,
    ACTIONS(1057), 1,
      aux_sym_attribute_name_token1,
    STATE(391), 1,
      sym_attribute_name,
    STATE(408), 1,
      sym_th_assignation_sequence,
  [10650] = 3,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_fragment_call_repeat1,
  [10660] = 3,
    ACTIONS(1100), 1,
      aux_sym_spel_object_literal_token1,
    STATE(136), 1,
      sym_spel_method_literal,
    STATE(339), 1,
      sym__spel_name,
  [10670] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      aux_sym_array_content_repeat1,
  [10680] = 3,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_inline_map_repeat1,
  [10690] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_spel_method_args_repeat1,
  [10700] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym__url_std_expression_repeat2,
  [10710] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_fragment_call_repeat1,
  [10720] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_inline_map_repeat1,
  [10730] = 3,
    ACTIONS(1086), 1,
      sym__script_start_tag_name,
    ACTIONS(1088), 1,
      sym__style_start_tag_name,
    ACTIONS(1120), 1,
      sym__start_tag_name,
  [10740] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      aux_sym_array_content_repeat1,
  [10750] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym__url_std_expression_repeat2,
  [10760] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym__url_std_expression_repeat2,
  [10770] = 3,
    ACTIONS(1095), 1,
      aux_sym_iterStat_token1,
    STATE(334), 1,
      sym_each_element,
    STATE(408), 1,
      sym_th_each_value,
  [10780] = 2,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_COLON,
  [10787] = 1,
    ACTIONS(1130), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [10792] = 2,
    ACTIONS(1041), 1,
      anon_sym_LT_SLASH,
    STATE(240), 1,
      sym_end_tag,
  [10799] = 2,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_spel_method_args,
  [10806] = 2,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(415), 1,
      sym_spel_th_std_expression,
  [10813] = 2,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_spel_method_args,
  [10820] = 2,
    ACTIONS(1134), 1,
      sym_fragment_name,
    STATE(415), 1,
      sym_th_fragment_declaration,
  [10827] = 2,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
  [10834] = 2,
    ACTIONS(1041), 1,
      anon_sym_LT_SLASH,
    STATE(235), 1,
      sym_end_tag,
  [10841] = 1,
    ACTIONS(1109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10846] = 2,
    ACTIONS(1140), 1,
      sym__end_tag_name,
    ACTIONS(1142), 1,
      sym_erroneous_end_tag_name,
  [10853] = 1,
    ACTIONS(1144), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [10858] = 2,
    ACTIONS(1142), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(1146), 1,
      sym__end_tag_name,
  [10865] = 2,
    ACTIONS(1057), 1,
      aux_sym_attribute_name_token1,
    STATE(382), 1,
      sym_attribute_name,
  [10872] = 2,
    ACTIONS(1148), 1,
      anon_sym_DQUOTE,
    ACTIONS(1150), 1,
      aux_sym_quoted_attribute_value_token2,
  [10879] = 2,
    ACTIONS(945), 1,
      aux_sym_url_parameter_token1,
    STATE(387), 1,
      sym_url_parameter,
  [10886] = 1,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10891] = 2,
    ACTIONS(1148), 1,
      anon_sym_SQUOTE,
    ACTIONS(1152), 1,
      aux_sym_quoted_attribute_value_token1,
  [10898] = 2,
    ACTIONS(1134), 1,
      sym_fragment_name,
    STATE(408), 1,
      sym_th_fragment_declaration,
  [10905] = 1,
    ACTIONS(1154), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [10910] = 2,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(408), 1,
      sym_spel_th_std_expression,
  [10917] = 1,
    ACTIONS(1156), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [10922] = 1,
    ACTIONS(977), 2,
      sym_standard_url_fragment,
      anon_sym_LBRACE,
  [10927] = 2,
    ACTIONS(1158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1160), 1,
      aux_sym_quoted_attribute_value_token1,
  [10934] = 2,
    ACTIONS(1158), 1,
      anon_sym_DQUOTE,
    ACTIONS(1162), 1,
      aux_sym_quoted_attribute_value_token2,
  [10941] = 2,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(1166), 1,
      sym_fragment_arg,
  [10948] = 1,
    ACTIONS(1168), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [10953] = 2,
    ACTIONS(1018), 1,
      anon_sym_LT_SLASH,
    STATE(232), 1,
      sym_end_tag,
  [10960] = 1,
    ACTIONS(1170), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [10965] = 2,
    ACTIONS(1018), 1,
      anon_sym_LT_SLASH,
    STATE(220), 1,
      sym_end_tag,
  [10972] = 1,
    ACTIONS(1172), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [10977] = 2,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      aux_sym_array_creation_repeat1,
  [10984] = 2,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(426), 1,
      sym_spel_th_std_expression,
  [10991] = 2,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(399), 1,
      sym_spel_th_std_expression,
  [10998] = 2,
    ACTIONS(1174), 1,
      aux_sym_iterStat_token1,
    STATE(402), 1,
      sym_iterStat,
  [11005] = 1,
    ACTIONS(1176), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [11010] = 1,
    ACTIONS(1178), 2,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [11015] = 1,
    ACTIONS(1093), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11020] = 1,
    ACTIONS(1180), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [11025] = 1,
    ACTIONS(1182), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [11030] = 1,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE,
  [11034] = 1,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
  [11038] = 1,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
  [11042] = 1,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
  [11046] = 1,
    ACTIONS(1192), 1,
      anon_sym_GT,
  [11050] = 1,
    ACTIONS(1194), 1,
      aux_sym_number_literal_token1,
  [11054] = 1,
    ACTIONS(1196), 1,
      sym_fragment_arg,
  [11058] = 1,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
  [11062] = 1,
    ACTIONS(1200), 1,
      anon_sym_EQ,
  [11066] = 1,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE,
  [11070] = 1,
    ACTIONS(1204), 1,
      aux_sym_token_literal_token2,
  [11074] = 1,
    ACTIONS(1206), 1,
      aux_sym_url_parameter_token1,
  [11078] = 1,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
  [11082] = 1,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
  [11086] = 1,
    ACTIONS(1210), 1,
      anon_sym_EQ,
  [11090] = 1,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
  [11094] = 1,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
  [11098] = 1,
    ACTIONS(1214), 1,
      anon_sym_EQ,
  [11102] = 1,
    ACTIONS(1216), 1,
      anon_sym_GT,
  [11106] = 1,
    ACTIONS(1218), 1,
      anon_sym_SLASH,
  [11110] = 1,
    ACTIONS(1220), 1,
      anon_sym_DQUOTE,
  [11114] = 1,
    ACTIONS(1222), 1,
      anon_sym_LBRACK,
  [11118] = 1,
    ACTIONS(1224), 1,
      anon_sym_LBRACK,
  [11122] = 1,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
  [11126] = 1,
    ACTIONS(1228), 1,
      anon_sym_DQUOTE,
  [11130] = 1,
    ACTIONS(1230), 1,
      anon_sym_DQUOTE,
  [11134] = 1,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
  [11138] = 1,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
  [11142] = 1,
    ACTIONS(1236), 1,
      anon_sym_COLON,
  [11146] = 1,
    ACTIONS(1238), 1,
      anon_sym_GT,
  [11150] = 1,
    ACTIONS(1240), 1,
      anon_sym_COLON,
  [11154] = 1,
    ACTIONS(1242), 1,
      anon_sym_DQUOTE,
  [11158] = 1,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
  [11162] = 1,
    ACTIONS(1246), 1,
      anon_sym_GT,
  [11166] = 1,
    ACTIONS(1248), 1,
      anon_sym_DQUOTE,
  [11170] = 1,
    ACTIONS(1250), 1,
      anon_sym_GT,
  [11174] = 1,
    ACTIONS(1252), 1,
      anon_sym_RBRACE,
  [11178] = 1,
    ACTIONS(1254), 1,
      aux_sym_doctype_token1,
  [11182] = 1,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
  [11186] = 1,
    ACTIONS(1258), 1,
      anon_sym_DQUOTE,
  [11190] = 1,
    ACTIONS(1258), 1,
      anon_sym_SQUOTE,
  [11194] = 1,
    ACTIONS(1260), 1,
      anon_sym_DQUOTE,
  [11198] = 1,
    ACTIONS(1262), 1,
      anon_sym_DQUOTE,
  [11202] = 1,
    ACTIONS(1264), 1,
      anon_sym_SQUOTE,
  [11206] = 1,
    ACTIONS(1266), 1,
      aux_sym_number_literal_token1,
  [11210] = 1,
    ACTIONS(1268), 1,
      anon_sym_RBRACE,
  [11214] = 1,
    ACTIONS(1270), 1,
      anon_sym_RBRACE,
  [11218] = 1,
    ACTIONS(1272), 1,
      anon_sym_LPAREN,
  [11222] = 1,
    ACTIONS(1264), 1,
      anon_sym_DQUOTE,
  [11226] = 1,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [11230] = 1,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
  [11234] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
  [11238] = 1,
    ACTIONS(1278), 1,
      anon_sym_DQUOTE,
  [11242] = 1,
    ACTIONS(1280), 1,
      anon_sym_GT,
  [11246] = 1,
    ACTIONS(1282), 1,
      anon_sym_RBRACE,
  [11250] = 1,
    ACTIONS(1284), 1,
      anon_sym_EQ,
  [11254] = 1,
    ACTIONS(1286), 1,
      anon_sym_EQ,
  [11258] = 1,
    ACTIONS(1288), 1,
      aux_sym_object_creation_expression_token1,
  [11262] = 1,
    ACTIONS(1142), 1,
      sym_erroneous_end_tag_name,
  [11266] = 1,
    ACTIONS(1290), 1,
      aux_sym_doctype_token1,
  [11270] = 1,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
  [11274] = 1,
    ACTIONS(1140), 1,
      sym__end_tag_name,
  [11278] = 1,
    ACTIONS(1294), 1,
      anon_sym_EQ,
  [11282] = 1,
    ACTIONS(1296), 1,
      sym__doctype,
  [11286] = 1,
    ACTIONS(1146), 1,
      sym__end_tag_name,
  [11290] = 1,
    ACTIONS(1298), 1,
      anon_sym_DQUOTE,
  [11294] = 1,
    ACTIONS(1300), 1,
      aux_sym_object_creation_expression_token1,
  [11298] = 1,
    ACTIONS(1302), 1,
      ts_builtin_sym_end,
  [11302] = 1,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
  [11306] = 1,
    ACTIONS(1306), 1,
      anon_sym_EQ,
  [11310] = 1,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
  [11314] = 1,
    ACTIONS(1310), 1,
      anon_sym_RBRACE,
  [11318] = 1,
    ACTIONS(1312), 1,
      anon_sym_EQ,
  [11322] = 1,
    ACTIONS(1314), 1,
      anon_sym_EQ,
  [11326] = 1,
    ACTIONS(1316), 1,
      sym_erroneous_end_tag_name,
  [11330] = 1,
    ACTIONS(1318), 1,
      sym__doctype,
  [11334] = 1,
    ACTIONS(1320), 1,
      anon_sym_DQUOTE,
  [11338] = 1,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
  [11342] = 1,
    ACTIONS(1324), 1,
      anon_sym_DQUOTE,
  [11346] = 1,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
  [11350] = 1,
    ACTIONS(1328), 1,
      anon_sym_DQUOTE,
  [11354] = 1,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
  [11358] = 1,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
  [11362] = 1,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
  [11366] = 1,
    ACTIONS(1336), 1,
      anon_sym_EQ,
  [11370] = 1,
    ACTIONS(1338), 1,
      aux_sym_object_creation_expression_token1,
  [11374] = 1,
    ACTIONS(1340), 1,
      anon_sym_EQ,
  [11378] = 1,
    ACTIONS(1342), 1,
      anon_sym_EQ,
  [11382] = 1,
    ACTIONS(1344), 1,
      anon_sym_EQ,
  [11386] = 1,
    ACTIONS(1346), 1,
      anon_sym_EQ,
  [11390] = 1,
    ACTIONS(1348), 1,
      anon_sym_EQ,
  [11394] = 1,
    ACTIONS(1350), 1,
      anon_sym_EQ,
  [11398] = 1,
    ACTIONS(1352), 1,
      anon_sym_EQ,
  [11402] = 1,
    ACTIONS(1354), 1,
      anon_sym_EQ,
  [11406] = 1,
    ACTIONS(1356), 1,
      anon_sym_EQ,
  [11410] = 1,
    ACTIONS(1358), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 358,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 498,
  [SMALL_STATE(10)] = 565,
  [SMALL_STATE(11)] = 632,
  [SMALL_STATE(12)] = 699,
  [SMALL_STATE(13)] = 766,
  [SMALL_STATE(14)] = 833,
  [SMALL_STATE(15)] = 900,
  [SMALL_STATE(16)] = 967,
  [SMALL_STATE(17)] = 1042,
  [SMALL_STATE(18)] = 1109,
  [SMALL_STATE(19)] = 1176,
  [SMALL_STATE(20)] = 1243,
  [SMALL_STATE(21)] = 1300,
  [SMALL_STATE(22)] = 1367,
  [SMALL_STATE(23)] = 1442,
  [SMALL_STATE(24)] = 1509,
  [SMALL_STATE(25)] = 1576,
  [SMALL_STATE(26)] = 1643,
  [SMALL_STATE(27)] = 1700,
  [SMALL_STATE(28)] = 1767,
  [SMALL_STATE(29)] = 1813,
  [SMALL_STATE(30)] = 1883,
  [SMALL_STATE(31)] = 1935,
  [SMALL_STATE(32)] = 2007,
  [SMALL_STATE(33)] = 2077,
  [SMALL_STATE(34)] = 2123,
  [SMALL_STATE(35)] = 2189,
  [SMALL_STATE(36)] = 2261,
  [SMALL_STATE(37)] = 2325,
  [SMALL_STATE(38)] = 2397,
  [SMALL_STATE(39)] = 2469,
  [SMALL_STATE(40)] = 2525,
  [SMALL_STATE(41)] = 2587,
  [SMALL_STATE(42)] = 2659,
  [SMALL_STATE(43)] = 2728,
  [SMALL_STATE(44)] = 2797,
  [SMALL_STATE(45)] = 2866,
  [SMALL_STATE(46)] = 2935,
  [SMALL_STATE(47)] = 3004,
  [SMALL_STATE(48)] = 3073,
  [SMALL_STATE(49)] = 3142,
  [SMALL_STATE(50)] = 3211,
  [SMALL_STATE(51)] = 3280,
  [SMALL_STATE(52)] = 3349,
  [SMALL_STATE(53)] = 3418,
  [SMALL_STATE(54)] = 3487,
  [SMALL_STATE(55)] = 3556,
  [SMALL_STATE(56)] = 3625,
  [SMALL_STATE(57)] = 3675,
  [SMALL_STATE(58)] = 3723,
  [SMALL_STATE(59)] = 3773,
  [SMALL_STATE(60)] = 3816,
  [SMALL_STATE(61)] = 3857,
  [SMALL_STATE(62)] = 3900,
  [SMALL_STATE(63)] = 3944,
  [SMALL_STATE(64)] = 3986,
  [SMALL_STATE(65)] = 4028,
  [SMALL_STATE(66)] = 4096,
  [SMALL_STATE(67)] = 4164,
  [SMALL_STATE(68)] = 4230,
  [SMALL_STATE(69)] = 4296,
  [SMALL_STATE(70)] = 4338,
  [SMALL_STATE(71)] = 4380,
  [SMALL_STATE(72)] = 4434,
  [SMALL_STATE(73)] = 4492,
  [SMALL_STATE(74)] = 4552,
  [SMALL_STATE(75)] = 4614,
  [SMALL_STATE(76)] = 4656,
  [SMALL_STATE(77)] = 4706,
  [SMALL_STATE(78)] = 4748,
  [SMALL_STATE(79)] = 4784,
  [SMALL_STATE(80)] = 4826,
  [SMALL_STATE(81)] = 4894,
  [SMALL_STATE(82)] = 4957,
  [SMALL_STATE(83)] = 4998,
  [SMALL_STATE(84)] = 5067,
  [SMALL_STATE(85)] = 5108,
  [SMALL_STATE(86)] = 5171,
  [SMALL_STATE(87)] = 5212,
  [SMALL_STATE(88)] = 5249,
  [SMALL_STATE(89)] = 5312,
  [SMALL_STATE(90)] = 5353,
  [SMALL_STATE(91)] = 5394,
  [SMALL_STATE(92)] = 5435,
  [SMALL_STATE(93)] = 5476,
  [SMALL_STATE(94)] = 5510,
  [SMALL_STATE(95)] = 5576,
  [SMALL_STATE(96)] = 5610,
  [SMALL_STATE(97)] = 5644,
  [SMALL_STATE(98)] = 5678,
  [SMALL_STATE(99)] = 5712,
  [SMALL_STATE(100)] = 5774,
  [SMALL_STATE(101)] = 5808,
  [SMALL_STATE(102)] = 5842,
  [SMALL_STATE(103)] = 5884,
  [SMALL_STATE(104)] = 5918,
  [SMALL_STATE(105)] = 5952,
  [SMALL_STATE(106)] = 5986,
  [SMALL_STATE(107)] = 6020,
  [SMALL_STATE(108)] = 6054,
  [SMALL_STATE(109)] = 6088,
  [SMALL_STATE(110)] = 6150,
  [SMALL_STATE(111)] = 6184,
  [SMALL_STATE(112)] = 6250,
  [SMALL_STATE(113)] = 6284,
  [SMALL_STATE(114)] = 6318,
  [SMALL_STATE(115)] = 6352,
  [SMALL_STATE(116)] = 6389,
  [SMALL_STATE(117)] = 6422,
  [SMALL_STATE(118)] = 6455,
  [SMALL_STATE(119)] = 6516,
  [SMALL_STATE(120)] = 6549,
  [SMALL_STATE(121)] = 6582,
  [SMALL_STATE(122)] = 6643,
  [SMALL_STATE(123)] = 6675,
  [SMALL_STATE(124)] = 6707,
  [SMALL_STATE(125)] = 6767,
  [SMALL_STATE(126)] = 6827,
  [SMALL_STATE(127)] = 6887,
  [SMALL_STATE(128)] = 6947,
  [SMALL_STATE(129)] = 7007,
  [SMALL_STATE(130)] = 7067,
  [SMALL_STATE(131)] = 7127,
  [SMALL_STATE(132)] = 7187,
  [SMALL_STATE(133)] = 7218,
  [SMALL_STATE(134)] = 7249,
  [SMALL_STATE(135)] = 7282,
  [SMALL_STATE(136)] = 7313,
  [SMALL_STATE(137)] = 7344,
  [SMALL_STATE(138)] = 7375,
  [SMALL_STATE(139)] = 7406,
  [SMALL_STATE(140)] = 7437,
  [SMALL_STATE(141)] = 7468,
  [SMALL_STATE(142)] = 7501,
  [SMALL_STATE(143)] = 7534,
  [SMALL_STATE(144)] = 7564,
  [SMALL_STATE(145)] = 7594,
  [SMALL_STATE(146)] = 7624,
  [SMALL_STATE(147)] = 7654,
  [SMALL_STATE(148)] = 7684,
  [SMALL_STATE(149)] = 7714,
  [SMALL_STATE(150)] = 7744,
  [SMALL_STATE(151)] = 7774,
  [SMALL_STATE(152)] = 7804,
  [SMALL_STATE(153)] = 7834,
  [SMALL_STATE(154)] = 7864,
  [SMALL_STATE(155)] = 7894,
  [SMALL_STATE(156)] = 7924,
  [SMALL_STATE(157)] = 7954,
  [SMALL_STATE(158)] = 7984,
  [SMALL_STATE(159)] = 8014,
  [SMALL_STATE(160)] = 8044,
  [SMALL_STATE(161)] = 8074,
  [SMALL_STATE(162)] = 8122,
  [SMALL_STATE(163)] = 8170,
  [SMALL_STATE(164)] = 8212,
  [SMALL_STATE(165)] = 8254,
  [SMALL_STATE(166)] = 8296,
  [SMALL_STATE(167)] = 8338,
  [SMALL_STATE(168)] = 8377,
  [SMALL_STATE(169)] = 8416,
  [SMALL_STATE(170)] = 8455,
  [SMALL_STATE(171)] = 8477,
  [SMALL_STATE(172)] = 8499,
  [SMALL_STATE(173)] = 8533,
  [SMALL_STATE(174)] = 8555,
  [SMALL_STATE(175)] = 8577,
  [SMALL_STATE(176)] = 8599,
  [SMALL_STATE(177)] = 8621,
  [SMALL_STATE(178)] = 8642,
  [SMALL_STATE(179)] = 8663,
  [SMALL_STATE(180)] = 8684,
  [SMALL_STATE(181)] = 8705,
  [SMALL_STATE(182)] = 8726,
  [SMALL_STATE(183)] = 8747,
  [SMALL_STATE(184)] = 8778,
  [SMALL_STATE(185)] = 8809,
  [SMALL_STATE(186)] = 8841,
  [SMALL_STATE(187)] = 8873,
  [SMALL_STATE(188)] = 8905,
  [SMALL_STATE(189)] = 8936,
  [SMALL_STATE(190)] = 8959,
  [SMALL_STATE(191)] = 8990,
  [SMALL_STATE(192)] = 9005,
  [SMALL_STATE(193)] = 9020,
  [SMALL_STATE(194)] = 9035,
  [SMALL_STATE(195)] = 9050,
  [SMALL_STATE(196)] = 9065,
  [SMALL_STATE(197)] = 9090,
  [SMALL_STATE(198)] = 9115,
  [SMALL_STATE(199)] = 9130,
  [SMALL_STATE(200)] = 9145,
  [SMALL_STATE(201)] = 9160,
  [SMALL_STATE(202)] = 9180,
  [SMALL_STATE(203)] = 9202,
  [SMALL_STATE(204)] = 9224,
  [SMALL_STATE(205)] = 9246,
  [SMALL_STATE(206)] = 9268,
  [SMALL_STATE(207)] = 9290,
  [SMALL_STATE(208)] = 9309,
  [SMALL_STATE(209)] = 9328,
  [SMALL_STATE(210)] = 9347,
  [SMALL_STATE(211)] = 9366,
  [SMALL_STATE(212)] = 9385,
  [SMALL_STATE(213)] = 9400,
  [SMALL_STATE(214)] = 9412,
  [SMALL_STATE(215)] = 9424,
  [SMALL_STATE(216)] = 9446,
  [SMALL_STATE(217)] = 9462,
  [SMALL_STATE(218)] = 9478,
  [SMALL_STATE(219)] = 9490,
  [SMALL_STATE(220)] = 9502,
  [SMALL_STATE(221)] = 9514,
  [SMALL_STATE(222)] = 9526,
  [SMALL_STATE(223)] = 9538,
  [SMALL_STATE(224)] = 9550,
  [SMALL_STATE(225)] = 9562,
  [SMALL_STATE(226)] = 9574,
  [SMALL_STATE(227)] = 9586,
  [SMALL_STATE(228)] = 9598,
  [SMALL_STATE(229)] = 9610,
  [SMALL_STATE(230)] = 9622,
  [SMALL_STATE(231)] = 9634,
  [SMALL_STATE(232)] = 9646,
  [SMALL_STATE(233)] = 9658,
  [SMALL_STATE(234)] = 9680,
  [SMALL_STATE(235)] = 9692,
  [SMALL_STATE(236)] = 9704,
  [SMALL_STATE(237)] = 9716,
  [SMALL_STATE(238)] = 9732,
  [SMALL_STATE(239)] = 9748,
  [SMALL_STATE(240)] = 9764,
  [SMALL_STATE(241)] = 9776,
  [SMALL_STATE(242)] = 9788,
  [SMALL_STATE(243)] = 9804,
  [SMALL_STATE(244)] = 9820,
  [SMALL_STATE(245)] = 9832,
  [SMALL_STATE(246)] = 9844,
  [SMALL_STATE(247)] = 9860,
  [SMALL_STATE(248)] = 9872,
  [SMALL_STATE(249)] = 9884,
  [SMALL_STATE(250)] = 9900,
  [SMALL_STATE(251)] = 9915,
  [SMALL_STATE(252)] = 9930,
  [SMALL_STATE(253)] = 9942,
  [SMALL_STATE(254)] = 9954,
  [SMALL_STATE(255)] = 9964,
  [SMALL_STATE(256)] = 9975,
  [SMALL_STATE(257)] = 9986,
  [SMALL_STATE(258)] = 9995,
  [SMALL_STATE(259)] = 10006,
  [SMALL_STATE(260)] = 10019,
  [SMALL_STATE(261)] = 10030,
  [SMALL_STATE(262)] = 10041,
  [SMALL_STATE(263)] = 10052,
  [SMALL_STATE(264)] = 10065,
  [SMALL_STATE(265)] = 10074,
  [SMALL_STATE(266)] = 10087,
  [SMALL_STATE(267)] = 10100,
  [SMALL_STATE(268)] = 10113,
  [SMALL_STATE(269)] = 10122,
  [SMALL_STATE(270)] = 10133,
  [SMALL_STATE(271)] = 10146,
  [SMALL_STATE(272)] = 10159,
  [SMALL_STATE(273)] = 10170,
  [SMALL_STATE(274)] = 10179,
  [SMALL_STATE(275)] = 10192,
  [SMALL_STATE(276)] = 10205,
  [SMALL_STATE(277)] = 10218,
  [SMALL_STATE(278)] = 10229,
  [SMALL_STATE(279)] = 10240,
  [SMALL_STATE(280)] = 10249,
  [SMALL_STATE(281)] = 10262,
  [SMALL_STATE(282)] = 10273,
  [SMALL_STATE(283)] = 10286,
  [SMALL_STATE(284)] = 10296,
  [SMALL_STATE(285)] = 10304,
  [SMALL_STATE(286)] = 10314,
  [SMALL_STATE(287)] = 10324,
  [SMALL_STATE(288)] = 10334,
  [SMALL_STATE(289)] = 10344,
  [SMALL_STATE(290)] = 10354,
  [SMALL_STATE(291)] = 10364,
  [SMALL_STATE(292)] = 10374,
  [SMALL_STATE(293)] = 10384,
  [SMALL_STATE(294)] = 10390,
  [SMALL_STATE(295)] = 10400,
  [SMALL_STATE(296)] = 10410,
  [SMALL_STATE(297)] = 10420,
  [SMALL_STATE(298)] = 10428,
  [SMALL_STATE(299)] = 10438,
  [SMALL_STATE(300)] = 10448,
  [SMALL_STATE(301)] = 10458,
  [SMALL_STATE(302)] = 10468,
  [SMALL_STATE(303)] = 10478,
  [SMALL_STATE(304)] = 10488,
  [SMALL_STATE(305)] = 10496,
  [SMALL_STATE(306)] = 10506,
  [SMALL_STATE(307)] = 10516,
  [SMALL_STATE(308)] = 10524,
  [SMALL_STATE(309)] = 10534,
  [SMALL_STATE(310)] = 10542,
  [SMALL_STATE(311)] = 10552,
  [SMALL_STATE(312)] = 10562,
  [SMALL_STATE(313)] = 10570,
  [SMALL_STATE(314)] = 10580,
  [SMALL_STATE(315)] = 10590,
  [SMALL_STATE(316)] = 10600,
  [SMALL_STATE(317)] = 10610,
  [SMALL_STATE(318)] = 10620,
  [SMALL_STATE(319)] = 10630,
  [SMALL_STATE(320)] = 10640,
  [SMALL_STATE(321)] = 10650,
  [SMALL_STATE(322)] = 10660,
  [SMALL_STATE(323)] = 10670,
  [SMALL_STATE(324)] = 10680,
  [SMALL_STATE(325)] = 10690,
  [SMALL_STATE(326)] = 10700,
  [SMALL_STATE(327)] = 10710,
  [SMALL_STATE(328)] = 10720,
  [SMALL_STATE(329)] = 10730,
  [SMALL_STATE(330)] = 10740,
  [SMALL_STATE(331)] = 10750,
  [SMALL_STATE(332)] = 10760,
  [SMALL_STATE(333)] = 10770,
  [SMALL_STATE(334)] = 10780,
  [SMALL_STATE(335)] = 10787,
  [SMALL_STATE(336)] = 10792,
  [SMALL_STATE(337)] = 10799,
  [SMALL_STATE(338)] = 10806,
  [SMALL_STATE(339)] = 10813,
  [SMALL_STATE(340)] = 10820,
  [SMALL_STATE(341)] = 10827,
  [SMALL_STATE(342)] = 10834,
  [SMALL_STATE(343)] = 10841,
  [SMALL_STATE(344)] = 10846,
  [SMALL_STATE(345)] = 10853,
  [SMALL_STATE(346)] = 10858,
  [SMALL_STATE(347)] = 10865,
  [SMALL_STATE(348)] = 10872,
  [SMALL_STATE(349)] = 10879,
  [SMALL_STATE(350)] = 10886,
  [SMALL_STATE(351)] = 10891,
  [SMALL_STATE(352)] = 10898,
  [SMALL_STATE(353)] = 10905,
  [SMALL_STATE(354)] = 10910,
  [SMALL_STATE(355)] = 10917,
  [SMALL_STATE(356)] = 10922,
  [SMALL_STATE(357)] = 10927,
  [SMALL_STATE(358)] = 10934,
  [SMALL_STATE(359)] = 10941,
  [SMALL_STATE(360)] = 10948,
  [SMALL_STATE(361)] = 10953,
  [SMALL_STATE(362)] = 10960,
  [SMALL_STATE(363)] = 10965,
  [SMALL_STATE(364)] = 10972,
  [SMALL_STATE(365)] = 10977,
  [SMALL_STATE(366)] = 10984,
  [SMALL_STATE(367)] = 10991,
  [SMALL_STATE(368)] = 10998,
  [SMALL_STATE(369)] = 11005,
  [SMALL_STATE(370)] = 11010,
  [SMALL_STATE(371)] = 11015,
  [SMALL_STATE(372)] = 11020,
  [SMALL_STATE(373)] = 11025,
  [SMALL_STATE(374)] = 11030,
  [SMALL_STATE(375)] = 11034,
  [SMALL_STATE(376)] = 11038,
  [SMALL_STATE(377)] = 11042,
  [SMALL_STATE(378)] = 11046,
  [SMALL_STATE(379)] = 11050,
  [SMALL_STATE(380)] = 11054,
  [SMALL_STATE(381)] = 11058,
  [SMALL_STATE(382)] = 11062,
  [SMALL_STATE(383)] = 11066,
  [SMALL_STATE(384)] = 11070,
  [SMALL_STATE(385)] = 11074,
  [SMALL_STATE(386)] = 11078,
  [SMALL_STATE(387)] = 11082,
  [SMALL_STATE(388)] = 11086,
  [SMALL_STATE(389)] = 11090,
  [SMALL_STATE(390)] = 11094,
  [SMALL_STATE(391)] = 11098,
  [SMALL_STATE(392)] = 11102,
  [SMALL_STATE(393)] = 11106,
  [SMALL_STATE(394)] = 11110,
  [SMALL_STATE(395)] = 11114,
  [SMALL_STATE(396)] = 11118,
  [SMALL_STATE(397)] = 11122,
  [SMALL_STATE(398)] = 11126,
  [SMALL_STATE(399)] = 11130,
  [SMALL_STATE(400)] = 11134,
  [SMALL_STATE(401)] = 11138,
  [SMALL_STATE(402)] = 11142,
  [SMALL_STATE(403)] = 11146,
  [SMALL_STATE(404)] = 11150,
  [SMALL_STATE(405)] = 11154,
  [SMALL_STATE(406)] = 11158,
  [SMALL_STATE(407)] = 11162,
  [SMALL_STATE(408)] = 11166,
  [SMALL_STATE(409)] = 11170,
  [SMALL_STATE(410)] = 11174,
  [SMALL_STATE(411)] = 11178,
  [SMALL_STATE(412)] = 11182,
  [SMALL_STATE(413)] = 11186,
  [SMALL_STATE(414)] = 11190,
  [SMALL_STATE(415)] = 11194,
  [SMALL_STATE(416)] = 11198,
  [SMALL_STATE(417)] = 11202,
  [SMALL_STATE(418)] = 11206,
  [SMALL_STATE(419)] = 11210,
  [SMALL_STATE(420)] = 11214,
  [SMALL_STATE(421)] = 11218,
  [SMALL_STATE(422)] = 11222,
  [SMALL_STATE(423)] = 11226,
  [SMALL_STATE(424)] = 11230,
  [SMALL_STATE(425)] = 11234,
  [SMALL_STATE(426)] = 11238,
  [SMALL_STATE(427)] = 11242,
  [SMALL_STATE(428)] = 11246,
  [SMALL_STATE(429)] = 11250,
  [SMALL_STATE(430)] = 11254,
  [SMALL_STATE(431)] = 11258,
  [SMALL_STATE(432)] = 11262,
  [SMALL_STATE(433)] = 11266,
  [SMALL_STATE(434)] = 11270,
  [SMALL_STATE(435)] = 11274,
  [SMALL_STATE(436)] = 11278,
  [SMALL_STATE(437)] = 11282,
  [SMALL_STATE(438)] = 11286,
  [SMALL_STATE(439)] = 11290,
  [SMALL_STATE(440)] = 11294,
  [SMALL_STATE(441)] = 11298,
  [SMALL_STATE(442)] = 11302,
  [SMALL_STATE(443)] = 11306,
  [SMALL_STATE(444)] = 11310,
  [SMALL_STATE(445)] = 11314,
  [SMALL_STATE(446)] = 11318,
  [SMALL_STATE(447)] = 11322,
  [SMALL_STATE(448)] = 11326,
  [SMALL_STATE(449)] = 11330,
  [SMALL_STATE(450)] = 11334,
  [SMALL_STATE(451)] = 11338,
  [SMALL_STATE(452)] = 11342,
  [SMALL_STATE(453)] = 11346,
  [SMALL_STATE(454)] = 11350,
  [SMALL_STATE(455)] = 11354,
  [SMALL_STATE(456)] = 11358,
  [SMALL_STATE(457)] = 11362,
  [SMALL_STATE(458)] = 11366,
  [SMALL_STATE(459)] = 11370,
  [SMALL_STATE(460)] = 11374,
  [SMALL_STATE(461)] = 11378,
  [SMALL_STATE(462)] = 11382,
  [SMALL_STATE(463)] = 11386,
  [SMALL_STATE(464)] = 11390,
  [SMALL_STATE(465)] = 11394,
  [SMALL_STATE(466)] = 11398,
  [SMALL_STATE(467)] = 11402,
  [SMALL_STATE(468)] = 11406,
  [SMALL_STATE(469)] = 11410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 2, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_name, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 3, .production_id = 10),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(384),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(59),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(60),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_spel_expression, 3, .production_id = 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_spel_expression, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 3, .production_id = 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 2, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 4, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 4, .production_id = 22),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter_assignement, 3, .production_id = 17),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 5, .production_id = 19),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 20),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 20),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_th_std_expression, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_th_std_expression, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 2), SHIFT_REPEAT(292),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_operator, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_operator, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_args, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_args, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 4, .production_id = 19),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_creation_repeat1, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 5, .production_id = 10),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 5, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_variable, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_variable, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_access, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_access, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_property_access, 5, .production_id = 14),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_property_access, 5, .production_id = 14),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_method_literal, 3, .production_id = 5),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spel_literal, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spel_literal, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_literal, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_literal, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 6, .production_id = 19),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_parenthesized_expression, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_string_literal, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_string_literal, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_content, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_map, 7, .production_id = 20),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_map, 7, .production_id = 20),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_assignement_expression, 3, .production_id = 11),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_object_literal, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spel_object_literal, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_creation_expression, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_creation_expression, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_creation, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_creation, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_list, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_list, 5),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(437),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(329),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(448),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(167),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(449),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(316),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(432),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divide, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(185),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(185),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(233),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(280),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(2),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(8),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spel_new, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(162),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(254),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(161),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(257),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_object_literal_repeat1, 2), SHIFT_REPEAT(212),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(256),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(393),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2), SHIFT_REPEAT(349),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat1, 2),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_th_attribute, 6, .production_id = 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2), SHIFT_REPEAT(380),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_fragment_declaration_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2), SHIFT_REPEAT(21),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterized_url_fragment, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 12),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 4, .production_id = 8),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_assignation_sequence, 5, .production_id = 12),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_th_assignation_sequence_repeat1, 2, .production_id = 16), SHIFT_REPEAT(347),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2), SHIFT_REPEAT(308),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__url_std_expression_repeat2, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_call_repeat1, 2), SHIFT_REPEAT(44),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2), SHIFT_REPEAT(184),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spel_method_args_repeat1, 2),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 21), SHIFT_REPEAT(23),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_map_repeat1, 2, .production_id = 21),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 1, .production_id = 3),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 4),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 5),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_element, 1),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_std_expression, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_parameter, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_call, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_none, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 5),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 4),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 3, .production_id = 9),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 5, .production_id = 18),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterStat, 1),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_none, 1),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_std_expression, 4, .production_id = 13),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 8),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_fragment_declaration, 5),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 7),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_each_value, 5),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_std_expression, 6),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_thymeleaf_external_scanner_create(void);
void tree_sitter_thymeleaf_external_scanner_destroy(void *);
bool tree_sitter_thymeleaf_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_thymeleaf_external_scanner_serialize(void *, char *);
void tree_sitter_thymeleaf_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_thymeleaf(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_thymeleaf_external_scanner_create,
      tree_sitter_thymeleaf_external_scanner_destroy,
      tree_sitter_thymeleaf_external_scanner_scan,
      tree_sitter_thymeleaf_external_scanner_serialize,
      tree_sitter_thymeleaf_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
