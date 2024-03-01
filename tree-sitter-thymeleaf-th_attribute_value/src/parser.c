#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  sym_ognl_new = 72,
  sym_ognl_instanceof = 73,
  anon_sym_AT = 74,
  aux_sym_ognl_java_class_token1 = 75,
  aux_sym_ognl_object_literal_token1 = 76,
  aux_sym_ognl_object_literal_token2 = 77,
  anon_sym_LBRACK = 78,
  anon_sym_RBRACK = 79,
  anon_sym_COMMA = 80,
  sym__start_tag_name = 81,
  sym__script_start_tag_name = 82,
  sym__style_start_tag_name = 83,
  sym__end_tag_name = 84,
  sym_erroneous_end_tag_name = 85,
  sym__implicit_end_tag = 86,
  sym_raw_text = 87,
  sym_comment = 88,
  sym_document = 89,
  sym_doctype = 90,
  sym__node = 91,
  sym_element = 92,
  sym_script_element = 93,
  sym_style_element = 94,
  sym_start_tag = 95,
  sym__attributes = 96,
  sym_th_attribute = 97,
  sym_th_attribute_value = 98,
  sym_script_start_tag = 99,
  sym_style_start_tag = 100,
  sym_self_closing_tag = 101,
  sym_end_tag = 102,
  sym_erroneous_end_tag = 103,
  sym_attribute = 104,
  sym__th_generic = 105,
  sym__th_ognl_only = 106,
  sym_quoted_attribute_value = 107,
  sym__literal = 108,
  sym_number_literal = 109,
  sym_token_literal = 110,
  sym_string_literal = 111,
  sym_interpolated_string_literal = 112,
  sym__interpreted_string_literal = 113,
  sym_greater_than = 114,
  sym_lesser_than = 115,
  sym_add = 116,
  sym_substract = 117,
  sym_multiply = 118,
  sym__th_std_expression = 119,
  sym_fragment_th_std_expression = 120,
  sym_url_th_std_expression = 121,
  sym_message_th_std_expression = 122,
  sym_varselect_th_std_expression = 123,
  sym_ognl_th_std_expression = 124,
  sym_url_std_expression = 125,
  sym_message_std_expression = 126,
  sym_ternary_th_std_expression = 127,
  sym_unary_th_std_expression = 128,
  sym_parenthesized_th_std_expression = 129,
  sym_binary_th_std_expression = 130,
  sym__ognl_std_expression = 131,
  sym__ognl_literal = 132,
  sym__ognl_post_accessor = 133,
  sym_ognl_java_class = 134,
  sym__ognl_post_java_class = 135,
  sym_ognl_java_method = 136,
  sym_ognl_java_field = 137,
  sym_ognl_object_literal = 138,
  sym_ognl_property_access = 139,
  sym_ognl_method_access = 140,
  sym_ognl_method_literal = 141,
  sym_ognl_method_name = 142,
  sym_ognl_method_args = 143,
  aux_sym_document_repeat1 = 144,
  aux_sym_start_tag_repeat1 = 145,
  aux_sym_token_literal_repeat1 = 146,
  aux_sym_interpolated_string_literal_repeat1 = 147,
  aux_sym__interpreted_string_literal_repeat1 = 148,
  aux_sym_ognl_java_class_repeat1 = 149,
  aux_sym_ognl_object_literal_repeat1 = 150,
  aux_sym_ognl_method_args_repeat1 = 151,
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
  [sym_ognl_new] = "ognl_new",
  [sym_ognl_instanceof] = "ognl_instanceof",
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
  [sym_ognl_new] = sym_ognl_new,
  [sym_ognl_instanceof] = sym_ognl_instanceof,
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
  [sym_ognl_new] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_instanceof] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 41,
  [49] = 44,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 66,
  [67] = 40,
  [68] = 38,
  [69] = 33,
  [70] = 34,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 87,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 86,
  [100] = 91,
  [101] = 95,
  [102] = 88,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 98,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 96,
  [111] = 90,
  [112] = 97,
  [113] = 93,
  [114] = 94,
  [115] = 92,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 124,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 121,
  [138] = 127,
  [139] = 133,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 147,
  [148] = 141,
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 150,
  [158] = 154,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 152,
  [164] = 164,
  [165] = 161,
  [166] = 166,
  [167] = 167,
  [168] = 166,
  [169] = 169,
  [170] = 155,
  [171] = 167,
  [172] = 172,
  [173] = 160,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 176,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 182,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 185,
  [199] = 199,
  [200] = 190,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 187,
  [208] = 192,
  [209] = 184,
  [210] = 210,
  [211] = 202,
  [212] = 203,
  [213] = 213,
  [214] = 214,
  [215] = 206,
  [216] = 199,
  [217] = 205,
  [218] = 210,
  [219] = 183,
  [220] = 186,
  [221] = 204,
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
      if (eof) ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '@') ADVANCE(245);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '~') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '~') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '@') ADVANCE(244);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '@') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 't') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(199);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '~') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '}') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(162);
      if (lookahead == '"') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 33:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 34:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 43:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(164);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(271);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '@') ADVANCE(245);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '~') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '>') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ognl_new);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ognl_instanceof);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_ognl_java_class_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'c') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'f') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'n') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'o') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'r') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 't') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'w') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 47, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 2},
  [3] = {.lex_state = 19, .external_lex_state = 2},
  [4] = {.lex_state = 19, .external_lex_state = 2},
  [5] = {.lex_state = 19, .external_lex_state = 2},
  [6] = {.lex_state = 19, .external_lex_state = 2},
  [7] = {.lex_state = 19, .external_lex_state = 2},
  [8] = {.lex_state = 19, .external_lex_state = 2},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 20, .external_lex_state = 2},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 20, .external_lex_state = 2},
  [18] = {.lex_state = 20, .external_lex_state = 2},
  [19] = {.lex_state = 20, .external_lex_state = 2},
  [20] = {.lex_state = 20, .external_lex_state = 2},
  [21] = {.lex_state = 20, .external_lex_state = 2},
  [22] = {.lex_state = 20, .external_lex_state = 2},
  [23] = {.lex_state = 20, .external_lex_state = 2},
  [24] = {.lex_state = 20, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 2},
  [26] = {.lex_state = 20, .external_lex_state = 2},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 20, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 2},
  [32] = {.lex_state = 21, .external_lex_state = 2},
  [33] = {.lex_state = 20, .external_lex_state = 2},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 2},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 2},
  [38] = {.lex_state = 20, .external_lex_state = 2},
  [39] = {.lex_state = 20, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 2},
  [41] = {.lex_state = 47, .external_lex_state = 3},
  [42] = {.lex_state = 22, .external_lex_state = 2},
  [43] = {.lex_state = 22, .external_lex_state = 2},
  [44] = {.lex_state = 22, .external_lex_state = 2},
  [45] = {.lex_state = 47, .external_lex_state = 3},
  [46] = {.lex_state = 47, .external_lex_state = 3},
  [47] = {.lex_state = 22, .external_lex_state = 2},
  [48] = {.lex_state = 47, .external_lex_state = 3},
  [49] = {.lex_state = 22, .external_lex_state = 2},
  [50] = {.lex_state = 22, .external_lex_state = 2},
  [51] = {.lex_state = 47, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 47, .external_lex_state = 2},
  [54] = {.lex_state = 47, .external_lex_state = 3},
  [55] = {.lex_state = 22, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 23, .external_lex_state = 2},
  [62] = {.lex_state = 23, .external_lex_state = 2},
  [63] = {.lex_state = 24, .external_lex_state = 2},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 25, .external_lex_state = 2},
  [66] = {.lex_state = 25, .external_lex_state = 2},
  [67] = {.lex_state = 23, .external_lex_state = 2},
  [68] = {.lex_state = 23, .external_lex_state = 2},
  [69] = {.lex_state = 23, .external_lex_state = 2},
  [70] = {.lex_state = 23, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 20, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 20, .external_lex_state = 2},
  [75] = {.lex_state = 25, .external_lex_state = 2},
  [76] = {.lex_state = 26, .external_lex_state = 4},
  [77] = {.lex_state = 26, .external_lex_state = 4},
  [78] = {.lex_state = 26, .external_lex_state = 4},
  [79] = {.lex_state = 26, .external_lex_state = 4},
  [80] = {.lex_state = 26, .external_lex_state = 4},
  [81] = {.lex_state = 26, .external_lex_state = 2},
  [82] = {.lex_state = 26, .external_lex_state = 2},
  [83] = {.lex_state = 26, .external_lex_state = 2},
  [84] = {.lex_state = 26, .external_lex_state = 2},
  [85] = {.lex_state = 26, .external_lex_state = 2},
  [86] = {.lex_state = 47, .external_lex_state = 3},
  [87] = {.lex_state = 47, .external_lex_state = 3},
  [88] = {.lex_state = 47, .external_lex_state = 2},
  [89] = {.lex_state = 47, .external_lex_state = 2},
  [90] = {.lex_state = 47, .external_lex_state = 3},
  [91] = {.lex_state = 47, .external_lex_state = 2},
  [92] = {.lex_state = 47, .external_lex_state = 3},
  [93] = {.lex_state = 47, .external_lex_state = 3},
  [94] = {.lex_state = 47, .external_lex_state = 3},
  [95] = {.lex_state = 47, .external_lex_state = 3},
  [96] = {.lex_state = 47, .external_lex_state = 3},
  [97] = {.lex_state = 47, .external_lex_state = 3},
  [98] = {.lex_state = 47, .external_lex_state = 3},
  [99] = {.lex_state = 47, .external_lex_state = 2},
  [100] = {.lex_state = 47, .external_lex_state = 3},
  [101] = {.lex_state = 47, .external_lex_state = 2},
  [102] = {.lex_state = 47, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 47, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 47, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 47, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 47, .external_lex_state = 2},
  [111] = {.lex_state = 47, .external_lex_state = 2},
  [112] = {.lex_state = 47, .external_lex_state = 2},
  [113] = {.lex_state = 47, .external_lex_state = 2},
  [114] = {.lex_state = 47, .external_lex_state = 2},
  [115] = {.lex_state = 47, .external_lex_state = 2},
  [116] = {.lex_state = 26, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 27, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 26, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 26, .external_lex_state = 2},
  [124] = {.lex_state = 28, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 29, .external_lex_state = 2},
  [127] = {.lex_state = 26, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 27, .external_lex_state = 2},
  [130] = {.lex_state = 28, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 26, .external_lex_state = 4},
  [134] = {.lex_state = 26, .external_lex_state = 4},
  [135] = {.lex_state = 27, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 26, .external_lex_state = 2},
  [138] = {.lex_state = 26, .external_lex_state = 2},
  [139] = {.lex_state = 26, .external_lex_state = 2},
  [140] = {.lex_state = 26, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 6},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 6},
  [150] = {.lex_state = 30, .external_lex_state = 2},
  [151] = {.lex_state = 35, .external_lex_state = 2},
  [152] = {.lex_state = 31, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 30, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 30, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 35, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 7},
  [161] = {.lex_state = 32, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 31, .external_lex_state = 2},
  [164] = {.lex_state = 35, .external_lex_state = 2},
  [165] = {.lex_state = 32, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 5},
  [170] = {.lex_state = 30, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 30, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 47, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 33, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 35, .external_lex_state = 2},
  [181] = {.lex_state = 35, .external_lex_state = 2},
  [182] = {.lex_state = 47, .external_lex_state = 2},
  [183] = {.lex_state = 19, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 8},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 19, .external_lex_state = 2},
  [187] = {.lex_state = 34, .external_lex_state = 2},
  [188] = {.lex_state = 47, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 19, .external_lex_state = 2},
  [192] = {.lex_state = 47, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 47, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 20, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 9},
  [207] = {.lex_state = 34, .external_lex_state = 2},
  [208] = {.lex_state = 47, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 8},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 9},
  [216] = {.lex_state = 20, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 19, .external_lex_state = 2},
  [220] = {.lex_state = 19, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
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
    [sym_document] = STATE(214),
    [sym_doctype] = STATE(51),
    [sym__node] = STATE(51),
    [sym_element] = STATE(51),
    [sym_script_element] = STATE(51),
    [sym_style_element] = STATE(51),
    [sym_start_tag] = STATE(46),
    [sym_script_start_tag] = STATE(148),
    [sym_style_start_tag] = STATE(146),
    [sym_self_closing_tag] = STATE(88),
    [sym_erroneous_end_tag] = STATE(51),
    [aux_sym_document_repeat1] = STATE(51),
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    STATE(200), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    STATE(190), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
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
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [150] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(43), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(20), 15,
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
  [222] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(45), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(17), 15,
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
  [294] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(47), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(16), 15,
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
  [366] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(49), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(14), 15,
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
  [438] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(51), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(27), 15,
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
  [510] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(21), 15,
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
  [582] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(55), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(19), 15,
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
  [654] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(57), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(15), 15,
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
  [726] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(59), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(18), 15,
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
  [798] = 18,
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
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(31), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(61), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(26), 15,
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
  [870] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(65), 16,
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
  [920] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(65), 18,
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
  [966] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(65), 10,
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
  [1020] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(65), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1076] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      sym_and,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(65), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(65), 21,
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
  [1176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(87), 21,
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
  [1218] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(89), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 24,
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
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 24,
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
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 24,
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
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_token_literal_token1,
    ACTIONS(116), 1,
      aux_sym_token_literal_token2,
    STATE(25), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(109), 11,
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
    ACTIONS(111), 12,
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
  [1425] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1485] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 24,
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
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 24,
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
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1613] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(73), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(11), 2,
      sym_add,
      sym_substract,
    ACTIONS(81), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(79), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1673] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(137), 1,
      aux_sym_token_literal_token2,
    STATE(25), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(133), 11,
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
    ACTIONS(135), 12,
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
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 12,
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
    ACTIONS(109), 13,
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
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 21,
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
  [1777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 21,
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
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 21,
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
  [1839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 21,
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
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 21,
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
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 21,
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
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 21,
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
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 21,
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
  [1994] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_LT_SLASH,
    ACTIONS(179), 1,
      sym__implicit_end_tag,
    STATE(45), 1,
      sym_start_tag,
    STATE(102), 1,
      sym_self_closing_tag,
    STATE(110), 1,
      sym_end_tag,
    STATE(141), 1,
      sym_script_start_tag,
    STATE(142), 1,
      sym_style_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(54), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2038] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(181), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(221), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2076] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(187), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(204), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(189), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(203), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2152] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(195), 1,
      sym__implicit_end_tag,
    STATE(45), 1,
      sym_start_tag,
    STATE(87), 1,
      sym_end_tag,
    STATE(102), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_script_start_tag,
    STATE(142), 1,
      sym_style_start_tag,
    ACTIONS(193), 2,
      sym_entity,
      sym_text,
    STATE(48), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_LT_SLASH,
    ACTIONS(199), 1,
      sym__implicit_end_tag,
    STATE(45), 1,
      sym_start_tag,
    STATE(89), 1,
      sym_end_tag,
    STATE(102), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_script_start_tag,
    STATE(142), 1,
      sym_style_start_tag,
    ACTIONS(197), 2,
      sym_entity,
      sym_text,
    STATE(41), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2240] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(201), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(145), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2280] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(205), 1,
      sym__implicit_end_tag,
    STATE(45), 1,
      sym_start_tag,
    STATE(96), 1,
      sym_end_tag,
    STATE(102), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_script_start_tag,
    STATE(142), 1,
      sym_style_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(54), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(207), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(212), 7,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2362] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(209), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(189), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2399] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_start_tag,
    STATE(88), 1,
      sym_self_closing_tag,
    STATE(146), 1,
      sym_style_start_tag,
    STATE(148), 1,
      sym_script_start_tag,
    ACTIONS(213), 2,
      sym_entity,
      sym_text,
    STATE(53), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(215), 11,
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
  [2465] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_LT_BANG,
    ACTIONS(224), 1,
      anon_sym_LT,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    STATE(46), 1,
      sym_start_tag,
    STATE(88), 1,
      sym_self_closing_tag,
    STATE(146), 1,
      sym_style_start_tag,
    STATE(148), 1,
      sym_script_start_tag,
    ACTIONS(230), 2,
      sym_entity,
      sym_text,
    STATE(53), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2506] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__implicit_end_tag,
    ACTIONS(233), 1,
      anon_sym_LT_BANG,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(239), 1,
      anon_sym_LT_SLASH,
    STATE(45), 1,
      sym_start_tag,
    STATE(102), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_script_start_tag,
    STATE(142), 1,
      sym_style_start_tag,
    ACTIONS(242), 2,
      sym_entity,
      sym_text,
    STATE(54), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2547] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(29), 1,
      sym__interpreted_string_literal,
    STATE(156), 1,
      sym_ognl_method_name,
    ACTIONS(245), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_ognl_new,
      sym_ognl_instanceof,
    STATE(162), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_java_class,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(247), 11,
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
  [2609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(251), 11,
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
  [2634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(255), 11,
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
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(259), 11,
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
  [2684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(271), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(274), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(277), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(60), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2719] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_PIPE,
    ACTIONS(287), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(289), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(293), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(60), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2754] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(293), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    ACTIONS(301), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(299), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(61), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym__th_generic,
    STATE(220), 1,
      sym__th_ognl_only,
    ACTIONS(305), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(303), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [2814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(183), 1,
      sym__th_generic,
    STATE(186), 1,
      sym__th_ognl_only,
    ACTIONS(309), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(307), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [2839] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      aux_sym_ognl_object_literal_token2,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(118), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(313), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2869] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(65), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(117), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(321), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(167), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(159), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(139), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(143), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(128), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(327), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_AT,
    STATE(136), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(331), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(125), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(335), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_AT,
    STATE(120), 3,
      sym__ognl_post_java_class,
      sym_ognl_java_method,
      sym_ognl_java_field,
    ACTIONS(337), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(75), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(339), 7,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_GT,
    ACTIONS(346), 1,
      anon_sym_th_COLON,
    ACTIONS(348), 1,
      anon_sym_SLASH_GT,
    ACTIONS(350), 1,
      sym_attribute_name,
    STATE(80), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_GT,
    ACTIONS(346), 1,
      anon_sym_th_COLON,
    ACTIONS(350), 1,
      sym_attribute_name,
    ACTIONS(352), 1,
      anon_sym_SLASH_GT,
    STATE(78), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_th_COLON,
    ACTIONS(350), 1,
      sym_attribute_name,
    ACTIONS(354), 1,
      anon_sym_GT,
    ACTIONS(356), 1,
      anon_sym_SLASH_GT,
    STATE(79), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_th_COLON,
    ACTIONS(363), 1,
      sym_attribute_name,
    ACTIONS(358), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(79), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_th_COLON,
    ACTIONS(350), 1,
      sym_attribute_name,
    ACTIONS(354), 1,
      anon_sym_GT,
    ACTIONS(366), 1,
      anon_sym_SLASH_GT,
    STATE(79), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_GT,
    ACTIONS(370), 1,
      anon_sym_th_COLON,
    ACTIONS(372), 1,
      sym_attribute_name,
    STATE(84), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_th_COLON,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(374), 1,
      anon_sym_GT,
    STATE(85), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_th_COLON,
    ACTIONS(379), 1,
      sym_attribute_name,
    STATE(83), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_th_COLON,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(382), 1,
      anon_sym_GT,
    STATE(83), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_th_COLON,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(384), 1,
      anon_sym_GT,
    STATE(83), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(386), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LT,
    ACTIONS(390), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(394), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LT,
    ACTIONS(390), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(398), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(402), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LT,
    ACTIONS(406), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(410), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(414), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LT,
    ACTIONS(418), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LT,
    ACTIONS(422), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(426), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(402), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LT,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(394), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LT,
    ACTIONS(436), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_ognl_method_args,
    ACTIONS(442), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LT,
    ACTIONS(446), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LT,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(398), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(410), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LT,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(452), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(460), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(452), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      sym_attribute_value,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym_quoted_attribute_value,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(131), 1,
      sym_ognl_method_literal,
    STATE(132), 1,
      sym_ognl_object_literal,
    STATE(156), 1,
      sym_ognl_method_name,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(487), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      sym_attribute_value,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym_quoted_attribute_value,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(505), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LT_SLASH,
    ACTIONS(509), 1,
      sym_raw_text,
    STATE(100), 1,
      sym_end_tag,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LT_SLASH,
    ACTIONS(511), 1,
      sym_raw_text,
    STATE(86), 1,
      sym_end_tag,
  [4000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_ognl_method_args_repeat1,
  [4013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_ognl_method_args_repeat1,
  [4026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_ognl_method_args_repeat1,
  [4039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LT_SLASH,
    ACTIONS(526), 1,
      sym_raw_text,
    STATE(99), 1,
      sym_end_tag,
  [4052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__start_tag_name,
    ACTIONS(530), 1,
      sym__script_start_tag_name,
    ACTIONS(532), 1,
      sym__style_start_tag_name,
  [4065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LT_SLASH,
    ACTIONS(534), 1,
      sym_raw_text,
    STATE(91), 1,
      sym_end_tag,
  [4078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__script_start_tag_name,
    ACTIONS(532), 1,
      sym__style_start_tag_name,
    ACTIONS(536), 1,
      sym__start_tag_name,
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_url_std_expression_token1,
    STATE(196), 1,
      sym_url_std_expression,
  [4101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_ognl_java_class_token1,
    STATE(151), 1,
      aux_sym_ognl_java_class_repeat1,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      aux_sym_quoted_attribute_value_token2,
  [4121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(190), 1,
      sym_ognl_th_std_expression,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym_url_std_expression_token1,
    STATE(202), 1,
      sym_message_std_expression,
  [4149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_ognl_method_args,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_url_std_expression_token1,
    STATE(201), 1,
      sym_url_std_expression,
  [4169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(200), 1,
      sym_ognl_th_std_expression,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_ognl_java_class_token1,
    STATE(164), 1,
      aux_sym_ognl_java_class_repeat1,
  [4189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__end_tag_name,
    ACTIONS(555), 1,
      sym_erroneous_end_tag_name,
  [4199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    ACTIONS(559), 1,
      aux_sym_quoted_attribute_value_token1,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_quoted_attribute_value_token2,
  [4227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_ognl_java_class_token1,
    STATE(151), 1,
      aux_sym_ognl_java_class_repeat1,
  [4237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    ACTIONS(565), 1,
      aux_sym_quoted_attribute_value_token1,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LT_SLASH,
    STATE(94), 1,
      sym_end_tag,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LT_SLASH,
    STATE(95), 1,
      sym_end_tag,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LT_SLASH,
    STATE(114), 1,
      sym_end_tag,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym_url_std_expression_token1,
    STATE(211), 1,
      sym_message_std_expression,
  [4295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LT_SLASH,
    STATE(101), 1,
      sym_end_tag,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_url_std_expression_token1,
    STATE(195), 1,
      sym_url_std_expression,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(569), 1,
      sym__end_tag_name,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_GT,
  [4348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
  [4355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      aux_sym_token_literal_token2,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_ognl_java_class_token1,
  [4376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_ognl_java_class_token1,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_EQ,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__end_tag_name,
  [4404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_DQUOTE,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      aux_sym_doctype_token1,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_GT,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_number_literal_token1,
  [4453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_GT,
  [4460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
  [4467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_GT,
  [4474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
  [4481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
  [4502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__doctype,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
  [4516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
  [4551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_erroneous_end_tag_name,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_doctype_token1,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_GT,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__end_tag_name,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_erroneous_end_tag_name,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym__doctype,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_EQ,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 366,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 510,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 654,
  [SMALL_STATE(12)] = 726,
  [SMALL_STATE(13)] = 798,
  [SMALL_STATE(14)] = 870,
  [SMALL_STATE(15)] = 920,
  [SMALL_STATE(16)] = 966,
  [SMALL_STATE(17)] = 1020,
  [SMALL_STATE(18)] = 1076,
  [SMALL_STATE(19)] = 1134,
  [SMALL_STATE(20)] = 1176,
  [SMALL_STATE(21)] = 1218,
  [SMALL_STATE(22)] = 1280,
  [SMALL_STATE(23)] = 1317,
  [SMALL_STATE(24)] = 1351,
  [SMALL_STATE(25)] = 1385,
  [SMALL_STATE(26)] = 1425,
  [SMALL_STATE(27)] = 1485,
  [SMALL_STATE(28)] = 1545,
  [SMALL_STATE(29)] = 1579,
  [SMALL_STATE(30)] = 1613,
  [SMALL_STATE(31)] = 1673,
  [SMALL_STATE(32)] = 1713,
  [SMALL_STATE(33)] = 1746,
  [SMALL_STATE(34)] = 1777,
  [SMALL_STATE(35)] = 1808,
  [SMALL_STATE(36)] = 1839,
  [SMALL_STATE(37)] = 1870,
  [SMALL_STATE(38)] = 1901,
  [SMALL_STATE(39)] = 1932,
  [SMALL_STATE(40)] = 1963,
  [SMALL_STATE(41)] = 1994,
  [SMALL_STATE(42)] = 2038,
  [SMALL_STATE(43)] = 2076,
  [SMALL_STATE(44)] = 2114,
  [SMALL_STATE(45)] = 2152,
  [SMALL_STATE(46)] = 2196,
  [SMALL_STATE(47)] = 2240,
  [SMALL_STATE(48)] = 2280,
  [SMALL_STATE(49)] = 2324,
  [SMALL_STATE(50)] = 2362,
  [SMALL_STATE(51)] = 2399,
  [SMALL_STATE(52)] = 2440,
  [SMALL_STATE(53)] = 2465,
  [SMALL_STATE(54)] = 2506,
  [SMALL_STATE(55)] = 2547,
  [SMALL_STATE(56)] = 2584,
  [SMALL_STATE(57)] = 2609,
  [SMALL_STATE(58)] = 2634,
  [SMALL_STATE(59)] = 2659,
  [SMALL_STATE(60)] = 2684,
  [SMALL_STATE(61)] = 2719,
  [SMALL_STATE(62)] = 2754,
  [SMALL_STATE(63)] = 2789,
  [SMALL_STATE(64)] = 2814,
  [SMALL_STATE(65)] = 2839,
  [SMALL_STATE(66)] = 2869,
  [SMALL_STATE(67)] = 2899,
  [SMALL_STATE(68)] = 2917,
  [SMALL_STATE(69)] = 2935,
  [SMALL_STATE(70)] = 2953,
  [SMALL_STATE(71)] = 2971,
  [SMALL_STATE(72)] = 2992,
  [SMALL_STATE(73)] = 3013,
  [SMALL_STATE(74)] = 3034,
  [SMALL_STATE(75)] = 3055,
  [SMALL_STATE(76)] = 3074,
  [SMALL_STATE(77)] = 3096,
  [SMALL_STATE(78)] = 3118,
  [SMALL_STATE(79)] = 3140,
  [SMALL_STATE(80)] = 3160,
  [SMALL_STATE(81)] = 3182,
  [SMALL_STATE(82)] = 3201,
  [SMALL_STATE(83)] = 3220,
  [SMALL_STATE(84)] = 3239,
  [SMALL_STATE(85)] = 3258,
  [SMALL_STATE(86)] = 3277,
  [SMALL_STATE(87)] = 3291,
  [SMALL_STATE(88)] = 3305,
  [SMALL_STATE(89)] = 3319,
  [SMALL_STATE(90)] = 3333,
  [SMALL_STATE(91)] = 3347,
  [SMALL_STATE(92)] = 3361,
  [SMALL_STATE(93)] = 3375,
  [SMALL_STATE(94)] = 3389,
  [SMALL_STATE(95)] = 3403,
  [SMALL_STATE(96)] = 3417,
  [SMALL_STATE(97)] = 3431,
  [SMALL_STATE(98)] = 3445,
  [SMALL_STATE(99)] = 3459,
  [SMALL_STATE(100)] = 3473,
  [SMALL_STATE(101)] = 3487,
  [SMALL_STATE(102)] = 3501,
  [SMALL_STATE(103)] = 3515,
  [SMALL_STATE(104)] = 3527,
  [SMALL_STATE(105)] = 3541,
  [SMALL_STATE(106)] = 3553,
  [SMALL_STATE(107)] = 3567,
  [SMALL_STATE(108)] = 3583,
  [SMALL_STATE(109)] = 3597,
  [SMALL_STATE(110)] = 3609,
  [SMALL_STATE(111)] = 3623,
  [SMALL_STATE(112)] = 3637,
  [SMALL_STATE(113)] = 3651,
  [SMALL_STATE(114)] = 3665,
  [SMALL_STATE(115)] = 3679,
  [SMALL_STATE(116)] = 3693,
  [SMALL_STATE(117)] = 3706,
  [SMALL_STATE(118)] = 3716,
  [SMALL_STATE(119)] = 3726,
  [SMALL_STATE(120)] = 3740,
  [SMALL_STATE(121)] = 3750,
  [SMALL_STATE(122)] = 3760,
  [SMALL_STATE(123)] = 3770,
  [SMALL_STATE(124)] = 3782,
  [SMALL_STATE(125)] = 3798,
  [SMALL_STATE(126)] = 3808,
  [SMALL_STATE(127)] = 3824,
  [SMALL_STATE(128)] = 3834,
  [SMALL_STATE(129)] = 3844,
  [SMALL_STATE(130)] = 3858,
  [SMALL_STATE(131)] = 3874,
  [SMALL_STATE(132)] = 3884,
  [SMALL_STATE(133)] = 3894,
  [SMALL_STATE(134)] = 3904,
  [SMALL_STATE(135)] = 3914,
  [SMALL_STATE(136)] = 3928,
  [SMALL_STATE(137)] = 3938,
  [SMALL_STATE(138)] = 3947,
  [SMALL_STATE(139)] = 3956,
  [SMALL_STATE(140)] = 3965,
  [SMALL_STATE(141)] = 3974,
  [SMALL_STATE(142)] = 3987,
  [SMALL_STATE(143)] = 4000,
  [SMALL_STATE(144)] = 4013,
  [SMALL_STATE(145)] = 4026,
  [SMALL_STATE(146)] = 4039,
  [SMALL_STATE(147)] = 4052,
  [SMALL_STATE(148)] = 4065,
  [SMALL_STATE(149)] = 4078,
  [SMALL_STATE(150)] = 4091,
  [SMALL_STATE(151)] = 4101,
  [SMALL_STATE(152)] = 4111,
  [SMALL_STATE(153)] = 4121,
  [SMALL_STATE(154)] = 4129,
  [SMALL_STATE(155)] = 4139,
  [SMALL_STATE(156)] = 4149,
  [SMALL_STATE(157)] = 4159,
  [SMALL_STATE(158)] = 4169,
  [SMALL_STATE(159)] = 4179,
  [SMALL_STATE(160)] = 4189,
  [SMALL_STATE(161)] = 4199,
  [SMALL_STATE(162)] = 4209,
  [SMALL_STATE(163)] = 4217,
  [SMALL_STATE(164)] = 4227,
  [SMALL_STATE(165)] = 4237,
  [SMALL_STATE(166)] = 4247,
  [SMALL_STATE(167)] = 4257,
  [SMALL_STATE(168)] = 4267,
  [SMALL_STATE(169)] = 4277,
  [SMALL_STATE(170)] = 4285,
  [SMALL_STATE(171)] = 4295,
  [SMALL_STATE(172)] = 4305,
  [SMALL_STATE(173)] = 4315,
  [SMALL_STATE(174)] = 4325,
  [SMALL_STATE(175)] = 4333,
  [SMALL_STATE(176)] = 4341,
  [SMALL_STATE(177)] = 4348,
  [SMALL_STATE(178)] = 4355,
  [SMALL_STATE(179)] = 4362,
  [SMALL_STATE(180)] = 4369,
  [SMALL_STATE(181)] = 4376,
  [SMALL_STATE(182)] = 4383,
  [SMALL_STATE(183)] = 4390,
  [SMALL_STATE(184)] = 4397,
  [SMALL_STATE(185)] = 4404,
  [SMALL_STATE(186)] = 4411,
  [SMALL_STATE(187)] = 4418,
  [SMALL_STATE(188)] = 4425,
  [SMALL_STATE(189)] = 4432,
  [SMALL_STATE(190)] = 4439,
  [SMALL_STATE(191)] = 4446,
  [SMALL_STATE(192)] = 4453,
  [SMALL_STATE(193)] = 4460,
  [SMALL_STATE(194)] = 4467,
  [SMALL_STATE(195)] = 4474,
  [SMALL_STATE(196)] = 4481,
  [SMALL_STATE(197)] = 4488,
  [SMALL_STATE(198)] = 4495,
  [SMALL_STATE(199)] = 4502,
  [SMALL_STATE(200)] = 4509,
  [SMALL_STATE(201)] = 4516,
  [SMALL_STATE(202)] = 4523,
  [SMALL_STATE(203)] = 4530,
  [SMALL_STATE(204)] = 4537,
  [SMALL_STATE(205)] = 4544,
  [SMALL_STATE(206)] = 4551,
  [SMALL_STATE(207)] = 4558,
  [SMALL_STATE(208)] = 4565,
  [SMALL_STATE(209)] = 4572,
  [SMALL_STATE(210)] = 4579,
  [SMALL_STATE(211)] = 4586,
  [SMALL_STATE(212)] = 4593,
  [SMALL_STATE(213)] = 4600,
  [SMALL_STATE(214)] = 4607,
  [SMALL_STATE(215)] = 4614,
  [SMALL_STATE(216)] = 4621,
  [SMALL_STATE(217)] = 4628,
  [SMALL_STATE(218)] = 4635,
  [SMALL_STATE(219)] = 4642,
  [SMALL_STATE(220)] = 4649,
  [SMALL_STATE(221)] = 4656,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(178),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(149),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(216),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(206),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(60),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(60),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(157),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(155),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(44),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(43),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 3, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(75),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(64),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(116),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(63),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(123),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_field, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_class, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_java_method, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 4, .production_id = 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_access, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 2, .production_id = 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2), SHIFT_REPEAT(55),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2), SHIFT_REPEAT(213),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_java_class_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [639] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
