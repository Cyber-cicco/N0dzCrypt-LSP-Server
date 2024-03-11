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
#define STATE_COUNT 285
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

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
  aux_sym_message_name_token1 = 67,
  anon_sym_LPAREN = 68,
  anon_sym_COMMA = 69,
  anon_sym_RPAREN = 70,
  anon_sym_QMARK = 71,
  anon_sym_COLON = 72,
  anon_sym_BANG = 73,
  aux_sym_object_creation_expression_token1 = 74,
  sym_ognl_greater_or_equal = 75,
  sym_ognl_lower_or_equal = 76,
  sym_ognl_new = 77,
  sym_ognl_instanceof = 78,
  sym_bit_shift_left = 79,
  sym_ognl_bit_shift_left = 80,
  sym_bit_shift_right = 81,
  sym_ognl_bit_shift_right = 82,
  sym_logical_shift_right = 83,
  anon_sym_AT = 84,
  aux_sym_ognl_object_literal_token1 = 85,
  aux_sym_ognl_object_literal_token2 = 86,
  anon_sym_LBRACK = 87,
  anon_sym_RBRACK = 88,
  sym__start_tag_name = 89,
  sym__script_start_tag_name = 90,
  sym__style_start_tag_name = 91,
  sym__end_tag_name = 92,
  sym_erroneous_end_tag_name = 93,
  sym__implicit_end_tag = 94,
  sym_raw_text = 95,
  sym_comment = 96,
  sym_document = 97,
  sym_doctype = 98,
  sym__node = 99,
  sym_element = 100,
  sym_script_element = 101,
  sym_style_element = 102,
  sym_start_tag = 103,
  sym__attributes = 104,
  sym_th_attribute = 105,
  sym_th_attribute_value = 106,
  sym_script_start_tag = 107,
  sym_style_start_tag = 108,
  sym_self_closing_tag = 109,
  sym_end_tag = 110,
  sym_erroneous_end_tag = 111,
  sym_attribute = 112,
  sym__th_generic = 113,
  sym__th_ognl_only = 114,
  sym_quoted_attribute_value = 115,
  sym__literal = 116,
  sym_number_literal = 117,
  sym_token_literal = 118,
  sym_string_literal = 119,
  sym_interpolated_string_literal = 120,
  sym__interpreted_string_literal = 121,
  sym_greater_than = 122,
  sym_lesser_than = 123,
  sym_add = 124,
  sym_substract = 125,
  sym_multiply = 126,
  sym__th_std_expression = 127,
  sym_fragment_th_std_expression = 128,
  sym_url_th_std_expression = 129,
  sym_message_th_std_expression = 130,
  sym_varselect_th_std_expression = 131,
  sym_ognl_th_std_expression = 132,
  sym_url_std_expression = 133,
  sym_message_name = 134,
  sym_message_std_expression = 135,
  sym_ternary_th_std_expression = 136,
  sym_unary_th_std_expression = 137,
  sym_parenthesized_th_std_expression = 138,
  sym_binary_th_std_expression = 139,
  sym__ognl_std_expression = 140,
  sym__ognl_primary_expression = 141,
  sym__ognl_literal = 142,
  sym_object_creation_expression = 143,
  sym_ognl_assignement_expression = 144,
  sym_bitwise_not = 145,
  sym_binary_ognl_expression = 146,
  sym_ognl_variable = 147,
  sym__ognl_post_accessor = 148,
  sym_ognl_java_class = 149,
  sym__ognl_post_java_class = 150,
  sym_ognl_java_method = 151,
  sym_ognl_java_field = 152,
  sym_ognl_object_literal = 153,
  sym_ognl_property_access = 154,
  sym_ognl_method_access = 155,
  sym_ognl_method_literal = 156,
  sym_ognl_method_name = 157,
  sym_ognl_method_args = 158,
  aux_sym_document_repeat1 = 159,
  aux_sym_start_tag_repeat1 = 160,
  aux_sym_token_literal_repeat1 = 161,
  aux_sym_interpolated_string_literal_repeat1 = 162,
  aux_sym__interpreted_string_literal_repeat1 = 163,
  aux_sym_message_std_expression_repeat1 = 164,
  aux_sym_ognl_java_class_repeat1 = 165,
  aux_sym_ognl_object_literal_repeat1 = 166,
  aux_sym_ognl_method_args_repeat1 = 167,
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
  [aux_sym_message_name_token1] = "message_name_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [aux_sym_object_creation_expression_token1] = "object_creation_expression_token1",
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
  [aux_sym_ognl_object_literal_token1] = "ognl_object_literal_token1",
  [aux_sym_ognl_object_literal_token2] = "ognl_object_literal_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_message_name] = "message_name",
  [sym_message_std_expression] = "message_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_unary_th_std_expression] = "unary_th_std_expression",
  [sym_parenthesized_th_std_expression] = "parenthesized_th_std_expression",
  [sym_binary_th_std_expression] = "binary_th_std_expression",
  [sym__ognl_std_expression] = "_ognl_std_expression",
  [sym__ognl_primary_expression] = "_ognl_primary_expression",
  [sym__ognl_literal] = "_ognl_literal",
  [sym_object_creation_expression] = "object_creation_expression",
  [sym_ognl_assignement_expression] = "ognl_assignement_expression",
  [sym_bitwise_not] = "bitwise_not",
  [sym_binary_ognl_expression] = "binary_ognl_expression",
  [sym_ognl_variable] = "ognl_variable",
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
  [aux_sym_message_std_expression_repeat1] = "message_std_expression_repeat1",
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
  [aux_sym_message_name_token1] = aux_sym_message_name_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_object_creation_expression_token1] = aux_sym_object_creation_expression_token1,
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
  [aux_sym_ognl_object_literal_token1] = aux_sym_ognl_object_literal_token1,
  [aux_sym_ognl_object_literal_token2] = aux_sym_ognl_object_literal_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_message_name] = sym_message_name,
  [sym_message_std_expression] = sym_message_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_unary_th_std_expression] = sym_unary_th_std_expression,
  [sym_parenthesized_th_std_expression] = sym_parenthesized_th_std_expression,
  [sym_binary_th_std_expression] = sym_binary_th_std_expression,
  [sym__ognl_std_expression] = sym__ognl_std_expression,
  [sym__ognl_primary_expression] = sym__ognl_primary_expression,
  [sym__ognl_literal] = sym__ognl_literal,
  [sym_object_creation_expression] = sym_object_creation_expression,
  [sym_ognl_assignement_expression] = sym_ognl_assignement_expression,
  [sym_bitwise_not] = sym_bitwise_not,
  [sym_binary_ognl_expression] = sym_binary_ognl_expression,
  [sym_ognl_variable] = sym_ognl_variable,
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
  [aux_sym_message_std_expression_repeat1] = aux_sym_message_std_expression_repeat1,
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
  [aux_sym_message_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [aux_sym_object_creation_expression_token1] = {
    .visible = false,
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
  [sym_message_name] = {
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
  [sym__ognl_primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__ognl_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_object_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_assignement_expression] = {
    .visible = true,
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
  [sym_ognl_variable] = {
    .visible = true,
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
  [aux_sym_message_std_expression_repeat1] = {
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
  field_message = 8,
  field_name = 9,
  field_operand = 10,
  field_operator = 11,
  field_right = 12,
  field_value = 13,
  field_var = 14,
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
  [field_message] = "message",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 4},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_message, 0},
  [3] =
    {field_attribute_name, 1},
    {field_attribute_value, 4},
  [5] =
    {field_args, 1},
    {field_name, 0},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_args, 1},
    {field_args, 2},
    {field_message, 0},
  [13] =
    {field_name, 1},
  [14] =
    {field_value, 2},
    {field_var, 0},
  [16] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_message, 0},
  [20] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [23] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_message, 0},
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [36] = 21,
  [37] = 37,
  [38] = 34,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 70,
  [78] = 72,
  [79] = 73,
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
  [96] = 85,
  [97] = 84,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 110,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 6,
  [123] = 3,
  [124] = 95,
  [125] = 112,
  [126] = 80,
  [127] = 98,
  [128] = 128,
  [129] = 82,
  [130] = 115,
  [131] = 111,
  [132] = 114,
  [133] = 113,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 35,
  [138] = 32,
  [139] = 135,
  [140] = 37,
  [141] = 136,
  [142] = 23,
  [143] = 143,
  [144] = 144,
  [145] = 134,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 154,
  [158] = 156,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 151,
  [163] = 161,
  [164] = 153,
  [165] = 148,
  [166] = 159,
  [167] = 150,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 168,
  [172] = 172,
  [173] = 160,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 175,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 178,
  [185] = 185,
  [186] = 177,
  [187] = 180,
  [188] = 174,
  [189] = 181,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 176,
  [194] = 194,
  [195] = 185,
  [196] = 183,
  [197] = 197,
  [198] = 192,
  [199] = 199,
  [200] = 200,
  [201] = 191,
  [202] = 202,
  [203] = 197,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 212,
  [216] = 214,
  [217] = 217,
  [218] = 207,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 208,
  [223] = 210,
  [224] = 224,
  [225] = 225,
  [226] = 209,
  [227] = 220,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 213,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 249,
  [252] = 252,
  [253] = 243,
  [254] = 239,
  [255] = 247,
  [256] = 234,
  [257] = 257,
  [258] = 250,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 260,
  [265] = 252,
  [266] = 266,
  [267] = 263,
  [268] = 268,
  [269] = 269,
  [270] = 269,
  [271] = 235,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 245,
  [276] = 276,
  [277] = 257,
  [278] = 278,
  [279] = 244,
  [280] = 240,
  [281] = 272,
  [282] = 238,
  [283] = 242,
  [284] = 268,
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
      if (eof) ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(246);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(247);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(245);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(243);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(257);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '~') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 't') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(206);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '~') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == ']') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 32:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(124);
      END_STATE();
    case 33:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 34:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 36:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 37:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(170);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 50:
      if (eof) ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '%') ADVANCE(242);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(254);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '[') ADVANCE(313);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '~') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(246);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(248);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == 'e') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == 'e') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_equal_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_or);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_message_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'd') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'h') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'n') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'q') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 'r') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_object_creation_expression_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ognl_greater_or_equal);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ognl_greater_or_equal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ognl_lower_or_equal);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ognl_lower_or_equal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ognl_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ognl_instanceof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bit_shift_left);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ognl_bit_shift_left);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ognl_bit_shift_left);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bit_shift_right);
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ognl_bit_shift_right);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ognl_bit_shift_right);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_logical_shift_right);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '{') ADVANCE(245);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'c') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'f') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'o') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'r') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'w') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51, .external_lex_state = 2},
  [2] = {.lex_state = 20, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 20, .external_lex_state = 2},
  [5] = {.lex_state = 20, .external_lex_state = 2},
  [6] = {.lex_state = 21, .external_lex_state = 2},
  [7] = {.lex_state = 20, .external_lex_state = 2},
  [8] = {.lex_state = 20, .external_lex_state = 2},
  [9] = {.lex_state = 21, .external_lex_state = 2},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 20, .external_lex_state = 2},
  [12] = {.lex_state = 20, .external_lex_state = 2},
  [13] = {.lex_state = 21, .external_lex_state = 2},
  [14] = {.lex_state = 20, .external_lex_state = 2},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 20, .external_lex_state = 2},
  [18] = {.lex_state = 20, .external_lex_state = 2},
  [19] = {.lex_state = 20, .external_lex_state = 2},
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
  [46] = {.lex_state = 21, .external_lex_state = 2},
  [47] = {.lex_state = 22, .external_lex_state = 2},
  [48] = {.lex_state = 21, .external_lex_state = 2},
  [49] = {.lex_state = 22, .external_lex_state = 2},
  [50] = {.lex_state = 22, .external_lex_state = 2},
  [51] = {.lex_state = 22, .external_lex_state = 2},
  [52] = {.lex_state = 22, .external_lex_state = 2},
  [53] = {.lex_state = 22, .external_lex_state = 2},
  [54] = {.lex_state = 22, .external_lex_state = 2},
  [55] = {.lex_state = 21, .external_lex_state = 2},
  [56] = {.lex_state = 22, .external_lex_state = 2},
  [57] = {.lex_state = 21, .external_lex_state = 2},
  [58] = {.lex_state = 22, .external_lex_state = 2},
  [59] = {.lex_state = 22, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 24, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 21, .external_lex_state = 2},
  [64] = {.lex_state = 21, .external_lex_state = 2},
  [65] = {.lex_state = 21, .external_lex_state = 2},
  [66] = {.lex_state = 21, .external_lex_state = 2},
  [67] = {.lex_state = 22, .external_lex_state = 2},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22, .external_lex_state = 2},
  [70] = {.lex_state = 21, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 2},
  [72] = {.lex_state = 21, .external_lex_state = 2},
  [73] = {.lex_state = 21, .external_lex_state = 2},
  [74] = {.lex_state = 21, .external_lex_state = 2},
  [75] = {.lex_state = 24, .external_lex_state = 2},
  [76] = {.lex_state = 22, .external_lex_state = 2},
  [77] = {.lex_state = 22, .external_lex_state = 2},
  [78] = {.lex_state = 22, .external_lex_state = 2},
  [79] = {.lex_state = 22, .external_lex_state = 2},
  [80] = {.lex_state = 22, .external_lex_state = 2},
  [81] = {.lex_state = 22, .external_lex_state = 2},
  [82] = {.lex_state = 22, .external_lex_state = 2},
  [83] = {.lex_state = 25, .external_lex_state = 2},
  [84] = {.lex_state = 25, .external_lex_state = 2},
  [85] = {.lex_state = 25, .external_lex_state = 2},
  [86] = {.lex_state = 25, .external_lex_state = 2},
  [87] = {.lex_state = 25, .external_lex_state = 2},
  [88] = {.lex_state = 22, .external_lex_state = 2},
  [89] = {.lex_state = 25, .external_lex_state = 2},
  [90] = {.lex_state = 22, .external_lex_state = 2},
  [91] = {.lex_state = 22, .external_lex_state = 2},
  [92] = {.lex_state = 25, .external_lex_state = 2},
  [93] = {.lex_state = 25, .external_lex_state = 2},
  [94] = {.lex_state = 25, .external_lex_state = 2},
  [95] = {.lex_state = 22, .external_lex_state = 2},
  [96] = {.lex_state = 25, .external_lex_state = 2},
  [97] = {.lex_state = 25, .external_lex_state = 2},
  [98] = {.lex_state = 22, .external_lex_state = 2},
  [99] = {.lex_state = 25, .external_lex_state = 2},
  [100] = {.lex_state = 25, .external_lex_state = 2},
  [101] = {.lex_state = 25, .external_lex_state = 2},
  [102] = {.lex_state = 25, .external_lex_state = 2},
  [103] = {.lex_state = 25, .external_lex_state = 2},
  [104] = {.lex_state = 25, .external_lex_state = 2},
  [105] = {.lex_state = 51, .external_lex_state = 3},
  [106] = {.lex_state = 51, .external_lex_state = 3},
  [107] = {.lex_state = 51, .external_lex_state = 3},
  [108] = {.lex_state = 51, .external_lex_state = 3},
  [109] = {.lex_state = 51, .external_lex_state = 2},
  [110] = {.lex_state = 51, .external_lex_state = 2},
  [111] = {.lex_state = 20, .external_lex_state = 2},
  [112] = {.lex_state = 20, .external_lex_state = 2},
  [113] = {.lex_state = 20, .external_lex_state = 2},
  [114] = {.lex_state = 20, .external_lex_state = 2},
  [115] = {.lex_state = 20, .external_lex_state = 2},
  [116] = {.lex_state = 51, .external_lex_state = 3},
  [117] = {.lex_state = 26, .external_lex_state = 2},
  [118] = {.lex_state = 26, .external_lex_state = 2},
  [119] = {.lex_state = 26, .external_lex_state = 2},
  [120] = {.lex_state = 27, .external_lex_state = 2},
  [121] = {.lex_state = 27, .external_lex_state = 2},
  [122] = {.lex_state = 28, .external_lex_state = 2},
  [123] = {.lex_state = 28, .external_lex_state = 2},
  [124] = {.lex_state = 26, .external_lex_state = 2},
  [125] = {.lex_state = 25, .external_lex_state = 2},
  [126] = {.lex_state = 26, .external_lex_state = 2},
  [127] = {.lex_state = 26, .external_lex_state = 2},
  [128] = {.lex_state = 25, .external_lex_state = 2},
  [129] = {.lex_state = 26, .external_lex_state = 2},
  [130] = {.lex_state = 25, .external_lex_state = 2},
  [131] = {.lex_state = 25, .external_lex_state = 2},
  [132] = {.lex_state = 25, .external_lex_state = 2},
  [133] = {.lex_state = 25, .external_lex_state = 2},
  [134] = {.lex_state = 29, .external_lex_state = 4},
  [135] = {.lex_state = 29, .external_lex_state = 4},
  [136] = {.lex_state = 29, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 28, .external_lex_state = 2},
  [139] = {.lex_state = 29, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 29, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 29, .external_lex_state = 2},
  [144] = {.lex_state = 29, .external_lex_state = 2},
  [145] = {.lex_state = 29, .external_lex_state = 2},
  [146] = {.lex_state = 29, .external_lex_state = 2},
  [147] = {.lex_state = 29, .external_lex_state = 2},
  [148] = {.lex_state = 51, .external_lex_state = 2},
  [149] = {.lex_state = 51, .external_lex_state = 2},
  [150] = {.lex_state = 51, .external_lex_state = 3},
  [151] = {.lex_state = 51, .external_lex_state = 3},
  [152] = {.lex_state = 51, .external_lex_state = 3},
  [153] = {.lex_state = 51, .external_lex_state = 3},
  [154] = {.lex_state = 51, .external_lex_state = 2},
  [155] = {.lex_state = 51, .external_lex_state = 3},
  [156] = {.lex_state = 51, .external_lex_state = 3},
  [157] = {.lex_state = 51, .external_lex_state = 3},
  [158] = {.lex_state = 51, .external_lex_state = 2},
  [159] = {.lex_state = 51, .external_lex_state = 3},
  [160] = {.lex_state = 51, .external_lex_state = 3},
  [161] = {.lex_state = 51, .external_lex_state = 3},
  [162] = {.lex_state = 51, .external_lex_state = 2},
  [163] = {.lex_state = 51, .external_lex_state = 2},
  [164] = {.lex_state = 51, .external_lex_state = 2},
  [165] = {.lex_state = 51, .external_lex_state = 3},
  [166] = {.lex_state = 51, .external_lex_state = 2},
  [167] = {.lex_state = 51, .external_lex_state = 2},
  [168] = {.lex_state = 51, .external_lex_state = 2},
  [169] = {.lex_state = 51, .external_lex_state = 2},
  [170] = {.lex_state = 51, .external_lex_state = 3},
  [171] = {.lex_state = 51, .external_lex_state = 3},
  [172] = {.lex_state = 51, .external_lex_state = 3},
  [173] = {.lex_state = 51, .external_lex_state = 2},
  [174] = {.lex_state = 29, .external_lex_state = 4},
  [175] = {.lex_state = 30, .external_lex_state = 2},
  [176] = {.lex_state = 29, .external_lex_state = 4},
  [177] = {.lex_state = 30, .external_lex_state = 2},
  [178] = {.lex_state = 31, .external_lex_state = 2},
  [179] = {.lex_state = 30, .external_lex_state = 2},
  [180] = {.lex_state = 32, .external_lex_state = 2},
  [181] = {.lex_state = 29, .external_lex_state = 4},
  [182] = {.lex_state = 30, .external_lex_state = 2},
  [183] = {.lex_state = 29, .external_lex_state = 4},
  [184] = {.lex_state = 31, .external_lex_state = 2},
  [185] = {.lex_state = 29, .external_lex_state = 4},
  [186] = {.lex_state = 30, .external_lex_state = 2},
  [187] = {.lex_state = 32, .external_lex_state = 2},
  [188] = {.lex_state = 29, .external_lex_state = 2},
  [189] = {.lex_state = 29, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 5},
  [192] = {.lex_state = 33, .external_lex_state = 2},
  [193] = {.lex_state = 29, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 29, .external_lex_state = 2},
  [196] = {.lex_state = 29, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 6},
  [198] = {.lex_state = 33, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 6},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 5},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 34, .external_lex_state = 2},
  [210] = {.lex_state = 35, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 36, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 7},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 7},
  [217] = {.lex_state = 36, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 39, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 35, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 34, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 39, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 5},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 39, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 5},
  [233] = {.lex_state = 36, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 39, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 22, .external_lex_state = 2},
  [245] = {.lex_state = 51, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 51, .external_lex_state = 2},
  [248] = {.lex_state = 33, .external_lex_state = 2},
  [249] = {.lex_state = 51, .external_lex_state = 2},
  [250] = {.lex_state = 20, .external_lex_state = 2},
  [251] = {.lex_state = 51, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 51, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 39, .external_lex_state = 2},
  [258] = {.lex_state = 20, .external_lex_state = 2},
  [259] = {.lex_state = 39, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 37, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 8},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 8},
  [268] = {.lex_state = 38, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 9},
  [270] = {.lex_state = 0, .external_lex_state = 9},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 51, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 39, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 22, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 38, .external_lex_state = 2},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [sym_document] = STATE(261),
    [sym_doctype] = STATE(109),
    [sym__node] = STATE(109),
    [sym_element] = STATE(109),
    [sym_script_element] = STATE(109),
    [sym_style_element] = STATE(109),
    [sym_start_tag] = STATE(106),
    [sym_script_start_tag] = STATE(205),
    [sym_style_start_tag] = STATE(191),
    [sym_self_closing_tag] = STATE(166),
    [sym_erroneous_end_tag] = STATE(109),
    [aux_sym_document_repeat1] = STATE(109),
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(256), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(71), 15,
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
  [75] = 9,
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
    STATE(32), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(42), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(43), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
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
  [130] = 19,
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
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(55), 3,
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
  [205] = 19,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
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
    STATE(71), 15,
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
  [280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(3), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(43), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(59), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(61), 21,
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
  [335] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(67), 3,
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
  [407] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(69), 3,
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
  [479] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_AT,
    STATE(57), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(71), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(75), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [527] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(79), 3,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [599] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(81), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(54), 15,
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
  [671] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(83), 3,
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
  [743] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_AT,
    STATE(48), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(85), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(87), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [791] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(89), 3,
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
  [863] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(91), 3,
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
  [935] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(93), 3,
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
  [1007] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(95), 3,
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
  [1079] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(97), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(56), 15,
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
  [1151] = 18,
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
    STATE(61), 1,
      aux_sym_token_literal_repeat1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(99), 3,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(103), 26,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1263] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_and,
    ACTIONS(121), 1,
      sym_or,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(40), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(139), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(141), 21,
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
  [1423] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(143), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(145), 21,
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
  [1471] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(143), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(145), 17,
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
  [1525] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(143), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(145), 15,
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
  [1583] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(143), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(145), 20,
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
  [1633] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_and,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    ACTIONS(145), 2,
      sym_or,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1705] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(145), 3,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [1775] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
    ACTIONS(145), 7,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_RBRACE,
  [1843] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
    ACTIONS(143), 4,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(145), 11,
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
  [1905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(32), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(147), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(149), 24,
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
  [1949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(156), 26,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1989] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_and,
    ACTIONS(121), 1,
      sym_or,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2063] = 6,
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
    ACTIONS(160), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(162), 21,
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
  [2109] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_and,
    ACTIONS(121), 1,
      sym_or,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(46), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(166), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(168), 21,
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
  [2229] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_and,
    ACTIONS(121), 1,
      sym_or,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_bit_shift_right,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_bitwise_not,
    STATE(94), 1,
      sym_multiply,
    ACTIONS(113), 2,
      sym_greater_than_2,
      sym_lesser_than_2,
    ACTIONS(127), 2,
      sym_divide,
      sym_modulo,
    STATE(89), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(93), 2,
      sym_add,
      sym_substract,
    ACTIONS(115), 4,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
    ACTIONS(117), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(131), 4,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
  [2303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_ognl_method_args,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(180), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(184), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(188), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(192), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(196), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(200), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2612] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(202), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(204), 19,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(212), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [2696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(202), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(204), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2739] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(204), 6,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [2798] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(228), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(230), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2841] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(204), 7,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2898] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(204), 11,
      anon_sym_DQUOTE,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2953] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(202), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(204), 17,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(234), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [3041] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(236), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(87), 24,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_bit_shift_left,
      sym_ognl_bit_shift_left,
      sym_ognl_bit_shift_right,
      sym_logical_shift_right,
      anon_sym_RBRACK,
  [3141] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_multiply,
    STATE(200), 1,
      aux_sym_message_std_expression_repeat1,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3207] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_object_creation_expression_token1,
    ACTIONS(248), 13,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_equal_2,
      sym_not_equal_2,
      sym_and,
      sym_or,
      sym_ognl_greater_or_equal,
      sym_ognl_lower_or_equal,
      sym_ognl_bit_shift_left,
      sym_bit_shift_right,
      sym_ognl_bit_shift_right,
    ACTIONS(250), 13,
      anon_sym_TILDE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_divide,
      sym_modulo,
      anon_sym_RBRACE,
      sym_bit_shift_left,
      sym_logical_shift_right,
  [3305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(258), 1,
      aux_sym_token_literal_token2,
    STATE(62), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(254), 11,
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
    ACTIONS(256), 13,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_token_literal_token1,
    ACTIONS(267), 1,
      aux_sym_token_literal_token2,
    STATE(62), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(260), 11,
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
    ACTIONS(262), 13,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(270), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(274), 21,
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
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
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
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(280), 21,
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
  [3495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(284), 21,
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
  [3529] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    ACTIONS(286), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3589] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(270), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(274), 23,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(294), 21,
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
  [3719] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(222), 1,
      sym_and,
    ACTIONS(224), 1,
      anon_sym_PLUS,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(238), 1,
      sym_or,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_multiply,
    ACTIONS(208), 2,
      sym_divide,
      sym_modulo,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(17), 2,
      sym_add,
      sym_substract,
    ACTIONS(220), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(218), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [3779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(300), 21,
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
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(304), 21,
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
  [3847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_GT,
      anon_sym_LT,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_bit_shift_right,
    ACTIONS(308), 21,
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
  [3881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 13,
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
    ACTIONS(262), 13,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_greater_or_equal,
      sym_lesser_or_equal,
      sym_equal,
      sym_not_equal,
      anon_sym_PLUS,
      sym_divide,
      sym_modulo,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 23,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [3948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 23,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 23,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 23,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4143] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(324), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(28), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4193] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(336), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(21), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(338), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(38), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4293] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(340), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(29), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4343] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(342), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(30), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4425] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(348), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(31), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4539] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(358), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(24), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4589] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(360), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(25), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4639] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(362), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(27), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(368), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(34), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4771] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(370), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(36), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 22,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4853] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_ognl_new,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(64), 1,
      sym_ognl_variable,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(376), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_instanceof,
    STATE(26), 11,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_primary_expression,
      sym__ognl_literal,
      sym_object_creation_expression,
      sym_ognl_assignement_expression,
      sym_binary_ognl_expression,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4903] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(380), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(220), 1,
      sym_ognl_method_name,
    ACTIONS(378), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(202), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_variable,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4947] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(380), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(220), 1,
      sym_ognl_method_name,
    ACTIONS(386), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(211), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_variable,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [4988] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(380), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(220), 1,
      sym_ognl_method_name,
    ACTIONS(388), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(252), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_variable,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [5029] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_number_literal_token1,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(70), 1,
      sym__interpreted_string_literal,
    STATE(227), 1,
      sym_ognl_method_name,
    ACTIONS(390), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(65), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_variable,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [5070] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(380), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(77), 1,
      sym__interpreted_string_literal,
    STATE(220), 1,
      sym_ognl_method_name,
    ACTIONS(392), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(265), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_variable,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [5111] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT_BANG,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(398), 1,
      anon_sym_LT_SLASH,
    ACTIONS(402), 1,
      sym__implicit_end_tag,
    STATE(107), 1,
      sym_start_tag,
    STATE(159), 1,
      sym_self_closing_tag,
    STATE(164), 1,
      sym_end_tag,
    STATE(201), 1,
      sym_style_start_tag,
    STATE(206), 1,
      sym_script_start_tag,
    ACTIONS(400), 2,
      sym_entity,
      sym_text,
    STATE(116), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5155] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT_BANG,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(398), 1,
      anon_sym_LT_SLASH,
    ACTIONS(406), 1,
      sym__implicit_end_tag,
    STATE(107), 1,
      sym_start_tag,
    STATE(159), 1,
      sym_self_closing_tag,
    STATE(163), 1,
      sym_end_tag,
    STATE(201), 1,
      sym_style_start_tag,
    STATE(206), 1,
      sym_script_start_tag,
    ACTIONS(404), 2,
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
  [5199] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT_BANG,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(408), 1,
      anon_sym_LT_SLASH,
    ACTIONS(412), 1,
      sym__implicit_end_tag,
    STATE(107), 1,
      sym_start_tag,
    STATE(159), 1,
      sym_self_closing_tag,
    STATE(161), 1,
      sym_end_tag,
    STATE(201), 1,
      sym_style_start_tag,
    STATE(206), 1,
      sym_script_start_tag,
    ACTIONS(410), 2,
      sym_entity,
      sym_text,
    STATE(108), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT_BANG,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(408), 1,
      anon_sym_LT_SLASH,
    ACTIONS(414), 1,
      sym__implicit_end_tag,
    STATE(107), 1,
      sym_start_tag,
    STATE(153), 1,
      sym_end_tag,
    STATE(159), 1,
      sym_self_closing_tag,
    STATE(201), 1,
      sym_style_start_tag,
    STATE(206), 1,
      sym_script_start_tag,
    ACTIONS(400), 2,
      sym_entity,
      sym_text,
    STATE(116), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5287] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_start_tag,
    STATE(166), 1,
      sym_self_closing_tag,
    STATE(191), 1,
      sym_style_start_tag,
    STATE(205), 1,
      sym_script_start_tag,
    ACTIONS(418), 2,
      sym_entity,
      sym_text,
    STATE(110), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5328] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      anon_sym_LT_BANG,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(428), 1,
      anon_sym_LT_SLASH,
    STATE(106), 1,
      sym_start_tag,
    STATE(166), 1,
      sym_self_closing_tag,
    STATE(191), 1,
      sym_style_start_tag,
    STATE(205), 1,
      sym_script_start_tag,
    ACTIONS(431), 2,
      sym_entity,
      sym_text,
    STATE(110), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(434), 11,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [5394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(438), 11,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [5419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(442), 11,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [5444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(446), 11,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [5469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(450), 11,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_TILDE_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [5494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__implicit_end_tag,
    ACTIONS(454), 1,
      anon_sym_LT_BANG,
    ACTIONS(457), 1,
      anon_sym_LT,
    ACTIONS(460), 1,
      anon_sym_LT_SLASH,
    STATE(107), 1,
      sym_start_tag,
    STATE(159), 1,
      sym_self_closing_tag,
    STATE(201), 1,
      sym_style_start_tag,
    STATE(206), 1,
      sym_script_start_tag,
    ACTIONS(463), 2,
      sym_entity,
      sym_text,
    STATE(116), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [5535] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(472), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(474), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(476), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(478), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(468), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(119), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [5570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(474), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(476), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(478), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(480), 1,
      anon_sym_PIPE,
    ACTIONS(484), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(482), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(117), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [5605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(494), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(497), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(500), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(503), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(488), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(119), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [5640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(282), 1,
      sym__th_generic,
    STATE(283), 1,
      sym__th_ognl_only,
    ACTIONS(508), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(506), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [5665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(238), 1,
      sym__th_generic,
    STATE(242), 1,
      sym__th_ognl_only,
    ACTIONS(512), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(510), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [5690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(516), 1,
      aux_sym_ognl_object_literal_token2,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(61), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(43), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [5719] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(138), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(47), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(42), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [5748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(364), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(440), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(310), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(372), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(524), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(318), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [5856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(452), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(436), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(448), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_SQUOTE,
      aux_sym_number_literal_token1,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(444), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
      aux_sym_ognl_object_literal_token1,
  [5928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_th_COLON,
    ACTIONS(531), 1,
      sym_attribute_name,
    ACTIONS(526), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(134), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_GT,
    ACTIONS(536), 1,
      anon_sym_th_COLON,
    ACTIONS(538), 1,
      anon_sym_SLASH_GT,
    ACTIONS(540), 1,
      sym_attribute_name,
    STATE(141), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_th_COLON,
    ACTIONS(540), 1,
      sym_attribute_name,
    ACTIONS(542), 1,
      anon_sym_GT,
    ACTIONS(544), 1,
      anon_sym_SLASH_GT,
    STATE(134), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [5992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(44), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [6012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(138), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(149), 6,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_GT,
    ACTIONS(536), 1,
      anon_sym_th_COLON,
    ACTIONS(540), 1,
      sym_attribute_name,
    ACTIONS(549), 1,
      anon_sym_SLASH_GT,
    STATE(136), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(46), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [6072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_th_COLON,
    ACTIONS(540), 1,
      sym_attribute_name,
    ACTIONS(542), 1,
      anon_sym_GT,
    ACTIONS(551), 1,
      anon_sym_SLASH_GT,
    STATE(134), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(40), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
  [6114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_GT,
    ACTIONS(555), 1,
      anon_sym_th_COLON,
    ACTIONS(557), 1,
      sym_attribute_name,
    STATE(145), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_th_COLON,
    ACTIONS(557), 1,
      sym_attribute_name,
    ACTIONS(559), 1,
      anon_sym_GT,
    STATE(145), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_GT,
    ACTIONS(561), 1,
      anon_sym_th_COLON,
    ACTIONS(564), 1,
      sym_attribute_name,
    STATE(145), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_th_COLON,
    ACTIONS(557), 1,
      sym_attribute_name,
    ACTIONS(567), 1,
      anon_sym_GT,
    STATE(143), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_th_COLON,
    ACTIONS(557), 1,
      sym_attribute_name,
    ACTIONS(569), 1,
      anon_sym_GT,
    STATE(144), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [6209] = 3,
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
  [6223] = 3,
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
  [6237] = 3,
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
  [6251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LT,
    ACTIONS(583), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6265] = 3,
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
  [6279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(587), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LT,
    ACTIONS(591), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LT,
    ACTIONS(595), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LT,
    ACTIONS(599), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LT,
    ACTIONS(591), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LT,
    ACTIONS(599), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(603), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(607), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LT,
    ACTIONS(611), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LT,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LT,
    ACTIONS(611), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(587), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6447] = 3,
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
  [6461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(603), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LT,
    ACTIONS(579), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(615), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LT,
    ACTIONS(619), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LT,
    ACTIONS(619), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(615), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_LT,
    ACTIONS(623), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(607), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [6573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_EQ,
    ACTIONS(627), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(633), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [6600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(639), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [6624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(41), 1,
      sym_ognl_object_literal,
    STATE(45), 1,
      sym_ognl_method_literal,
    STATE(227), 1,
      sym_ognl_method_name,
  [6640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(645), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [6654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(649), 1,
      sym_attribute_value,
    ACTIONS(651), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_quoted_attribute_value,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(657), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(41), 1,
      sym_ognl_object_literal,
    STATE(45), 1,
      sym_ognl_method_literal,
    STATE(220), 1,
      sym_ognl_method_name,
  [6720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [6730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(639), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [6744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      sym_attribute_value,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_quoted_attribute_value,
  [6760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_EQ,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_ognl_method_args_repeat1,
  [6794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LT_SLASH,
    ACTIONS(682), 1,
      sym_raw_text,
    STATE(169), 1,
      sym_end_tag,
  [6807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      aux_sym_message_name_token1,
    STATE(219), 1,
      sym_message_name,
    STATE(260), 1,
      sym_message_std_expression,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_message_std_expression_repeat1,
  [6842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [6860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__start_tag_name,
    ACTIONS(691), 1,
      sym__script_start_tag_name,
    ACTIONS(693), 1,
      sym__style_start_tag_name,
  [6873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      aux_sym_message_name_token1,
    STATE(219), 1,
      sym_message_name,
    STATE(264), 1,
      sym_message_std_expression,
  [6886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_ognl_method_args_repeat1,
  [6899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_message_std_expression_repeat1,
  [6912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LT_SLASH,
    ACTIONS(704), 1,
      sym_raw_text,
    STATE(170), 1,
      sym_end_tag,
  [6925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_ognl_method_args_repeat1,
  [6938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym__script_start_tag_name,
    ACTIONS(693), 1,
      sym__style_start_tag_name,
    ACTIONS(708), 1,
      sym__start_tag_name,
  [6951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_DOT,
    ACTIONS(712), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [6962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LT_SLASH,
    ACTIONS(714), 1,
      sym_raw_text,
    STATE(168), 1,
      sym_end_tag,
  [6975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LT_SLASH,
    ACTIONS(716), 1,
      sym_raw_text,
    STATE(171), 1,
      sym_end_tag,
  [6988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LT_SLASH,
    STATE(151), 1,
      sym_end_tag,
  [6998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LT_SLASH,
    STATE(152), 1,
      sym_end_tag,
  [7008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
    ACTIONS(720), 1,
      aux_sym_quoted_attribute_value_token2,
  [7018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      aux_sym_quoted_attribute_value_token1,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(234), 1,
      sym_ognl_th_std_expression,
  [7046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_url_std_expression_token1,
    STATE(235), 1,
      sym_url_std_expression,
  [7056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__end_tag_name,
    ACTIONS(728), 1,
      sym_erroneous_end_tag_name,
  [7066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(256), 1,
      sym_ognl_th_std_expression,
  [7076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(730), 1,
      sym__end_tag_name,
  [7086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_url_std_expression_token1,
    STATE(274), 1,
      sym_url_std_expression,
  [7096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LT_SLASH,
    STATE(162), 1,
      sym_end_tag,
  [7106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
  [7116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_ognl_method_args,
  [7126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_object_creation_expression_token1,
    STATE(231), 1,
      aux_sym_ognl_java_class_repeat1,
  [7136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LT_SLASH,
    STATE(149), 1,
      sym_end_tag,
  [7146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    ACTIONS(740), 1,
      aux_sym_quoted_attribute_value_token1,
  [7156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [7164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [7172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym_quoted_attribute_value_token2,
  [7182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_ognl_method_args,
  [7192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym_object_creation_expression_token1,
    STATE(228), 1,
      aux_sym_ognl_java_class_repeat1,
  [7202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [7210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [7218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_object_creation_expression_token1,
    STATE(228), 1,
      aux_sym_ognl_java_class_repeat1,
  [7228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [7236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      aux_sym_url_std_expression_token1,
    STATE(271), 1,
      sym_url_std_expression,
  [7246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
  [7260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_object_creation_expression_token1,
  [7267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [7274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_EQ,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_SQUOTE,
  [7288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
  [7302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_EQ,
  [7309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
  [7316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym__doctype,
  [7323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_GT,
  [7330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_GT,
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_message_name_token1,
  [7351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_GT,
  [7358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_number_literal_token1,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_GT,
  [7372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
  [7386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SQUOTE,
  [7393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_GT,
  [7400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
  [7407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym_object_creation_expression_token1,
  [7414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_number_literal_token1,
  [7421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_object_creation_expression_token1,
  [7428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
  [7435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
  [7442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      aux_sym_token_literal_token2,
  [7449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_erroneous_end_tag_name,
  [7456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
  [7463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [7477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_erroneous_end_tag_name,
  [7484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_doctype_token1,
  [7491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__end_tag_name,
  [7498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__end_tag_name,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
  [7512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
  [7519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
  [7526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
  [7533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_GT,
  [7540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
  [7547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_object_creation_expression_token1,
  [7554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [7561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym__doctype,
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_EQ,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
  [7596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym_doctype_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 407,
  [SMALL_STATE(9)] = 479,
  [SMALL_STATE(10)] = 527,
  [SMALL_STATE(11)] = 599,
  [SMALL_STATE(12)] = 671,
  [SMALL_STATE(13)] = 743,
  [SMALL_STATE(14)] = 791,
  [SMALL_STATE(15)] = 863,
  [SMALL_STATE(16)] = 935,
  [SMALL_STATE(17)] = 1007,
  [SMALL_STATE(18)] = 1079,
  [SMALL_STATE(19)] = 1151,
  [SMALL_STATE(20)] = 1223,
  [SMALL_STATE(21)] = 1263,
  [SMALL_STATE(22)] = 1337,
  [SMALL_STATE(23)] = 1377,
  [SMALL_STATE(24)] = 1423,
  [SMALL_STATE(25)] = 1471,
  [SMALL_STATE(26)] = 1525,
  [SMALL_STATE(27)] = 1583,
  [SMALL_STATE(28)] = 1633,
  [SMALL_STATE(29)] = 1705,
  [SMALL_STATE(30)] = 1775,
  [SMALL_STATE(31)] = 1843,
  [SMALL_STATE(32)] = 1905,
  [SMALL_STATE(33)] = 1949,
  [SMALL_STATE(34)] = 1989,
  [SMALL_STATE(35)] = 2063,
  [SMALL_STATE(36)] = 2109,
  [SMALL_STATE(37)] = 2183,
  [SMALL_STATE(38)] = 2229,
  [SMALL_STATE(39)] = 2303,
  [SMALL_STATE(40)] = 2346,
  [SMALL_STATE(41)] = 2384,
  [SMALL_STATE(42)] = 2422,
  [SMALL_STATE(43)] = 2460,
  [SMALL_STATE(44)] = 2498,
  [SMALL_STATE(45)] = 2536,
  [SMALL_STATE(46)] = 2574,
  [SMALL_STATE(47)] = 2612,
  [SMALL_STATE(48)] = 2659,
  [SMALL_STATE(49)] = 2696,
  [SMALL_STATE(50)] = 2739,
  [SMALL_STATE(51)] = 2798,
  [SMALL_STATE(52)] = 2841,
  [SMALL_STATE(53)] = 2898,
  [SMALL_STATE(54)] = 2953,
  [SMALL_STATE(55)] = 3004,
  [SMALL_STATE(56)] = 3041,
  [SMALL_STATE(57)] = 3104,
  [SMALL_STATE(58)] = 3141,
  [SMALL_STATE(59)] = 3207,
  [SMALL_STATE(60)] = 3268,
  [SMALL_STATE(61)] = 3305,
  [SMALL_STATE(62)] = 3346,
  [SMALL_STATE(63)] = 3387,
  [SMALL_STATE(64)] = 3424,
  [SMALL_STATE(65)] = 3461,
  [SMALL_STATE(66)] = 3495,
  [SMALL_STATE(67)] = 3529,
  [SMALL_STATE(68)] = 3589,
  [SMALL_STATE(69)] = 3649,
  [SMALL_STATE(70)] = 3685,
  [SMALL_STATE(71)] = 3719,
  [SMALL_STATE(72)] = 3779,
  [SMALL_STATE(73)] = 3813,
  [SMALL_STATE(74)] = 3847,
  [SMALL_STATE(75)] = 3881,
  [SMALL_STATE(76)] = 3915,
  [SMALL_STATE(77)] = 3948,
  [SMALL_STATE(78)] = 3981,
  [SMALL_STATE(79)] = 4014,
  [SMALL_STATE(80)] = 4047,
  [SMALL_STATE(81)] = 4079,
  [SMALL_STATE(82)] = 4111,
  [SMALL_STATE(83)] = 4143,
  [SMALL_STATE(84)] = 4193,
  [SMALL_STATE(85)] = 4243,
  [SMALL_STATE(86)] = 4293,
  [SMALL_STATE(87)] = 4343,
  [SMALL_STATE(88)] = 4393,
  [SMALL_STATE(89)] = 4425,
  [SMALL_STATE(90)] = 4475,
  [SMALL_STATE(91)] = 4507,
  [SMALL_STATE(92)] = 4539,
  [SMALL_STATE(93)] = 4589,
  [SMALL_STATE(94)] = 4639,
  [SMALL_STATE(95)] = 4689,
  [SMALL_STATE(96)] = 4721,
  [SMALL_STATE(97)] = 4771,
  [SMALL_STATE(98)] = 4821,
  [SMALL_STATE(99)] = 4853,
  [SMALL_STATE(100)] = 4903,
  [SMALL_STATE(101)] = 4947,
  [SMALL_STATE(102)] = 4988,
  [SMALL_STATE(103)] = 5029,
  [SMALL_STATE(104)] = 5070,
  [SMALL_STATE(105)] = 5111,
  [SMALL_STATE(106)] = 5155,
  [SMALL_STATE(107)] = 5199,
  [SMALL_STATE(108)] = 5243,
  [SMALL_STATE(109)] = 5287,
  [SMALL_STATE(110)] = 5328,
  [SMALL_STATE(111)] = 5369,
  [SMALL_STATE(112)] = 5394,
  [SMALL_STATE(113)] = 5419,
  [SMALL_STATE(114)] = 5444,
  [SMALL_STATE(115)] = 5469,
  [SMALL_STATE(116)] = 5494,
  [SMALL_STATE(117)] = 5535,
  [SMALL_STATE(118)] = 5570,
  [SMALL_STATE(119)] = 5605,
  [SMALL_STATE(120)] = 5640,
  [SMALL_STATE(121)] = 5665,
  [SMALL_STATE(122)] = 5690,
  [SMALL_STATE(123)] = 5719,
  [SMALL_STATE(124)] = 5748,
  [SMALL_STATE(125)] = 5766,
  [SMALL_STATE(126)] = 5784,
  [SMALL_STATE(127)] = 5802,
  [SMALL_STATE(128)] = 5820,
  [SMALL_STATE(129)] = 5838,
  [SMALL_STATE(130)] = 5856,
  [SMALL_STATE(131)] = 5874,
  [SMALL_STATE(132)] = 5892,
  [SMALL_STATE(133)] = 5910,
  [SMALL_STATE(134)] = 5928,
  [SMALL_STATE(135)] = 5948,
  [SMALL_STATE(136)] = 5970,
  [SMALL_STATE(137)] = 5992,
  [SMALL_STATE(138)] = 6012,
  [SMALL_STATE(139)] = 6030,
  [SMALL_STATE(140)] = 6052,
  [SMALL_STATE(141)] = 6072,
  [SMALL_STATE(142)] = 6094,
  [SMALL_STATE(143)] = 6114,
  [SMALL_STATE(144)] = 6133,
  [SMALL_STATE(145)] = 6152,
  [SMALL_STATE(146)] = 6171,
  [SMALL_STATE(147)] = 6190,
  [SMALL_STATE(148)] = 6209,
  [SMALL_STATE(149)] = 6223,
  [SMALL_STATE(150)] = 6237,
  [SMALL_STATE(151)] = 6251,
  [SMALL_STATE(152)] = 6265,
  [SMALL_STATE(153)] = 6279,
  [SMALL_STATE(154)] = 6293,
  [SMALL_STATE(155)] = 6307,
  [SMALL_STATE(156)] = 6321,
  [SMALL_STATE(157)] = 6335,
  [SMALL_STATE(158)] = 6349,
  [SMALL_STATE(159)] = 6363,
  [SMALL_STATE(160)] = 6377,
  [SMALL_STATE(161)] = 6391,
  [SMALL_STATE(162)] = 6405,
  [SMALL_STATE(163)] = 6419,
  [SMALL_STATE(164)] = 6433,
  [SMALL_STATE(165)] = 6447,
  [SMALL_STATE(166)] = 6461,
  [SMALL_STATE(167)] = 6475,
  [SMALL_STATE(168)] = 6489,
  [SMALL_STATE(169)] = 6503,
  [SMALL_STATE(170)] = 6517,
  [SMALL_STATE(171)] = 6531,
  [SMALL_STATE(172)] = 6545,
  [SMALL_STATE(173)] = 6559,
  [SMALL_STATE(174)] = 6573,
  [SMALL_STATE(175)] = 6586,
  [SMALL_STATE(176)] = 6600,
  [SMALL_STATE(177)] = 6610,
  [SMALL_STATE(178)] = 6624,
  [SMALL_STATE(179)] = 6640,
  [SMALL_STATE(180)] = 6654,
  [SMALL_STATE(181)] = 6670,
  [SMALL_STATE(182)] = 6680,
  [SMALL_STATE(183)] = 6694,
  [SMALL_STATE(184)] = 6704,
  [SMALL_STATE(185)] = 6720,
  [SMALL_STATE(186)] = 6730,
  [SMALL_STATE(187)] = 6744,
  [SMALL_STATE(188)] = 6760,
  [SMALL_STATE(189)] = 6772,
  [SMALL_STATE(190)] = 6781,
  [SMALL_STATE(191)] = 6794,
  [SMALL_STATE(192)] = 6807,
  [SMALL_STATE(193)] = 6820,
  [SMALL_STATE(194)] = 6829,
  [SMALL_STATE(195)] = 6842,
  [SMALL_STATE(196)] = 6851,
  [SMALL_STATE(197)] = 6860,
  [SMALL_STATE(198)] = 6873,
  [SMALL_STATE(199)] = 6886,
  [SMALL_STATE(200)] = 6899,
  [SMALL_STATE(201)] = 6912,
  [SMALL_STATE(202)] = 6925,
  [SMALL_STATE(203)] = 6938,
  [SMALL_STATE(204)] = 6951,
  [SMALL_STATE(205)] = 6962,
  [SMALL_STATE(206)] = 6975,
  [SMALL_STATE(207)] = 6988,
  [SMALL_STATE(208)] = 6998,
  [SMALL_STATE(209)] = 7008,
  [SMALL_STATE(210)] = 7018,
  [SMALL_STATE(211)] = 7028,
  [SMALL_STATE(212)] = 7036,
  [SMALL_STATE(213)] = 7046,
  [SMALL_STATE(214)] = 7056,
  [SMALL_STATE(215)] = 7066,
  [SMALL_STATE(216)] = 7076,
  [SMALL_STATE(217)] = 7086,
  [SMALL_STATE(218)] = 7096,
  [SMALL_STATE(219)] = 7106,
  [SMALL_STATE(220)] = 7116,
  [SMALL_STATE(221)] = 7126,
  [SMALL_STATE(222)] = 7136,
  [SMALL_STATE(223)] = 7146,
  [SMALL_STATE(224)] = 7156,
  [SMALL_STATE(225)] = 7164,
  [SMALL_STATE(226)] = 7172,
  [SMALL_STATE(227)] = 7182,
  [SMALL_STATE(228)] = 7192,
  [SMALL_STATE(229)] = 7202,
  [SMALL_STATE(230)] = 7210,
  [SMALL_STATE(231)] = 7218,
  [SMALL_STATE(232)] = 7228,
  [SMALL_STATE(233)] = 7236,
  [SMALL_STATE(234)] = 7246,
  [SMALL_STATE(235)] = 7253,
  [SMALL_STATE(236)] = 7260,
  [SMALL_STATE(237)] = 7267,
  [SMALL_STATE(238)] = 7274,
  [SMALL_STATE(239)] = 7281,
  [SMALL_STATE(240)] = 7288,
  [SMALL_STATE(241)] = 7295,
  [SMALL_STATE(242)] = 7302,
  [SMALL_STATE(243)] = 7309,
  [SMALL_STATE(244)] = 7316,
  [SMALL_STATE(245)] = 7323,
  [SMALL_STATE(246)] = 7330,
  [SMALL_STATE(247)] = 7337,
  [SMALL_STATE(248)] = 7344,
  [SMALL_STATE(249)] = 7351,
  [SMALL_STATE(250)] = 7358,
  [SMALL_STATE(251)] = 7365,
  [SMALL_STATE(252)] = 7372,
  [SMALL_STATE(253)] = 7379,
  [SMALL_STATE(254)] = 7386,
  [SMALL_STATE(255)] = 7393,
  [SMALL_STATE(256)] = 7400,
  [SMALL_STATE(257)] = 7407,
  [SMALL_STATE(258)] = 7414,
  [SMALL_STATE(259)] = 7421,
  [SMALL_STATE(260)] = 7428,
  [SMALL_STATE(261)] = 7435,
  [SMALL_STATE(262)] = 7442,
  [SMALL_STATE(263)] = 7449,
  [SMALL_STATE(264)] = 7456,
  [SMALL_STATE(265)] = 7463,
  [SMALL_STATE(266)] = 7470,
  [SMALL_STATE(267)] = 7477,
  [SMALL_STATE(268)] = 7484,
  [SMALL_STATE(269)] = 7491,
  [SMALL_STATE(270)] = 7498,
  [SMALL_STATE(271)] = 7505,
  [SMALL_STATE(272)] = 7512,
  [SMALL_STATE(273)] = 7519,
  [SMALL_STATE(274)] = 7526,
  [SMALL_STATE(275)] = 7533,
  [SMALL_STATE(276)] = 7540,
  [SMALL_STATE(277)] = 7547,
  [SMALL_STATE(278)] = 7554,
  [SMALL_STATE(279)] = 7561,
  [SMALL_STATE(280)] = 7568,
  [SMALL_STATE(281)] = 7575,
  [SMALL_STATE(282)] = 7582,
  [SMALL_STATE(283)] = 7589,
  [SMALL_STATE(284)] = 7596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 3, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 3, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_ognl_expression, 3, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_ognl_expression, 3, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(32),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_args, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_variable, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_variable, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_field, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_field, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 4, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 4, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_property_access, 2, .production_id = 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 2, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_object_literal, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_variable, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_variable, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_access, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_access, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_class, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_java_method, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_method, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 10),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_std_expression_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ognl_literal, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ognl_literal, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(262),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(62),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_assignement_expression, 3, .production_id = 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_assignement_expression, 3, .production_id = 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_creation_expression, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_creation_expression, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(244),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(197),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(263),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(279),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(267),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(213),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(192),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(85),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(84),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_not, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_not, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(121),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(174),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(138),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(120),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(188),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(182),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_std_expression_repeat1, 2), SHIFT_REPEAT(7),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2), SHIFT_REPEAT(101),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1, .production_id = 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2), SHIFT_REPEAT(273),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 3, .production_id = 6),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [809] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 4, .production_id = 9),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 5, .production_id = 11),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
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
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
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
