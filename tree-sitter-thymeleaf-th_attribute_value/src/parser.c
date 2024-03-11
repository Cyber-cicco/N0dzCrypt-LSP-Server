#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_th_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_SLASH_GT = 9,
  anon_sym_LT_SLASH = 10,
  sym_attribute_name = 11,
  sym_th_insert = 12,
  sym_th_replace = 13,
  sym_th_if = 14,
  sym_th_unless = 15,
  sym_th_switch = 16,
  sym_th_case = 17,
  sym_th_object = 18,
  sym_th_with = 19,
  sym_th_fragment = 20,
  sym_th_remove = 21,
  sym_th_generic = 22,
  sym_attribute_value = 23,
  sym_entity = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_quoted_attribute_value_token1 = 26,
  aux_sym_quoted_attribute_value_token2 = 27,
  sym_text = 28,
  sym_true_literal = 29,
  sym_false_literal = 30,
  sym_null_literal = 31,
  aux_sym_number_literal_token1 = 32,
  anon_sym_DOT = 33,
  aux_sym_token_literal_token1 = 34,
  aux_sym_token_literal_token2 = 35,
  anon_sym_PIPE = 36,
  anon_sym_POUND = 37,
  anon_sym_TILDE = 38,
  anon_sym_DOLLAR = 39,
  anon_sym_STAR = 40,
  sym__interpreted_string_literal_basic_content = 41,
  sym_interpolated_string_literal_basic_content = 42,
  sym__escape_sequence = 43,
  sym_greater_than_2 = 44,
  sym_lesser_than_2 = 45,
  sym_greater_or_equal = 46,
  sym_greater_or_equal_2 = 47,
  sym_lesser_or_equal = 48,
  sym_lesser_or_equal_2 = 49,
  sym_equal = 50,
  sym_not_equal = 51,
  sym_equal_2 = 52,
  sym_not_equal_2 = 53,
  sym_and = 54,
  sym_or = 55,
  anon_sym_PLUS = 56,
  anon_sym_DASH = 57,
  sym_divide = 58,
  sym_modulo = 59,
  anon_sym_TILDE_LBRACE = 60,
  anon_sym_RBRACE = 61,
  anon_sym_AT_LBRACE = 62,
  anon_sym_POUND_LBRACE = 63,
  anon_sym_STAR_LBRACE = 64,
  anon_sym_DOLLAR_LBRACE = 65,
  aux_sym_url_std_expression_token1 = 66,
  anon_sym_QMARK = 67,
  anon_sym_COLON = 68,
  anon_sym_BANG = 69,
  anon_sym_LPAREN = 70,
  anon_sym_RPAREN = 71,
  sym_ognl_greater_or_equal = 72,
  sym_ognl_lower_or_equal = 73,
  sym_ognl_new = 74,
  sym_ognl_instanceof = 75,
  sym_bit_shift_left = 76,
  sym_ognl_bit_shift_left = 77,
  sym_bit_shift_right = 78,
  sym_ognl_bit_shift_right = 79,
  sym_logical_shift_right = 80,
  anon_sym_AT = 81,
  aux_sym_ognl_java_class_token1 = 82,
  aux_sym_ognl_object_literal_token1 = 83,
  aux_sym_ognl_object_literal_token2 = 84,
  anon_sym_LBRACK = 85,
  anon_sym_RBRACK = 86,
  anon_sym_COMMA = 87,
  sym__start_tag_name = 88,
  sym__script_start_tag_name = 89,
  sym__style_start_tag_name = 90,
  sym__end_tag_name = 91,
  sym_erroneous_end_tag_name = 92,
  sym__implicit_end_tag = 93,
  sym_raw_text = 94,
  sym_comment = 95,
  sym_document = 96,
  sym_doctype = 97,
  sym__node = 98,
  sym_element = 99,
  sym_script_element = 100,
  sym_style_element = 101,
  sym_start_tag = 102,
  sym__attributes = 103,
  sym_th_attribute = 104,
  sym_th_attribute_value = 105,
  sym_script_start_tag = 106,
  sym_style_start_tag = 107,
  sym_self_closing_tag = 108,
  sym_end_tag = 109,
  sym_erroneous_end_tag = 110,
  sym_attribute = 111,
  sym__th_generic = 112,
  sym__th_ognl_only = 113,
  sym_quoted_attribute_value = 114,
  sym__literal = 115,
  sym_number_literal = 116,
  sym_token_literal = 117,
  sym_string_literal = 118,
  sym_interpolated_string_literal = 119,
  sym__interpreted_string_literal = 120,
  sym_greater_than = 121,
  sym_lesser_than = 122,
  sym_add = 123,
  sym_substract = 124,
  sym_multiply = 125,
  sym__th_std_expression = 126,
  sym_fragment_th_std_expression = 127,
  sym_url_th_std_expression = 128,
  sym_message_th_std_expression = 129,
  sym_varselect_th_std_expression = 130,
  sym_ognl_th_std_expression = 131,
  sym_url_std_expression = 132,
  sym_message_std_expression = 133,
  sym_ternary_th_std_expression = 134,
  sym_unary_th_std_expression = 135,
  sym_parenthesized_th_std_expression = 136,
  sym_binary_th_std_expression = 137,
  sym__ognl_std_expression = 138,
  sym_bitwise_not = 139,
  sym_binary_ognl_expression = 140,
  sym__ognl_literal = 141,
  sym__ognl_post_accessor = 142,
  sym_ognl_java_class = 143,
  sym__ognl_post_java_class = 144,
  sym_ognl_java_method = 145,
  sym_ognl_java_field = 146,
  sym_ognl_object_literal = 147,
  sym_ognl_property_access = 148,
  sym_ognl_method_access = 149,
  sym_ognl_method_literal = 150,
  sym_ognl_method_name = 151,
  sym_ognl_method_args = 152,
  aux_sym_document_repeat1 = 153,
  aux_sym_start_tag_repeat1 = 154,
  aux_sym_token_literal_repeat1 = 155,
  aux_sym_interpolated_string_literal_repeat1 = 156,
  aux_sym__interpreted_string_literal_repeat1 = 157,
  aux_sym_ognl_java_class_repeat1 = 158,
  aux_sym_ognl_object_literal_repeat1 = 159,
  aux_sym_ognl_method_args_repeat1 = 160,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_th_COLON] = "th:",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_attribute_name] = "attribute_name",
  [sym_th_insert] = "th_insert",
  [sym_th_replace] = "th_replace",
  [sym_th_if] = "th_if",
  [sym_th_unless] = "th_unless",
  [sym_th_switch] = "th_switch",
  [sym_th_case] = "th_case",
  [sym_th_object] = "th_object",
  [sym_th_with] = "th_with",
  [sym_th_fragment] = "th_fragment",
  [sym_th_remove] = "th_remove",
  [sym_th_generic] = "th_generic",
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
  [sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [anon_sym_TILDE_LBRACE] = "~{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_STAR_LBRACE] = "*{",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_url_std_expression_token1] = "url_std_expression_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_ognl_greater_or_equal] = "ognl_greater_or_equal",
  [sym_ognl_lower_or_equal] = "ognl_lower_or_equal",
  [sym_ognl_new] = "ognl_new",
  [sym_ognl_instanceof] = "ognl_instanceof",
  [sym_bit_shift_left] = "bit_shift_left",
  [sym_ognl_bit_shift_left] = "ognl_bit_shift_left",
  [sym_bit_shift_right] = "bit_shift_right",
  [sym_ognl_bit_shift_right] = "ognl_bit_shift_right",
  [sym_logical_shift_right] = "logical_shift_right",
  [anon_sym_AT] = "@",
  [aux_sym_ognl_java_class_token1] = "ognl_java_class_token1",
  [aux_sym_ognl_object_literal_token1] = "ognl_object_literal_token1",
  [aux_sym_ognl_object_literal_token2] = "ognl_object_literal_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
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
  [sym_th_attribute] = "th_attribute",
  [sym_th_attribute_value] = "th_attribute_value",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym__th_generic] = "_th_generic",
  [sym__th_ognl_only] = "_th_ognl_only",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_number_literal] = "number_literal",
  [sym_token_literal] = "token_literal",
  [sym_string_literal] = "string_literal",
  [sym_interpolated_string_literal] = "interpolated_string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym_multiply] = "multiply",
  [sym__th_std_expression] = "_th_std_expression",
  [sym_fragment_th_std_expression] = "fragment_th_std_expression",
  [sym_url_th_std_expression] = "url_th_std_expression",
  [sym_message_th_std_expression] = "message_th_std_expression",
  [sym_varselect_th_std_expression] = "varselect_th_std_expression",
  [sym_ognl_th_std_expression] = "ognl_th_std_expression",
  [sym_url_std_expression] = "url_std_expression",
  [sym_message_std_expression] = "message_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_unary_th_std_expression] = "unary_th_std_expression",
  [sym_parenthesized_th_std_expression] = "parenthesized_th_std_expression",
  [sym_binary_th_std_expression] = "binary_th_std_expression",
  [sym__ognl_std_expression] = "_ognl_std_expression",
  [sym_bitwise_not] = "bitwise_not",
  [sym_binary_ognl_expression] = "binary_ognl_expression",
  [sym__ognl_literal] = "_ognl_literal",
  [sym__ognl_post_accessor] = "_ognl_post_accessor",
  [sym_ognl_java_class] = "ognl_java_class",
  [sym__ognl_post_java_class] = "_ognl_post_java_class",
  [sym_ognl_java_method] = "ognl_java_method",
  [sym_ognl_java_field] = "ognl_java_field",
  [sym_ognl_object_literal] = "ognl_object_literal",
  [sym_ognl_property_access] = "ognl_property_access",
  [sym_ognl_method_access] = "ognl_method_access",
  [sym_ognl_method_literal] = "ognl_method_literal",
  [sym_ognl_method_name] = "ognl_method_name",
  [sym_ognl_method_args] = "ognl_method_args",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_token_literal_repeat1] = "token_literal_repeat1",
  [aux_sym_interpolated_string_literal_repeat1] = "interpolated_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [aux_sym_ognl_java_class_repeat1] = "ognl_java_class_repeat1",
  [aux_sym_ognl_object_literal_repeat1] = "ognl_object_literal_repeat1",
  [aux_sym_ognl_method_args_repeat1] = "ognl_method_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_th_COLON] = anon_sym_th_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_attribute_name] = sym_attribute_name,
  [sym_th_insert] = sym_th_insert,
  [sym_th_replace] = sym_th_replace,
  [sym_th_if] = sym_th_if,
  [sym_th_unless] = sym_th_unless,
  [sym_th_switch] = sym_th_switch,
  [sym_th_case] = sym_th_case,
  [sym_th_object] = sym_th_object,
  [sym_th_with] = sym_th_with,
  [sym_th_fragment] = sym_th_fragment,
  [sym_th_remove] = sym_th_remove,
  [sym_th_generic] = sym_th_generic,
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
  [sym_or] = sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_divide] = sym_divide,
  [sym_modulo] = sym_modulo,
  [anon_sym_TILDE_LBRACE] = anon_sym_TILDE_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_STAR_LBRACE] = anon_sym_STAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_url_std_expression_token1] = aux_sym_url_std_expression_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_ognl_greater_or_equal] = sym_ognl_greater_or_equal,
  [sym_ognl_lower_or_equal] = sym_ognl_lower_or_equal,
  [sym_ognl_new] = sym_ognl_new,
  [sym_ognl_instanceof] = sym_ognl_instanceof,
  [sym_bit_shift_left] = sym_bit_shift_left,
  [sym_ognl_bit_shift_left] = sym_ognl_bit_shift_left,
  [sym_bit_shift_right] = sym_bit_shift_right,
  [sym_ognl_bit_shift_right] = sym_ognl_bit_shift_right,
  [sym_logical_shift_right] = sym_logical_shift_right,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_ognl_java_class_token1] = aux_sym_ognl_java_class_token1,
  [aux_sym_ognl_object_literal_token1] = aux_sym_ognl_object_literal_token1,
  [aux_sym_ognl_object_literal_token2] = aux_sym_ognl_object_literal_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_th_attribute] = sym_th_attribute,
  [sym_th_attribute_value] = sym_th_attribute_value,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym__th_generic] = sym__th_generic,
  [sym__th_ognl_only] = sym__th_ognl_only,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_number_literal] = sym_number_literal,
  [sym_token_literal] = sym_token_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_interpolated_string_literal] = sym_interpolated_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym_multiply] = sym_multiply,
  [sym__th_std_expression] = sym__th_std_expression,
  [sym_fragment_th_std_expression] = sym_fragment_th_std_expression,
  [sym_url_th_std_expression] = sym_url_th_std_expression,
  [sym_message_th_std_expression] = sym_message_th_std_expression,
  [sym_varselect_th_std_expression] = sym_varselect_th_std_expression,
  [sym_ognl_th_std_expression] = sym_ognl_th_std_expression,
  [sym_url_std_expression] = sym_url_std_expression,
  [sym_message_std_expression] = sym_message_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_unary_th_std_expression] = sym_unary_th_std_expression,
  [sym_parenthesized_th_std_expression] = sym_parenthesized_th_std_expression,
  [sym_binary_th_std_expression] = sym_binary_th_std_expression,
  [sym__ognl_std_expression] = sym__ognl_std_expression,
  [sym_bitwise_not] = sym_bitwise_not,
  [sym_binary_ognl_expression] = sym_binary_ognl_expression,
  [sym__ognl_literal] = sym__ognl_literal,
  [sym__ognl_post_accessor] = sym__ognl_post_accessor,
  [sym_ognl_java_class] = sym_ognl_java_class,
  [sym__ognl_post_java_class] = sym__ognl_post_java_class,
  [sym_ognl_java_method] = sym_ognl_java_method,
  [sym_ognl_java_field] = sym_ognl_java_field,
  [sym_ognl_object_literal] = sym_ognl_object_literal,
  [sym_ognl_property_access] = sym_ognl_property_access,
  [sym_ognl_method_access] = sym_ognl_method_access,
  [sym_ognl_method_literal] = sym_ognl_method_literal,
  [sym_ognl_method_name] = sym_ognl_method_name,
  [sym_ognl_method_args] = sym_ognl_method_args,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_token_literal_repeat1] = aux_sym_token_literal_repeat1,
  [aux_sym_interpolated_string_literal_repeat1] = aux_sym_interpolated_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [aux_sym_ognl_java_class_repeat1] = aux_sym_ognl_java_class_repeat1,
  [aux_sym_ognl_object_literal_repeat1] = aux_sym_ognl_object_literal_repeat1,
  [aux_sym_ognl_method_args_repeat1] = aux_sym_ognl_method_args_repeat1,
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
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
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
  [sym_th_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_th_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_th_generic] = {
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
  [sym_or] = {
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
  [sym_divide] = {
    .visible = true,
    .named = true,
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
  [aux_sym_url_std_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_ognl_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_lower_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_new] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_instanceof] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_shift_left] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_bit_shift_left] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_shift_right] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_bit_shift_right] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_shift_right] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ognl_java_class_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ognl_object_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ognl_object_literal_token2] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
  [sym_th_attribute] = {
    .visible = true,
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__th_generic] = {
    .visible = false,
    .named = true,
  },
  [sym__th_ognl_only] = {
    .visible = false,
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
  [sym_ognl_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_url_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_message_std_expression] = {
    .visible = true,
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
  [sym__ognl_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_bitwise_not] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_ognl_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__ognl_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__ognl_post_accessor] = {
    .visible = false,
    .named = true,
  },
  [sym_ognl_java_class] = {
    .visible = true,
    .named = true,
  },
  [sym__ognl_post_java_class] = {
    .visible = false,
    .named = true,
  },
  [sym_ognl_java_method] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_java_field] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_property_access] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_method_access] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_method_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_method_name] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_method_args] = {
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
  [aux_sym_ognl_java_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ognl_object_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ognl_method_args_repeat1] = {
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
  field_left = 7,
  field_name = 8,
  field_operand = 9,
  field_operator = 10,
  field_right = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_args] = "args",
  [field_attribute_name] = "attribute_name",
  [field_attribute_value] = "attribute_value",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_attribute_name, 1},
    {field_attribute_value, 4},
  [4] =
    {field_args, 1},
    {field_name, 0},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_name, 1},
  [10] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
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
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 20,
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
  [41] = 41,
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
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 56,
  [68] = 57,
  [69] = 64,
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
  [81] = 79,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 80,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 109,
  [111] = 4,
  [112] = 14,
  [113] = 72,
  [114] = 74,
  [115] = 76,
  [116] = 77,
  [117] = 99,
  [118] = 100,
  [119] = 95,
  [120] = 103,
  [121] = 96,
  [122] = 122,
  [123] = 36,
  [124] = 124,
  [125] = 125,
  [126] = 34,
  [127] = 31,
  [128] = 124,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 130,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 138,
  [148] = 140,
  [149] = 149,
  [150] = 144,
  [151] = 149,
  [152] = 152,
  [153] = 153,
  [154] = 145,
  [155] = 155,
  [156] = 155,
  [157] = 153,
  [158] = 152,
  [159] = 142,
  [160] = 146,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 165,
  [172] = 172,
  [173] = 162,
  [174] = 163,
  [175] = 166,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 172,
  [181] = 176,
  [182] = 178,
  [183] = 183,
  [184] = 168,
  [185] = 179,
  [186] = 186,
  [187] = 187,
  [188] = 186,
  [189] = 164,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 190,
  [199] = 195,
  [200] = 200,
  [201] = 201,
  [202] = 191,
  [203] = 203,
  [204] = 196,
  [205] = 205,
  [206] = 194,
  [207] = 207,
  [208] = 207,
  [209] = 203,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 197,
  [215] = 201,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 218,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 222,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 219,
  [232] = 224,
  [233] = 233,
  [234] = 234,
  [235] = 227,
  [236] = 236,
  [237] = 237,
  [238] = 217,
  [239] = 239,
  [240] = 234,
  [241] = 241,
  [242] = 220,
  [243] = 243,
  [244] = 241,
  [245] = 223,
  [246] = 246,
  [247] = 230,
  [248] = 248,
  [249] = 236,
  [250] = 250,
  [251] = 237,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 254,
  [257] = 253,
  [258] = 243,
  [259] = 248,
  [260] = 255,
};

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '/' || (c < 'h'
      ? (c < '<'
        ? c == ':'
        : c <= '>')
      : (c <= 'h' || c == 't'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead == '!') ADVANCE(245);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '~') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'q') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(237);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(238);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(236);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(234);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(244);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '~') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(189);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 't') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == ']') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(122);
      END_STATE();
    case 32:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      if (lookahead == '"') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 37:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead == '!') ADVANCE(245);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(233);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '~') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(252);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(252);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(239);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(238);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ognl_greater_or_equal);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ognl_lower_or_equal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ognl_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ognl_instanceof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_bit_shift_left);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ognl_bit_shift_left);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_bit_shift_right);
      if (lookahead == '>') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ognl_bit_shift_right);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_logical_shift_right);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '{') ADVANCE(236);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_ognl_java_class_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'c') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'f') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'o') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 't') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'w') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'q') ADVANCE(220);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49, .external_lex_state = 2},
  [2] = {.lex_state = 20, .external_lex_state = 2},
  [3] = {.lex_state = 20, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 20, .external_lex_state = 2},
  [6] = {.lex_state = 20, .external_lex_state = 2},
  [7] = {.lex_state = 20, .external_lex_state = 2},
  [8] = {.lex_state = 20, .external_lex_state = 2},
  [9] = {.lex_state = 20, .external_lex_state = 2},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 20, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 2},
  [13] = {.lex_state = 20, .external_lex_state = 2},
  [14] = {.lex_state = 21, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 20, .external_lex_state = 2},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 21, .external_lex_state = 2},
  [20] = {.lex_state = 21, .external_lex_state = 2},
  [21] = {.lex_state = 21, .external_lex_state = 2},
  [22] = {.lex_state = 21, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 2},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 21, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 2},
  [30] = {.lex_state = 21, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 2},
  [32] = {.lex_state = 21, .external_lex_state = 2},
  [33] = {.lex_state = 21, .external_lex_state = 2},
  [34] = {.lex_state = 21, .external_lex_state = 2},
  [35] = {.lex_state = 21, .external_lex_state = 2},
  [36] = {.lex_state = 21, .external_lex_state = 2},
  [37] = {.lex_state = 21, .external_lex_state = 2},
  [38] = {.lex_state = 21, .external_lex_state = 2},
  [39] = {.lex_state = 21, .external_lex_state = 2},
  [40] = {.lex_state = 21, .external_lex_state = 2},
  [41] = {.lex_state = 21, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 2},
  [43] = {.lex_state = 21, .external_lex_state = 2},
  [44] = {.lex_state = 21, .external_lex_state = 2},
  [45] = {.lex_state = 21, .external_lex_state = 2},
  [46] = {.lex_state = 22, .external_lex_state = 2},
  [47] = {.lex_state = 22, .external_lex_state = 2},
  [48] = {.lex_state = 22, .external_lex_state = 2},
  [49] = {.lex_state = 22, .external_lex_state = 2},
  [50] = {.lex_state = 22, .external_lex_state = 2},
  [51] = {.lex_state = 22, .external_lex_state = 2},
  [52] = {.lex_state = 22, .external_lex_state = 2},
  [53] = {.lex_state = 22, .external_lex_state = 2},
  [54] = {.lex_state = 21, .external_lex_state = 2},
  [55] = {.lex_state = 23, .external_lex_state = 2},
  [56] = {.lex_state = 21, .external_lex_state = 2},
  [57] = {.lex_state = 21, .external_lex_state = 2},
  [58] = {.lex_state = 22, .external_lex_state = 2},
  [59] = {.lex_state = 22, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 22, .external_lex_state = 2},
  [62] = {.lex_state = 21, .external_lex_state = 2},
  [63] = {.lex_state = 22, .external_lex_state = 2},
  [64] = {.lex_state = 21, .external_lex_state = 2},
  [65] = {.lex_state = 23, .external_lex_state = 2},
  [66] = {.lex_state = 22, .external_lex_state = 2},
  [67] = {.lex_state = 22, .external_lex_state = 2},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22, .external_lex_state = 2},
  [70] = {.lex_state = 22, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 2},
  [72] = {.lex_state = 22, .external_lex_state = 2},
  [73] = {.lex_state = 22, .external_lex_state = 2},
  [74] = {.lex_state = 22, .external_lex_state = 2},
  [75] = {.lex_state = 22, .external_lex_state = 2},
  [76] = {.lex_state = 22, .external_lex_state = 2},
  [77] = {.lex_state = 22, .external_lex_state = 2},
  [78] = {.lex_state = 24, .external_lex_state = 2},
  [79] = {.lex_state = 24, .external_lex_state = 2},
  [80] = {.lex_state = 24, .external_lex_state = 2},
  [81] = {.lex_state = 24, .external_lex_state = 2},
  [82] = {.lex_state = 24, .external_lex_state = 2},
  [83] = {.lex_state = 24, .external_lex_state = 2},
  [84] = {.lex_state = 24, .external_lex_state = 2},
  [85] = {.lex_state = 24, .external_lex_state = 2},
  [86] = {.lex_state = 24, .external_lex_state = 2},
  [87] = {.lex_state = 24, .external_lex_state = 2},
  [88] = {.lex_state = 24, .external_lex_state = 2},
  [89] = {.lex_state = 24, .external_lex_state = 2},
  [90] = {.lex_state = 49, .external_lex_state = 3},
  [91] = {.lex_state = 24, .external_lex_state = 2},
  [92] = {.lex_state = 49, .external_lex_state = 3},
  [93] = {.lex_state = 49, .external_lex_state = 3},
  [94] = {.lex_state = 49, .external_lex_state = 3},
  [95] = {.lex_state = 20, .external_lex_state = 2},
  [96] = {.lex_state = 20, .external_lex_state = 2},
  [97] = {.lex_state = 24, .external_lex_state = 2},
  [98] = {.lex_state = 24, .external_lex_state = 2},
  [99] = {.lex_state = 20, .external_lex_state = 2},
  [100] = {.lex_state = 20, .external_lex_state = 2},
  [101] = {.lex_state = 49, .external_lex_state = 2},
  [102] = {.lex_state = 49, .external_lex_state = 3},
  [103] = {.lex_state = 20, .external_lex_state = 2},
  [104] = {.lex_state = 24, .external_lex_state = 2},
  [105] = {.lex_state = 49, .external_lex_state = 2},
  [106] = {.lex_state = 25, .external_lex_state = 2},
  [107] = {.lex_state = 25, .external_lex_state = 2},
  [108] = {.lex_state = 25, .external_lex_state = 2},
  [109] = {.lex_state = 26, .external_lex_state = 2},
  [110] = {.lex_state = 26, .external_lex_state = 2},
  [111] = {.lex_state = 27, .external_lex_state = 2},
  [112] = {.lex_state = 27, .external_lex_state = 2},
  [113] = {.lex_state = 25, .external_lex_state = 2},
  [114] = {.lex_state = 25, .external_lex_state = 2},
  [115] = {.lex_state = 25, .external_lex_state = 2},
  [116] = {.lex_state = 25, .external_lex_state = 2},
  [117] = {.lex_state = 24, .external_lex_state = 2},
  [118] = {.lex_state = 24, .external_lex_state = 2},
  [119] = {.lex_state = 24, .external_lex_state = 2},
  [120] = {.lex_state = 24, .external_lex_state = 2},
  [121] = {.lex_state = 24, .external_lex_state = 2},
  [122] = {.lex_state = 24, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 28, .external_lex_state = 4},
  [125] = {.lex_state = 28, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 27, .external_lex_state = 2},
  [128] = {.lex_state = 28, .external_lex_state = 4},
  [129] = {.lex_state = 28, .external_lex_state = 4},
  [130] = {.lex_state = 28, .external_lex_state = 4},
  [131] = {.lex_state = 28, .external_lex_state = 2},
  [132] = {.lex_state = 28, .external_lex_state = 2},
  [133] = {.lex_state = 28, .external_lex_state = 2},
  [134] = {.lex_state = 28, .external_lex_state = 2},
  [135] = {.lex_state = 28, .external_lex_state = 2},
  [136] = {.lex_state = 49, .external_lex_state = 3},
  [137] = {.lex_state = 49, .external_lex_state = 2},
  [138] = {.lex_state = 49, .external_lex_state = 3},
  [139] = {.lex_state = 49, .external_lex_state = 2},
  [140] = {.lex_state = 49, .external_lex_state = 3},
  [141] = {.lex_state = 49, .external_lex_state = 3},
  [142] = {.lex_state = 49, .external_lex_state = 2},
  [143] = {.lex_state = 49, .external_lex_state = 3},
  [144] = {.lex_state = 49, .external_lex_state = 3},
  [145] = {.lex_state = 49, .external_lex_state = 3},
  [146] = {.lex_state = 49, .external_lex_state = 3},
  [147] = {.lex_state = 49, .external_lex_state = 2},
  [148] = {.lex_state = 49, .external_lex_state = 2},
  [149] = {.lex_state = 49, .external_lex_state = 2},
  [150] = {.lex_state = 49, .external_lex_state = 2},
  [151] = {.lex_state = 49, .external_lex_state = 3},
  [152] = {.lex_state = 49, .external_lex_state = 3},
  [153] = {.lex_state = 49, .external_lex_state = 3},
  [154] = {.lex_state = 49, .external_lex_state = 2},
  [155] = {.lex_state = 49, .external_lex_state = 3},
  [156] = {.lex_state = 49, .external_lex_state = 2},
  [157] = {.lex_state = 49, .external_lex_state = 2},
  [158] = {.lex_state = 49, .external_lex_state = 2},
  [159] = {.lex_state = 49, .external_lex_state = 3},
  [160] = {.lex_state = 49, .external_lex_state = 2},
  [161] = {.lex_state = 49, .external_lex_state = 3},
  [162] = {.lex_state = 28, .external_lex_state = 4},
  [163] = {.lex_state = 29, .external_lex_state = 2},
  [164] = {.lex_state = 28, .external_lex_state = 4},
  [165] = {.lex_state = 30, .external_lex_state = 2},
  [166] = {.lex_state = 31, .external_lex_state = 2},
  [167] = {.lex_state = 29, .external_lex_state = 2},
  [168] = {.lex_state = 28, .external_lex_state = 4},
  [169] = {.lex_state = 29, .external_lex_state = 2},
  [170] = {.lex_state = 29, .external_lex_state = 2},
  [171] = {.lex_state = 30, .external_lex_state = 2},
  [172] = {.lex_state = 28, .external_lex_state = 4},
  [173] = {.lex_state = 28, .external_lex_state = 2},
  [174] = {.lex_state = 29, .external_lex_state = 2},
  [175] = {.lex_state = 31, .external_lex_state = 2},
  [176] = {.lex_state = 28, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 0, .external_lex_state = 5},
  [180] = {.lex_state = 28, .external_lex_state = 2},
  [181] = {.lex_state = 28, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 28, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 6},
  [189] = {.lex_state = 28, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 7},
  [191] = {.lex_state = 32, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 33, .external_lex_state = 2},
  [195] = {.lex_state = 34, .external_lex_state = 2},
  [196] = {.lex_state = 34, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 7},
  [199] = {.lex_state = 34, .external_lex_state = 2},
  [200] = {.lex_state = 37, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 32, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 34, .external_lex_state = 2},
  [205] = {.lex_state = 34, .external_lex_state = 2},
  [206] = {.lex_state = 33, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 37, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 37, .external_lex_state = 2},
  [217] = {.lex_state = 49, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 49, .external_lex_state = 2},
  [223] = {.lex_state = 35, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 49, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 49, .external_lex_state = 2},
  [228] = {.lex_state = 37, .external_lex_state = 2},
  [229] = {.lex_state = 36, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 8},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 37, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 49, .external_lex_state = 2},
  [236] = {.lex_state = 20, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 49, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 9},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 20, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 9},
  [245] = {.lex_state = 35, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 8},
  [248] = {.lex_state = 20, .external_lex_state = 2},
  [249] = {.lex_state = 20, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 22, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 20, .external_lex_state = 2},
  [259] = {.lex_state = 20, .external_lex_state = 2},
  [260] = {.lex_state = 22, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_token_literal_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_greater_than_2] = ACTIONS(1),
    [sym_lesser_than_2] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_equal_2] = ACTIONS(1),
    [sym_not_equal_2] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_STAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_ognl_greater_or_equal] = ACTIONS(1),
    [sym_ognl_lower_or_equal] = ACTIONS(1),
    [sym_bit_shift_left] = ACTIONS(1),
    [sym_ognl_bit_shift_left] = ACTIONS(1),
    [sym_bit_shift_right] = ACTIONS(1),
    [sym_ognl_bit_shift_right] = ACTIONS(1),
    [sym_logical_shift_right] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_ognl_object_literal_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(239),
    [sym_doctype] = STATE(101),
    [sym__node] = STATE(101),
    [sym_element] = STATE(101),
    [sym_script_element] = STATE(101),
    [sym_style_element] = STATE(101),
    [sym_start_tag] = STATE(94),
    [sym_script_start_tag] = STATE(182),
    [sym_style_start_tag] = STATE(185),
    [sym_self_closing_tag] = STATE(156),
    [sym_erroneous_end_tag] = STATE(101),
    [aux_sym_document_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(240), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(58), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [75] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(234), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(58), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [150] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_ognl_object_literal_token2,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(39), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(43), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(47), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [204] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(55), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(59), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [276] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(57), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(47), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [348] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(59), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(48), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [420] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(61), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(49), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [492] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(63), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(63), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [564] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(65), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(50), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [636] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(67), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(53), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      anon_sym_AT,
    STATE(42), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(69), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(73), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [756] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(77), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(46), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [828] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(4), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(43), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(79), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(81), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      anon_sym_AT,
    STATE(38), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(87), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(89), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [930] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(91), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(52), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1002] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(23), 1,
      aux_sym_token_literal_token2,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_TILDE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(37), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_token_literal_repeat1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(93), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(51), 15,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1074] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      sym_and,
    ACTIONS(111), 1,
      sym_or,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1148] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      sym_and,
    ACTIONS(111), 1,
      sym_or,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1222] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      sym_and,
    ACTIONS(111), 1,
      sym_or,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(129), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(131), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1344] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(129), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(131), 17,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1398] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(129), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(131), 15,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(129), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(131), 20,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1506] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      sym_and,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    ACTIONS(131), 2,
      sym_or,
      anon_sym_RBRACE,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1578] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(131), 3,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1648] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
    ACTIONS(131), 7,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
  [1716] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
    ACTIONS(129), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(131), 11,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
  [1778] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_GT,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      sym_and,
    ACTIONS(111), 1,
      sym_or,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      sym_bit_shift_right,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_bitwise_not,
    STATE(85), 1,
      sym_multiply,
    ACTIONS(103), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(117), 2,
      sym_divide,
      sym_modulo,
    STATE(78), 2,
      sym_add,
      sym_substract,
    STATE(83), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(105), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(107), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(121), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(137), 26,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(31), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(139), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(141), 24,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(148), 26,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(152), 26,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(37), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(154), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(156), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_ognl_method_args,
    ACTIONS(158), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(160), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(44), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(164), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(166), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(170), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(174), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(178), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(182), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(186), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(89), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(47), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(190), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(194), 24,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(198), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2520] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_and,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(198), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [2578] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(198), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [2634] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(198), 10,
      anon_sym_DQUOTE,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(198), 16,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2738] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_and,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    ACTIONS(220), 1,
      sym_or,
    ACTIONS(222), 1,
      anon_sym_QMARK,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(218), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [2800] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_STAR,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(198), 18,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(226), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(228), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(232), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_token_literal_token1,
    ACTIONS(241), 1,
      aux_sym_token_literal_token2,
    STATE(55), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(234), 11,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(236), 12,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(246), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(250), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [3033] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_and,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    ACTIONS(220), 1,
      sym_or,
    ACTIONS(222), 1,
      anon_sym_QMARK,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3093] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_and,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    ACTIONS(220), 1,
      sym_or,
    ACTIONS(222), 1,
      anon_sym_QMARK,
    ACTIONS(254), 1,
      anon_sym_COLON,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(260), 1,
      aux_sym_token_literal_token2,
    STATE(55), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(256), 11,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal_2,
      sym_lesser_or_equal_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_DASH,
    ACTIONS(258), 12,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(228), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 23,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(266), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [3263] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_and,
    ACTIONS(212), 1,
      anon_sym_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH,
    ACTIONS(220), 1,
      sym_or,
    ACTIONS(222), 1,
      anon_sym_QMARK,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_multiply,
    ACTIONS(216), 2,
      sym_divide,
      sym_modulo,
    STATE(10), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(16), 2,
      sym_add,
      sym_substract,
    ACTIONS(208), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(206), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(272), 21,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 12,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(234), 13,
      anon_sym_GT,
      anon_sym_LT,
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
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 23,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 23,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 23,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 23,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 21,
      anon_sym_DQUOTE,
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
      sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [3770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(308), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(22), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [3809] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(316), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(19), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [3848] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(318), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(29), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [3887] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(320), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(18), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [3926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(322), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(21), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [3965] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(324), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(28), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4004] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(326), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(23), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4043] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(328), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(24), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4082] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(330), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(25), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(332), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(26), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4160] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(334), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(27), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(57), 1,
      sym__interpreted_string_literal,
    STATE(215), 1,
      sym_ognl_method_name,
    ACTIONS(336), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(20), 8,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym_binary_ognl_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4238] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LT_BANG,
    ACTIONS(340), 1,
      anon_sym_LT,
    ACTIONS(342), 1,
      anon_sym_LT_SLASH,
    ACTIONS(346), 1,
      sym__implicit_end_tag,
    STATE(93), 1,
      sym_start_tag,
    STATE(150), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_self_closing_tag,
    STATE(178), 1,
      sym_script_start_tag,
    STATE(179), 1,
      sym_style_start_tag,
    ACTIONS(344), 2,
      sym_entity,
      sym_text,
    STATE(102), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4282] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(201), 1,
      sym_ognl_method_name,
    ACTIONS(348), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(187), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4322] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LT_BANG,
    ACTIONS(340), 1,
      anon_sym_LT,
    ACTIONS(354), 1,
      anon_sym_LT_SLASH,
    ACTIONS(356), 1,
      sym__implicit_end_tag,
    STATE(93), 1,
      sym_start_tag,
    STATE(144), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_self_closing_tag,
    STATE(178), 1,
      sym_script_start_tag,
    STATE(179), 1,
      sym_style_start_tag,
    ACTIONS(344), 2,
      sym_entity,
      sym_text,
    STATE(102), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4366] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LT_BANG,
    ACTIONS(340), 1,
      anon_sym_LT,
    ACTIONS(354), 1,
      anon_sym_LT_SLASH,
    ACTIONS(360), 1,
      sym__implicit_end_tag,
    STATE(93), 1,
      sym_start_tag,
    STATE(153), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_self_closing_tag,
    STATE(178), 1,
      sym_script_start_tag,
    STATE(179), 1,
      sym_style_start_tag,
    ACTIONS(358), 2,
      sym_entity,
      sym_text,
    STATE(92), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4410] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LT_BANG,
    ACTIONS(340), 1,
      anon_sym_LT,
    ACTIONS(342), 1,
      anon_sym_LT_SLASH,
    ACTIONS(364), 1,
      sym__implicit_end_tag,
    STATE(93), 1,
      sym_start_tag,
    STATE(155), 1,
      sym_self_closing_tag,
    STATE(157), 1,
      sym_end_tag,
    STATE(178), 1,
      sym_script_start_tag,
    STATE(179), 1,
      sym_style_start_tag,
    ACTIONS(362), 2,
      sym_entity,
      sym_text,
    STATE(90), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(366), 11,
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
      anon_sym_LPAREN,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(370), 11,
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
      anon_sym_LPAREN,
  [4504] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(201), 1,
      sym_ognl_method_name,
    ACTIONS(374), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(220), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4541] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(201), 1,
      sym_ognl_method_name,
    ACTIONS(376), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(242), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(378), 11,
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
      anon_sym_LPAREN,
  [4603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(382), 11,
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
      anon_sym_LPAREN,
  [4628] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_start_tag,
    STATE(156), 1,
      sym_self_closing_tag,
    STATE(182), 1,
      sym_script_start_tag,
    STATE(185), 1,
      sym_style_start_tag,
    ACTIONS(388), 2,
      sym_entity,
      sym_text,
    STATE(105), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4669] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LT_BANG,
    ACTIONS(393), 1,
      anon_sym_LT,
    ACTIONS(396), 1,
      anon_sym_LT_SLASH,
    ACTIONS(402), 1,
      sym__implicit_end_tag,
    STATE(93), 1,
      sym_start_tag,
    STATE(155), 1,
      sym_self_closing_tag,
    STATE(178), 1,
      sym_script_start_tag,
    STATE(179), 1,
      sym_style_start_tag,
    ACTIONS(399), 2,
      sym_entity,
      sym_text,
    STATE(102), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(404), 11,
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
      anon_sym_LPAREN,
  [4735] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(68), 1,
      sym__interpreted_string_literal,
    STATE(201), 1,
      sym_ognl_method_name,
    ACTIONS(408), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(193), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4772] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 1,
      anon_sym_LT_BANG,
    ACTIONS(413), 1,
      anon_sym_LT,
    ACTIONS(416), 1,
      anon_sym_LT_SLASH,
    STATE(94), 1,
      sym_start_tag,
    STATE(156), 1,
      sym_self_closing_tag,
    STATE(182), 1,
      sym_script_start_tag,
    STATE(185), 1,
      sym_style_start_tag,
    ACTIONS(419), 2,
      sym_entity,
      sym_text,
    STATE(105), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [4813] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(426), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(428), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(430), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(432), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(434), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(107), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [4848] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(430), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(432), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(434), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(436), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(438), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(108), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [4883] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_PIPE,
    ACTIONS(447), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(450), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(453), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(456), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(459), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(444), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(108), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [4918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      sym__th_generic,
    STATE(248), 1,
      sym__th_ognl_only,
    ACTIONS(464), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(462), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [4943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(258), 1,
      sym__th_generic,
    STATE(259), 1,
      sym__th_ognl_only,
    ACTIONS(468), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(466), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [4968] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(472), 1,
      aux_sym_ognl_object_literal_token2,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(47), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(39), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [4997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(111), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(81), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(43), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [5026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(282), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(290), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(298), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(302), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(380), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(384), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(368), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(406), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(372), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_AT,
    ACTIONS(480), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(44), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [5220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_GT,
    ACTIONS(484), 1,
      anon_sym_th_COLON,
    ACTIONS(486), 1,
      anon_sym_SLASH_GT,
    ACTIONS(488), 1,
      sym_attribute_name,
    STATE(130), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_th_COLON,
    ACTIONS(488), 1,
      sym_attribute_name,
    ACTIONS(490), 1,
      anon_sym_GT,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
    STATE(124), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(37), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [5284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(127), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(141), 6,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [5302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_GT,
    ACTIONS(484), 1,
      anon_sym_th_COLON,
    ACTIONS(488), 1,
      sym_attribute_name,
    ACTIONS(497), 1,
      anon_sym_SLASH_GT,
    STATE(130), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_th_COLON,
    ACTIONS(488), 1,
      sym_attribute_name,
    ACTIONS(490), 1,
      anon_sym_GT,
    ACTIONS(499), 1,
      anon_sym_SLASH_GT,
    STATE(128), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_th_COLON,
    ACTIONS(506), 1,
      sym_attribute_name,
    ACTIONS(501), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(130), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(511), 1,
      anon_sym_th_COLON,
    ACTIONS(513), 1,
      sym_attribute_name,
    STATE(134), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_GT,
    ACTIONS(515), 1,
      anon_sym_th_COLON,
    ACTIONS(518), 1,
      sym_attribute_name,
    STATE(132), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_th_COLON,
    ACTIONS(513), 1,
      sym_attribute_name,
    ACTIONS(521), 1,
      anon_sym_GT,
    STATE(132), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_th_COLON,
    ACTIONS(513), 1,
      sym_attribute_name,
    ACTIONS(523), 1,
      anon_sym_GT,
    STATE(132), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_th_COLON,
    ACTIONS(513), 1,
      sym_attribute_name,
    ACTIONS(525), 1,
      anon_sym_GT,
    STATE(133), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(527), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LT,
    ACTIONS(531), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(535), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(527), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LT,
    ACTIONS(539), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LT,
    ACTIONS(531), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(543), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(547), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LT,
    ACTIONS(551), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LT,
    ACTIONS(555), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LT,
    ACTIONS(559), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(535), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LT,
    ACTIONS(539), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LT,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LT,
    ACTIONS(551), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LT,
    ACTIONS(563), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(567), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LT,
    ACTIONS(571), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LT,
    ACTIONS(555), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(575), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(575), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LT,
    ACTIONS(571), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(567), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LT,
    ACTIONS(543), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LT,
    ACTIONS(559), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LT,
    ACTIONS(579), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [5825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(583), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [5838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(589), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [5862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(41), 1,
      sym_ognl_object_literal,
    STATE(45), 1,
      sym_ognl_method_literal,
    STATE(215), 1,
      sym_ognl_method_name,
  [5878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    ACTIONS(597), 1,
      sym_attribute_value,
    ACTIONS(599), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_quoted_attribute_value,
  [5894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(603), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [5918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(603), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [5932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(611), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [5946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(41), 1,
      sym_ognl_object_literal,
    STATE(45), 1,
      sym_ognl_method_literal,
    STATE(201), 1,
      sym_ognl_method_name,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [5972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_EQ,
    ACTIONS(583), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [5984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(622), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [5998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym_attribute_value,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym_quoted_attribute_value,
  [6014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_ognl_method_args_repeat1,
  [6037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    ACTIONS(639), 1,
      sym_raw_text,
    STATE(152), 1,
      sym_end_tag,
  [6050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    ACTIONS(641), 1,
      sym_raw_text,
    STATE(151), 1,
      sym_end_tag,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LT_SLASH,
    ACTIONS(645), 1,
      sym_raw_text,
    STATE(158), 1,
      sym_end_tag,
  [6094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_ognl_method_args_repeat1,
  [6107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LT_SLASH,
    ACTIONS(651), 1,
      sym_raw_text,
    STATE(149), 1,
      sym_end_tag,
  [6129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__start_tag_name,
    ACTIONS(655), 1,
      sym__script_start_tag_name,
    ACTIONS(657), 1,
      sym__style_start_tag_name,
  [6142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_ognl_method_args_repeat1,
  [6155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__script_start_tag_name,
    ACTIONS(657), 1,
      sym__style_start_tag_name,
    ACTIONS(661), 1,
      sym__start_tag_name,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__end_tag_name,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
  [6187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SQUOTE,
    ACTIONS(669), 1,
      aux_sym_quoted_attribute_value_token1,
  [6197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [6205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(673), 1,
      aux_sym_quoted_attribute_value_token2,
  [6223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym_url_std_expression_token1,
    STATE(218), 1,
      sym_message_std_expression,
  [6233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_url_std_expression_token1,
    STATE(237), 1,
      sym_url_std_expression,
  [6243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(234), 1,
      sym_ognl_th_std_expression,
  [6253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(679), 1,
      sym__end_tag_name,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym_url_std_expression_token1,
    STATE(221), 1,
      sym_message_std_expression,
  [6273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_ognl_java_class_token1,
    STATE(210), 1,
      aux_sym_ognl_java_class_repeat1,
  [6283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_ognl_method_args,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SQUOTE,
    ACTIONS(685), 1,
      aux_sym_quoted_attribute_value_token1,
  [6303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LT_SLASH,
    STATE(137), 1,
      sym_end_tag,
  [6313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_url_std_expression_token1,
    STATE(251), 1,
      sym_url_std_expression,
  [6323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_url_std_expression_token1,
    STATE(250), 1,
      sym_url_std_expression,
  [6333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      aux_sym_quoted_attribute_value_token2,
  [6343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    STATE(140), 1,
      sym_end_tag,
  [6353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LT_SLASH,
    STATE(148), 1,
      sym_end_tag,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LT_SLASH,
    STATE(141), 1,
      sym_end_tag,
  [6373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      aux_sym_ognl_java_class_token1,
    STATE(210), 1,
      aux_sym_ognl_java_class_repeat1,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [6399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [6407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(240), 1,
      sym_ognl_th_std_expression,
  [6417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_ognl_method_args,
  [6427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_ognl_java_class_token1,
    STATE(200), 1,
      aux_sym_ognl_java_class_repeat1,
  [6437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_GT,
  [6444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
  [6451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
  [6458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [6472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_GT,
  [6479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_doctype_token1,
  [6486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_SQUOTE,
  [6493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_GT,
  [6500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [6507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_GT,
  [6514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      aux_sym_ognl_java_class_token1,
  [6521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_token_literal_token2,
  [6528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__end_tag_name,
  [6535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
  [6542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SQUOTE,
  [6549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      aux_sym_ognl_java_class_token1,
  [6556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
  [6563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_GT,
  [6570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      aux_sym_number_literal_token1,
  [6577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_GT,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
  [6598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_erroneous_end_tag_name,
  [6612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
  [6619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym_doctype_token1,
  [6640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
  [6647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__end_tag_name,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_EQ,
  [6661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_number_literal_token1,
  [6668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
  [6675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
  [6689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
  [6696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
  [6703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__doctype,
  [6710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
  [6717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_EQ,
  [6731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_EQ,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 348,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 492,
  [SMALL_STATE(10)] = 564,
  [SMALL_STATE(11)] = 636,
  [SMALL_STATE(12)] = 708,
  [SMALL_STATE(13)] = 756,
  [SMALL_STATE(14)] = 828,
  [SMALL_STATE(15)] = 882,
  [SMALL_STATE(16)] = 930,
  [SMALL_STATE(17)] = 1002,
  [SMALL_STATE(18)] = 1074,
  [SMALL_STATE(19)] = 1148,
  [SMALL_STATE(20)] = 1222,
  [SMALL_STATE(21)] = 1296,
  [SMALL_STATE(22)] = 1344,
  [SMALL_STATE(23)] = 1398,
  [SMALL_STATE(24)] = 1456,
  [SMALL_STATE(25)] = 1506,
  [SMALL_STATE(26)] = 1578,
  [SMALL_STATE(27)] = 1648,
  [SMALL_STATE(28)] = 1716,
  [SMALL_STATE(29)] = 1778,
  [SMALL_STATE(30)] = 1852,
  [SMALL_STATE(31)] = 1891,
  [SMALL_STATE(32)] = 1934,
  [SMALL_STATE(33)] = 1973,
  [SMALL_STATE(34)] = 2012,
  [SMALL_STATE(35)] = 2057,
  [SMALL_STATE(36)] = 2100,
  [SMALL_STATE(37)] = 2145,
  [SMALL_STATE(38)] = 2182,
  [SMALL_STATE(39)] = 2219,
  [SMALL_STATE(40)] = 2256,
  [SMALL_STATE(41)] = 2293,
  [SMALL_STATE(42)] = 2330,
  [SMALL_STATE(43)] = 2367,
  [SMALL_STATE(44)] = 2404,
  [SMALL_STATE(45)] = 2441,
  [SMALL_STATE(46)] = 2478,
  [SMALL_STATE(47)] = 2520,
  [SMALL_STATE(48)] = 2578,
  [SMALL_STATE(49)] = 2634,
  [SMALL_STATE(50)] = 2688,
  [SMALL_STATE(51)] = 2738,
  [SMALL_STATE(52)] = 2800,
  [SMALL_STATE(53)] = 2846,
  [SMALL_STATE(54)] = 2888,
  [SMALL_STATE(55)] = 2925,
  [SMALL_STATE(56)] = 2965,
  [SMALL_STATE(57)] = 2999,
  [SMALL_STATE(58)] = 3033,
  [SMALL_STATE(59)] = 3093,
  [SMALL_STATE(60)] = 3153,
  [SMALL_STATE(61)] = 3193,
  [SMALL_STATE(62)] = 3229,
  [SMALL_STATE(63)] = 3263,
  [SMALL_STATE(64)] = 3323,
  [SMALL_STATE(65)] = 3357,
  [SMALL_STATE(66)] = 3390,
  [SMALL_STATE(67)] = 3423,
  [SMALL_STATE(68)] = 3456,
  [SMALL_STATE(69)] = 3489,
  [SMALL_STATE(70)] = 3522,
  [SMALL_STATE(71)] = 3553,
  [SMALL_STATE(72)] = 3584,
  [SMALL_STATE(73)] = 3615,
  [SMALL_STATE(74)] = 3646,
  [SMALL_STATE(75)] = 3677,
  [SMALL_STATE(76)] = 3708,
  [SMALL_STATE(77)] = 3739,
  [SMALL_STATE(78)] = 3770,
  [SMALL_STATE(79)] = 3809,
  [SMALL_STATE(80)] = 3848,
  [SMALL_STATE(81)] = 3887,
  [SMALL_STATE(82)] = 3926,
  [SMALL_STATE(83)] = 3965,
  [SMALL_STATE(84)] = 4004,
  [SMALL_STATE(85)] = 4043,
  [SMALL_STATE(86)] = 4082,
  [SMALL_STATE(87)] = 4121,
  [SMALL_STATE(88)] = 4160,
  [SMALL_STATE(89)] = 4199,
  [SMALL_STATE(90)] = 4238,
  [SMALL_STATE(91)] = 4282,
  [SMALL_STATE(92)] = 4322,
  [SMALL_STATE(93)] = 4366,
  [SMALL_STATE(94)] = 4410,
  [SMALL_STATE(95)] = 4454,
  [SMALL_STATE(96)] = 4479,
  [SMALL_STATE(97)] = 4504,
  [SMALL_STATE(98)] = 4541,
  [SMALL_STATE(99)] = 4578,
  [SMALL_STATE(100)] = 4603,
  [SMALL_STATE(101)] = 4628,
  [SMALL_STATE(102)] = 4669,
  [SMALL_STATE(103)] = 4710,
  [SMALL_STATE(104)] = 4735,
  [SMALL_STATE(105)] = 4772,
  [SMALL_STATE(106)] = 4813,
  [SMALL_STATE(107)] = 4848,
  [SMALL_STATE(108)] = 4883,
  [SMALL_STATE(109)] = 4918,
  [SMALL_STATE(110)] = 4943,
  [SMALL_STATE(111)] = 4968,
  [SMALL_STATE(112)] = 4997,
  [SMALL_STATE(113)] = 5026,
  [SMALL_STATE(114)] = 5044,
  [SMALL_STATE(115)] = 5062,
  [SMALL_STATE(116)] = 5080,
  [SMALL_STATE(117)] = 5098,
  [SMALL_STATE(118)] = 5115,
  [SMALL_STATE(119)] = 5132,
  [SMALL_STATE(120)] = 5149,
  [SMALL_STATE(121)] = 5166,
  [SMALL_STATE(122)] = 5183,
  [SMALL_STATE(123)] = 5200,
  [SMALL_STATE(124)] = 5220,
  [SMALL_STATE(125)] = 5242,
  [SMALL_STATE(126)] = 5264,
  [SMALL_STATE(127)] = 5284,
  [SMALL_STATE(128)] = 5302,
  [SMALL_STATE(129)] = 5324,
  [SMALL_STATE(130)] = 5346,
  [SMALL_STATE(131)] = 5366,
  [SMALL_STATE(132)] = 5385,
  [SMALL_STATE(133)] = 5404,
  [SMALL_STATE(134)] = 5423,
  [SMALL_STATE(135)] = 5442,
  [SMALL_STATE(136)] = 5461,
  [SMALL_STATE(137)] = 5475,
  [SMALL_STATE(138)] = 5489,
  [SMALL_STATE(139)] = 5503,
  [SMALL_STATE(140)] = 5517,
  [SMALL_STATE(141)] = 5531,
  [SMALL_STATE(142)] = 5545,
  [SMALL_STATE(143)] = 5559,
  [SMALL_STATE(144)] = 5573,
  [SMALL_STATE(145)] = 5587,
  [SMALL_STATE(146)] = 5601,
  [SMALL_STATE(147)] = 5615,
  [SMALL_STATE(148)] = 5629,
  [SMALL_STATE(149)] = 5643,
  [SMALL_STATE(150)] = 5657,
  [SMALL_STATE(151)] = 5671,
  [SMALL_STATE(152)] = 5685,
  [SMALL_STATE(153)] = 5699,
  [SMALL_STATE(154)] = 5713,
  [SMALL_STATE(155)] = 5727,
  [SMALL_STATE(156)] = 5741,
  [SMALL_STATE(157)] = 5755,
  [SMALL_STATE(158)] = 5769,
  [SMALL_STATE(159)] = 5783,
  [SMALL_STATE(160)] = 5797,
  [SMALL_STATE(161)] = 5811,
  [SMALL_STATE(162)] = 5825,
  [SMALL_STATE(163)] = 5838,
  [SMALL_STATE(164)] = 5852,
  [SMALL_STATE(165)] = 5862,
  [SMALL_STATE(166)] = 5878,
  [SMALL_STATE(167)] = 5894,
  [SMALL_STATE(168)] = 5908,
  [SMALL_STATE(169)] = 5918,
  [SMALL_STATE(170)] = 5932,
  [SMALL_STATE(171)] = 5946,
  [SMALL_STATE(172)] = 5962,
  [SMALL_STATE(173)] = 5972,
  [SMALL_STATE(174)] = 5984,
  [SMALL_STATE(175)] = 5998,
  [SMALL_STATE(176)] = 6014,
  [SMALL_STATE(177)] = 6024,
  [SMALL_STATE(178)] = 6037,
  [SMALL_STATE(179)] = 6050,
  [SMALL_STATE(180)] = 6063,
  [SMALL_STATE(181)] = 6072,
  [SMALL_STATE(182)] = 6081,
  [SMALL_STATE(183)] = 6094,
  [SMALL_STATE(184)] = 6107,
  [SMALL_STATE(185)] = 6116,
  [SMALL_STATE(186)] = 6129,
  [SMALL_STATE(187)] = 6142,
  [SMALL_STATE(188)] = 6155,
  [SMALL_STATE(189)] = 6168,
  [SMALL_STATE(190)] = 6177,
  [SMALL_STATE(191)] = 6187,
  [SMALL_STATE(192)] = 6197,
  [SMALL_STATE(193)] = 6205,
  [SMALL_STATE(194)] = 6213,
  [SMALL_STATE(195)] = 6223,
  [SMALL_STATE(196)] = 6233,
  [SMALL_STATE(197)] = 6243,
  [SMALL_STATE(198)] = 6253,
  [SMALL_STATE(199)] = 6263,
  [SMALL_STATE(200)] = 6273,
  [SMALL_STATE(201)] = 6283,
  [SMALL_STATE(202)] = 6293,
  [SMALL_STATE(203)] = 6303,
  [SMALL_STATE(204)] = 6313,
  [SMALL_STATE(205)] = 6323,
  [SMALL_STATE(206)] = 6333,
  [SMALL_STATE(207)] = 6343,
  [SMALL_STATE(208)] = 6353,
  [SMALL_STATE(209)] = 6363,
  [SMALL_STATE(210)] = 6373,
  [SMALL_STATE(211)] = 6383,
  [SMALL_STATE(212)] = 6391,
  [SMALL_STATE(213)] = 6399,
  [SMALL_STATE(214)] = 6407,
  [SMALL_STATE(215)] = 6417,
  [SMALL_STATE(216)] = 6427,
  [SMALL_STATE(217)] = 6437,
  [SMALL_STATE(218)] = 6444,
  [SMALL_STATE(219)] = 6451,
  [SMALL_STATE(220)] = 6458,
  [SMALL_STATE(221)] = 6465,
  [SMALL_STATE(222)] = 6472,
  [SMALL_STATE(223)] = 6479,
  [SMALL_STATE(224)] = 6486,
  [SMALL_STATE(225)] = 6493,
  [SMALL_STATE(226)] = 6500,
  [SMALL_STATE(227)] = 6507,
  [SMALL_STATE(228)] = 6514,
  [SMALL_STATE(229)] = 6521,
  [SMALL_STATE(230)] = 6528,
  [SMALL_STATE(231)] = 6535,
  [SMALL_STATE(232)] = 6542,
  [SMALL_STATE(233)] = 6549,
  [SMALL_STATE(234)] = 6556,
  [SMALL_STATE(235)] = 6563,
  [SMALL_STATE(236)] = 6570,
  [SMALL_STATE(237)] = 6577,
  [SMALL_STATE(238)] = 6584,
  [SMALL_STATE(239)] = 6591,
  [SMALL_STATE(240)] = 6598,
  [SMALL_STATE(241)] = 6605,
  [SMALL_STATE(242)] = 6612,
  [SMALL_STATE(243)] = 6619,
  [SMALL_STATE(244)] = 6626,
  [SMALL_STATE(245)] = 6633,
  [SMALL_STATE(246)] = 6640,
  [SMALL_STATE(247)] = 6647,
  [SMALL_STATE(248)] = 6654,
  [SMALL_STATE(249)] = 6661,
  [SMALL_STATE(250)] = 6668,
  [SMALL_STATE(251)] = 6675,
  [SMALL_STATE(252)] = 6682,
  [SMALL_STATE(253)] = 6689,
  [SMALL_STATE(254)] = 6696,
  [SMALL_STATE(255)] = 6703,
  [SMALL_STATE(256)] = 6710,
  [SMALL_STATE(257)] = 6717,
  [SMALL_STATE(258)] = 6724,
  [SMALL_STATE(259)] = 6731,
  [SMALL_STATE(260)] = 6738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_ognl_expression, 3, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_ognl_expression, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(31),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 3, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 3, .production_id = 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_field, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_field, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 4, .production_id = 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 4, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_method, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_method, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 2, .production_id = 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 2, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_access, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_access, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(229),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(55),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(255),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(244),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(260),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(188),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(241),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(196),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(195),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(81),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(80),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_not, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_not, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(127),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(109),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(162),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(110),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(173),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(170),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2), SHIFT_REPEAT(104),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2), SHIFT_REPEAT(246),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [738] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
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
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
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
