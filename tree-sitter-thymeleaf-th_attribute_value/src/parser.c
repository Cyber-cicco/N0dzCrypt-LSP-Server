#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

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
  aux_sym_ognl_object_literal_token1 = 72,
  aux_sym_ognl_method_name_token1 = 73,
  anon_sym_COMMA = 74,
  sym__start_tag_name = 75,
  sym__script_start_tag_name = 76,
  sym__style_start_tag_name = 77,
  sym__end_tag_name = 78,
  sym_erroneous_end_tag_name = 79,
  sym__implicit_end_tag = 80,
  sym_raw_text = 81,
  sym_comment = 82,
  sym_document = 83,
  sym_doctype = 84,
  sym__node = 85,
  sym_element = 86,
  sym_script_element = 87,
  sym_style_element = 88,
  sym_start_tag = 89,
  sym__attributes = 90,
  sym_th_attribute = 91,
  sym_th_attribute_value = 92,
  sym_script_start_tag = 93,
  sym_style_start_tag = 94,
  sym_self_closing_tag = 95,
  sym_end_tag = 96,
  sym_erroneous_end_tag = 97,
  sym_attribute = 98,
  sym__th_generic = 99,
  sym__th_ognl_only = 100,
  sym_quoted_attribute_value = 101,
  sym__literal = 102,
  sym_number_literal = 103,
  sym_token_literal = 104,
  sym_string_literal = 105,
  sym_interpolated_string_literal = 106,
  sym__interpreted_string_literal = 107,
  sym_greater_than = 108,
  sym_lesser_than = 109,
  sym_add = 110,
  sym_substract = 111,
  sym_multiply = 112,
  sym__th_std_expression = 113,
  sym_fragment_th_std_expression = 114,
  sym_url_th_std_expression = 115,
  sym_message_th_std_expression = 116,
  sym_varselect_th_std_expression = 117,
  sym_ognl_th_std_expression = 118,
  sym_url_std_expression = 119,
  sym_message_std_expression = 120,
  sym_ternary_th_std_expression = 121,
  sym_unary_th_std_expression = 122,
  sym_parenthesized_th_std_expression = 123,
  sym_binary_th_std_expression = 124,
  sym__ognl_std_expression = 125,
  sym__ognl_literal = 126,
  sym_ognl_object_literal = 127,
  sym_ognl_method_literal = 128,
  sym_ognl_method_name = 129,
  sym_ognl_method_args = 130,
  aux_sym_document_repeat1 = 131,
  aux_sym_start_tag_repeat1 = 132,
  aux_sym_token_literal_repeat1 = 133,
  aux_sym_interpolated_string_literal_repeat1 = 134,
  aux_sym__interpreted_string_literal_repeat1 = 135,
  aux_sym_ognl_method_name_repeat1 = 136,
  aux_sym_ognl_method_args_repeat1 = 137,
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
  [aux_sym_ognl_object_literal_token1] = "ognl_object_literal_token1",
  [aux_sym_ognl_method_name_token1] = "ognl_method_name_token1",
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
  [sym_ognl_object_literal] = "ognl_object_literal",
  [sym_ognl_method_literal] = "ognl_method_literal",
  [sym_ognl_method_name] = "ognl_method_name",
  [sym_ognl_method_args] = "ognl_method_args",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_token_literal_repeat1] = "token_literal_repeat1",
  [aux_sym_interpolated_string_literal_repeat1] = "interpolated_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [aux_sym_ognl_method_name_repeat1] = "ognl_method_name_repeat1",
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
  [aux_sym_ognl_object_literal_token1] = aux_sym_ognl_object_literal_token1,
  [aux_sym_ognl_method_name_token1] = aux_sym_ognl_method_name_token1,
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
  [sym_ognl_object_literal] = sym_ognl_object_literal,
  [sym_ognl_method_literal] = sym_ognl_method_literal,
  [sym_ognl_method_name] = sym_ognl_method_name,
  [sym_ognl_method_args] = sym_ognl_method_args,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_token_literal_repeat1] = aux_sym_token_literal_repeat1,
  [aux_sym_interpolated_string_literal_repeat1] = aux_sym_interpolated_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [aux_sym_ognl_method_name_repeat1] = aux_sym_ognl_method_name_repeat1,
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
  [aux_sym_ognl_object_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ognl_method_name_token1] = {
    .visible = false,
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
  [sym_ognl_object_literal] = {
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
  [aux_sym_ognl_method_name_repeat1] = {
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
  field_attribute_name = 2,
  field_attribute_value = 3,
  field_condition = 4,
  field_consequence = 5,
  field_left = 6,
  field_operand = 7,
  field_operator = 8,
  field_right = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_attribute_name] = "attribute_name",
  [field_attribute_value] = "attribute_value",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_attribute_name, 1},
    {field_attribute_value, 4},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
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
  [43] = 41,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 56,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 39,
  [65] = 38,
  [66] = 37,
  [67] = 36,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 70,
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
  [90] = 79,
  [91] = 91,
  [92] = 83,
  [93] = 81,
  [94] = 80,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 84,
  [99] = 88,
  [100] = 87,
  [101] = 78,
  [102] = 82,
  [103] = 85,
  [104] = 86,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 107,
  [113] = 105,
  [114] = 114,
  [115] = 115,
  [116] = 109,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 108,
  [121] = 121,
  [122] = 122,
  [123] = 115,
  [124] = 111,
  [125] = 117,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 121,
  [132] = 132,
  [133] = 118,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 138,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 144,
  [148] = 146,
  [149] = 149,
  [150] = 140,
  [151] = 136,
  [152] = 141,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 145,
  [157] = 153,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 162,
  [167] = 167,
  [168] = 168,
  [169] = 158,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 163,
  [177] = 167,
  [178] = 178,
  [179] = 179,
  [180] = 172,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 165,
  [186] = 159,
  [187] = 179,
  [188] = 188,
  [189] = 160,
  [190] = 170,
  [191] = 181,
  [192] = 192,
  [193] = 184,
  [194] = 164,
  [195] = 171,
  [196] = 173,
  [197] = 178,
  [198] = 161,
  [199] = 182,
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
      if (eof) ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '~') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(212);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(229);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(228);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == '!') ADVANCE(236);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '~') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '~') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 't') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'w') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '}') ADVANCE(227);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead == '"') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(49);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 40:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(162);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(239);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(189);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '~') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'r') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ognl_method_name_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
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
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20, .external_lex_state = 2},
  [31] = {.lex_state = 20, .external_lex_state = 2},
  [32] = {.lex_state = 20, .external_lex_state = 2},
  [33] = {.lex_state = 20, .external_lex_state = 2},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 2},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 2},
  [38] = {.lex_state = 20, .external_lex_state = 2},
  [39] = {.lex_state = 20, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 2},
  [41] = {.lex_state = 45, .external_lex_state = 3},
  [42] = {.lex_state = 45, .external_lex_state = 3},
  [43] = {.lex_state = 45, .external_lex_state = 3},
  [44] = {.lex_state = 45, .external_lex_state = 3},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 45, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 45, .external_lex_state = 2},
  [51] = {.lex_state = 45, .external_lex_state = 3},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 22, .external_lex_state = 2},
  [54] = {.lex_state = 22, .external_lex_state = 2},
  [55] = {.lex_state = 22, .external_lex_state = 2},
  [56] = {.lex_state = 23, .external_lex_state = 2},
  [57] = {.lex_state = 23, .external_lex_state = 2},
  [58] = {.lex_state = 23, .external_lex_state = 2},
  [59] = {.lex_state = 23, .external_lex_state = 2},
  [60] = {.lex_state = 23, .external_lex_state = 2},
  [61] = {.lex_state = 23, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 24, .external_lex_state = 2},
  [64] = {.lex_state = 22, .external_lex_state = 2},
  [65] = {.lex_state = 22, .external_lex_state = 2},
  [66] = {.lex_state = 22, .external_lex_state = 2},
  [67] = {.lex_state = 22, .external_lex_state = 2},
  [68] = {.lex_state = 25, .external_lex_state = 4},
  [69] = {.lex_state = 25, .external_lex_state = 4},
  [70] = {.lex_state = 25, .external_lex_state = 4},
  [71] = {.lex_state = 25, .external_lex_state = 4},
  [72] = {.lex_state = 25, .external_lex_state = 4},
  [73] = {.lex_state = 25, .external_lex_state = 2},
  [74] = {.lex_state = 25, .external_lex_state = 2},
  [75] = {.lex_state = 25, .external_lex_state = 2},
  [76] = {.lex_state = 25, .external_lex_state = 2},
  [77] = {.lex_state = 25, .external_lex_state = 2},
  [78] = {.lex_state = 45, .external_lex_state = 3},
  [79] = {.lex_state = 45, .external_lex_state = 3},
  [80] = {.lex_state = 45, .external_lex_state = 2},
  [81] = {.lex_state = 45, .external_lex_state = 2},
  [82] = {.lex_state = 45, .external_lex_state = 3},
  [83] = {.lex_state = 45, .external_lex_state = 2},
  [84] = {.lex_state = 45, .external_lex_state = 3},
  [85] = {.lex_state = 45, .external_lex_state = 3},
  [86] = {.lex_state = 45, .external_lex_state = 3},
  [87] = {.lex_state = 45, .external_lex_state = 3},
  [88] = {.lex_state = 45, .external_lex_state = 3},
  [89] = {.lex_state = 45, .external_lex_state = 3},
  [90] = {.lex_state = 45, .external_lex_state = 2},
  [91] = {.lex_state = 45, .external_lex_state = 3},
  [92] = {.lex_state = 45, .external_lex_state = 3},
  [93] = {.lex_state = 45, .external_lex_state = 3},
  [94] = {.lex_state = 45, .external_lex_state = 3},
  [95] = {.lex_state = 45, .external_lex_state = 3},
  [96] = {.lex_state = 26, .external_lex_state = 2},
  [97] = {.lex_state = 45, .external_lex_state = 2},
  [98] = {.lex_state = 45, .external_lex_state = 2},
  [99] = {.lex_state = 45, .external_lex_state = 2},
  [100] = {.lex_state = 45, .external_lex_state = 2},
  [101] = {.lex_state = 45, .external_lex_state = 2},
  [102] = {.lex_state = 45, .external_lex_state = 2},
  [103] = {.lex_state = 45, .external_lex_state = 2},
  [104] = {.lex_state = 45, .external_lex_state = 2},
  [105] = {.lex_state = 25, .external_lex_state = 4},
  [106] = {.lex_state = 27, .external_lex_state = 2},
  [107] = {.lex_state = 28, .external_lex_state = 2},
  [108] = {.lex_state = 25, .external_lex_state = 4},
  [109] = {.lex_state = 25, .external_lex_state = 4},
  [110] = {.lex_state = 27, .external_lex_state = 2},
  [111] = {.lex_state = 25, .external_lex_state = 4},
  [112] = {.lex_state = 28, .external_lex_state = 2},
  [113] = {.lex_state = 25, .external_lex_state = 2},
  [114] = {.lex_state = 27, .external_lex_state = 2},
  [115] = {.lex_state = 25, .external_lex_state = 4},
  [116] = {.lex_state = 25, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0, .external_lex_state = 5},
  [119] = {.lex_state = 26, .external_lex_state = 2},
  [120] = {.lex_state = 25, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 25, .external_lex_state = 2},
  [124] = {.lex_state = 25, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 5},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 26, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 6},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 29, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 29, .external_lex_state = 2},
  [141] = {.lex_state = 29, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 30, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 7},
  [146] = {.lex_state = 31, .external_lex_state = 2},
  [147] = {.lex_state = 30, .external_lex_state = 2},
  [148] = {.lex_state = 31, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 29, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 29, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 0, .external_lex_state = 7},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 19, .external_lex_state = 2},
  [162] = {.lex_state = 45, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 20, .external_lex_state = 2},
  [165] = {.lex_state = 32, .external_lex_state = 2},
  [166] = {.lex_state = 45, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 33, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 45, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 45, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 19, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 19, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 8},
  [180] = {.lex_state = 45, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 9},
  [185] = {.lex_state = 32, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 45, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 9},
  [194] = {.lex_state = 20, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 19, .external_lex_state = 2},
  [198] = {.lex_state = 19, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym_ognl_method_name_token1] = ACTIONS(1),
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
    [sym_document] = STATE(192),
    [sym_doctype] = STATE(47),
    [sym__node] = STATE(47),
    [sym_element] = STATE(47),
    [sym_script_element] = STATE(47),
    [sym_style_element] = STATE(47),
    [sym_start_tag] = STATE(41),
    [sym_script_start_tag] = STATE(133),
    [sym_style_start_tag] = STATE(125),
    [sym_self_closing_tag] = STATE(80),
    [sym_erroneous_end_tag] = STATE(47),
    [aux_sym_document_repeat1] = STATE(47),
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(158), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(24), 15,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(169), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(24), 15,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(43), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(45), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(47), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(49), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(23), 15,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(55), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(57), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(59), 3,
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
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(61), 3,
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
  [870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
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
  [912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(69), 21,
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
  [954] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 4,
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
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1012] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(77), 6,
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
  [1066] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 4,
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
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1122] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(89), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(79), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1184] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
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
  [1234] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_STAR,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
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
  [1280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 23,
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
      anon_sym_COMMA,
  [1316] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1376] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_token_literal_token1,
    ACTIONS(112), 1,
      aux_sym_token_literal_token2,
    STATE(25), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(105), 11,
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
    ACTIONS(107), 12,
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
  [1476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(119), 1,
      aux_sym_token_literal_token2,
    STATE(25), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(115), 11,
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
    ACTIONS(117), 12,
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
  [1516] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(121), 1,
      anon_sym_COLON,
    STATE(11), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(5), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(7), 2,
      sym_add,
      sym_substract,
    ACTIONS(79), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(77), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 12,
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
    ACTIONS(105), 13,
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
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 23,
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
      anon_sym_COMMA,
  [1642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 23,
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
      anon_sym_COMMA,
  [1675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 23,
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
      anon_sym_COMMA,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 23,
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
      anon_sym_COMMA,
  [1741] = 3,
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
  [1772] = 3,
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
  [1803] = 3,
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
  [1834] = 3,
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
  [1865] = 3,
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
  [1896] = 3,
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
  [1927] = 3,
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
  [1958] = 3,
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
  [1989] = 12,
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
    STATE(43), 1,
      sym_start_tag,
    STATE(81), 1,
      sym_end_tag,
    STATE(94), 1,
      sym_self_closing_tag,
    STATE(117), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(44), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2033] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LT_SLASH,
    ACTIONS(185), 1,
      sym__implicit_end_tag,
    STATE(43), 1,
      sym_start_tag,
    STATE(87), 1,
      sym_end_tag,
    STATE(94), 1,
      sym_self_closing_tag,
    STATE(117), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(183), 2,
      sym_entity,
      sym_text,
    STATE(51), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2077] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LT_SLASH,
    ACTIONS(189), 1,
      sym__implicit_end_tag,
    STATE(43), 1,
      sym_start_tag,
    STATE(93), 1,
      sym_end_tag,
    STATE(94), 1,
      sym_self_closing_tag,
    STATE(117), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(187), 2,
      sym_entity,
      sym_text,
    STATE(42), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2121] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym__implicit_end_tag,
    STATE(43), 1,
      sym_start_tag,
    STATE(94), 1,
      sym_self_closing_tag,
    STATE(100), 1,
      sym_end_tag,
    STATE(117), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(183), 2,
      sym_entity,
      sym_text,
    STATE(51), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(193), 11,
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
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(197), 11,
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
  [2215] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_start_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(125), 1,
      sym_style_start_tag,
    STATE(133), 1,
      sym_script_start_tag,
    ACTIONS(203), 2,
      sym_entity,
      sym_text,
    STATE(50), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(205), 11,
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
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(209), 11,
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
  [2306] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_LT_BANG,
    ACTIONS(218), 1,
      anon_sym_LT,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    STATE(41), 1,
      sym_start_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(125), 1,
      sym_style_start_tag,
    STATE(133), 1,
      sym_script_start_tag,
    ACTIONS(224), 2,
      sym_entity,
      sym_text,
    STATE(50), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2347] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__implicit_end_tag,
    ACTIONS(227), 1,
      anon_sym_LT_BANG,
    ACTIONS(230), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_LT_SLASH,
    STATE(43), 1,
      sym_start_tag,
    STATE(94), 1,
      sym_self_closing_tag,
    STATE(117), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(236), 2,
      sym_entity,
      sym_text,
    STATE(51), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(239), 11,
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
  [2413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_PIPE,
    ACTIONS(248), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(251), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(254), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(257), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(260), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(53), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2448] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(267), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(273), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(53), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2483] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(273), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(279), 4,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
    STATE(54), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(283), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(181), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2550] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(287), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(130), 5,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(291), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(182), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(293), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(191), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(295), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(199), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2680] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(32), 1,
      sym__interpreted_string_literal,
    STATE(139), 1,
      sym_ognl_method_name,
    ACTIONS(297), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(142), 5,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(197), 1,
      sym__th_generic,
    STATE(198), 1,
      sym__th_ognl_only,
    ACTIONS(301), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(299), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [2736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      sym__th_ognl_only,
    STATE(178), 1,
      sym__th_generic,
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
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(163), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2779] = 3,
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
  [2797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(155), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(151), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2833] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_GT,
    ACTIONS(309), 1,
      anon_sym_th_COLON,
    ACTIONS(311), 1,
      anon_sym_SLASH_GT,
    ACTIONS(313), 1,
      sym_attribute_name,
    STATE(71), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_GT,
    ACTIONS(309), 1,
      anon_sym_th_COLON,
    ACTIONS(313), 1,
      sym_attribute_name,
    ACTIONS(315), 1,
      anon_sym_SLASH_GT,
    STATE(72), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_th_COLON,
    ACTIONS(322), 1,
      sym_attribute_name,
    ACTIONS(317), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(70), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_th_COLON,
    ACTIONS(313), 1,
      sym_attribute_name,
    ACTIONS(325), 1,
      anon_sym_GT,
    ACTIONS(327), 1,
      anon_sym_SLASH_GT,
    STATE(70), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_th_COLON,
    ACTIONS(313), 1,
      sym_attribute_name,
    ACTIONS(325), 1,
      anon_sym_GT,
    ACTIONS(329), 1,
      anon_sym_SLASH_GT,
    STATE(70), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_GT,
    ACTIONS(333), 1,
      anon_sym_th_COLON,
    ACTIONS(335), 1,
      sym_attribute_name,
    STATE(75), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_th_COLON,
    ACTIONS(335), 1,
      sym_attribute_name,
    ACTIONS(337), 1,
      anon_sym_GT,
    STATE(77), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_th_COLON,
    ACTIONS(335), 1,
      sym_attribute_name,
    ACTIONS(339), 1,
      anon_sym_GT,
    STATE(77), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_th_COLON,
    ACTIONS(335), 1,
      sym_attribute_name,
    ACTIONS(341), 1,
      anon_sym_GT,
    STATE(74), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_GT,
    ACTIONS(343), 1,
      anon_sym_th_COLON,
    ACTIONS(346), 1,
      sym_attribute_name,
    STATE(77), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(349), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(353), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(361), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LT,
    ACTIONS(365), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(373), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT,
    ACTIONS(377), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(381), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LT,
    ACTIONS(385), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(389), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(393), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LT,
    ACTIONS(397), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(369), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(361), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(357), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(401), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      aux_sym_ognl_method_name_token1,
    STATE(119), 1,
      aux_sym_ognl_method_name_repeat1,
    ACTIONS(405), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(373), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(389), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LT,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LT,
    ACTIONS(365), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT,
    ACTIONS(377), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(381), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(411), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(417), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      sym_attribute_value,
    ACTIONS(424), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_quoted_attribute_value,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(432), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_attribute_value,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_quoted_attribute_value,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(411), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(446), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT_SLASH,
    ACTIONS(452), 1,
      sym_raw_text,
    STATE(79), 1,
      sym_end_tag,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT_SLASH,
    ACTIONS(454), 1,
      sym_raw_text,
    STATE(92), 1,
      sym_end_tag,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_ognl_method_name_token1,
    STATE(128), 1,
      aux_sym_ognl_method_name_repeat1,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__start_tag_name,
    ACTIONS(462), 1,
      sym__script_start_tag_name,
    ACTIONS(464), 1,
      sym__style_start_tag_name,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LT_SLASH,
    ACTIONS(470), 1,
      sym_raw_text,
    STATE(90), 1,
      sym_end_tag,
  [3667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_ognl_method_args_repeat1,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      aux_sym_ognl_method_name_token1,
    STATE(128), 1,
      aux_sym_ognl_method_name_repeat1,
  [3702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_ognl_method_args_repeat1,
  [3724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__script_start_tag_name,
    ACTIONS(464), 1,
      sym__style_start_tag_name,
    ACTIONS(490), 1,
      sym__start_tag_name,
  [3737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LT_SLASH,
    ACTIONS(494), 1,
      sym_raw_text,
    STATE(83), 1,
      sym_end_tag,
  [3759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_ognl_method_args_repeat1,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_url_std_expression_token1,
    STATE(183), 1,
      sym_url_std_expression,
  [3782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT_SLASH,
    STATE(85), 1,
      sym_end_tag,
  [3792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(169), 1,
      sym_ognl_th_std_expression,
  [3810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_ognl_method_args,
  [3820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym_url_std_expression_token1,
    STATE(160), 1,
      sym_message_std_expression,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_url_std_expression_token1,
    STATE(159), 1,
      sym_url_std_expression,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(158), 1,
      sym_ognl_th_std_expression,
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
    ACTIONS(508), 1,
      aux_sym_quoted_attribute_value_token1,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__end_tag_name,
    ACTIONS(512), 1,
      sym_erroneous_end_tag_name,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      aux_sym_quoted_attribute_value_token2,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      aux_sym_quoted_attribute_value_token1,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      aux_sym_quoted_attribute_value_token2,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym_url_std_expression_token1,
    STATE(189), 1,
      sym_message_std_expression,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LT_SLASH,
    STATE(103), 1,
      sym_end_tag,
  [3936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_url_std_expression_token1,
    STATE(186), 1,
      sym_url_std_expression,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT_SLASH,
    STATE(86), 1,
      sym_end_tag,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(528), 1,
      sym__end_tag_name,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LT_SLASH,
    STATE(104), 1,
      sym_end_tag,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
  [3999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [4013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_EQ,
  [4020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_GT,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
  [4034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__doctype,
  [4041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_doctype_token1,
  [4048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_GT,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
  [4062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_token_literal_token2,
  [4069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
  [4076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_GT,
  [4083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_GT,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
  [4104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym_number_literal_token1,
  [4111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [4118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
  [4125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_EQ,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__end_tag_name,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_GT,
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_erroneous_end_tag_name,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      aux_sym_doctype_token1,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__end_tag_name,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_GT,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_erroneous_end_tag_name,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__doctype,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_EQ,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_EQ,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
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
  [SMALL_STATE(15)] = 912,
  [SMALL_STATE(16)] = 954,
  [SMALL_STATE(17)] = 1012,
  [SMALL_STATE(18)] = 1066,
  [SMALL_STATE(19)] = 1122,
  [SMALL_STATE(20)] = 1184,
  [SMALL_STATE(21)] = 1234,
  [SMALL_STATE(22)] = 1280,
  [SMALL_STATE(23)] = 1316,
  [SMALL_STATE(24)] = 1376,
  [SMALL_STATE(25)] = 1436,
  [SMALL_STATE(26)] = 1476,
  [SMALL_STATE(27)] = 1516,
  [SMALL_STATE(28)] = 1576,
  [SMALL_STATE(29)] = 1609,
  [SMALL_STATE(30)] = 1642,
  [SMALL_STATE(31)] = 1675,
  [SMALL_STATE(32)] = 1708,
  [SMALL_STATE(33)] = 1741,
  [SMALL_STATE(34)] = 1772,
  [SMALL_STATE(35)] = 1803,
  [SMALL_STATE(36)] = 1834,
  [SMALL_STATE(37)] = 1865,
  [SMALL_STATE(38)] = 1896,
  [SMALL_STATE(39)] = 1927,
  [SMALL_STATE(40)] = 1958,
  [SMALL_STATE(41)] = 1989,
  [SMALL_STATE(42)] = 2033,
  [SMALL_STATE(43)] = 2077,
  [SMALL_STATE(44)] = 2121,
  [SMALL_STATE(45)] = 2165,
  [SMALL_STATE(46)] = 2190,
  [SMALL_STATE(47)] = 2215,
  [SMALL_STATE(48)] = 2256,
  [SMALL_STATE(49)] = 2281,
  [SMALL_STATE(50)] = 2306,
  [SMALL_STATE(51)] = 2347,
  [SMALL_STATE(52)] = 2388,
  [SMALL_STATE(53)] = 2413,
  [SMALL_STATE(54)] = 2448,
  [SMALL_STATE(55)] = 2483,
  [SMALL_STATE(56)] = 2518,
  [SMALL_STATE(57)] = 2550,
  [SMALL_STATE(58)] = 2584,
  [SMALL_STATE(59)] = 2616,
  [SMALL_STATE(60)] = 2648,
  [SMALL_STATE(61)] = 2680,
  [SMALL_STATE(62)] = 2711,
  [SMALL_STATE(63)] = 2736,
  [SMALL_STATE(64)] = 2761,
  [SMALL_STATE(65)] = 2779,
  [SMALL_STATE(66)] = 2797,
  [SMALL_STATE(67)] = 2815,
  [SMALL_STATE(68)] = 2833,
  [SMALL_STATE(69)] = 2855,
  [SMALL_STATE(70)] = 2877,
  [SMALL_STATE(71)] = 2897,
  [SMALL_STATE(72)] = 2919,
  [SMALL_STATE(73)] = 2941,
  [SMALL_STATE(74)] = 2960,
  [SMALL_STATE(75)] = 2979,
  [SMALL_STATE(76)] = 2998,
  [SMALL_STATE(77)] = 3017,
  [SMALL_STATE(78)] = 3036,
  [SMALL_STATE(79)] = 3050,
  [SMALL_STATE(80)] = 3064,
  [SMALL_STATE(81)] = 3078,
  [SMALL_STATE(82)] = 3092,
  [SMALL_STATE(83)] = 3106,
  [SMALL_STATE(84)] = 3120,
  [SMALL_STATE(85)] = 3134,
  [SMALL_STATE(86)] = 3148,
  [SMALL_STATE(87)] = 3162,
  [SMALL_STATE(88)] = 3176,
  [SMALL_STATE(89)] = 3190,
  [SMALL_STATE(90)] = 3204,
  [SMALL_STATE(91)] = 3218,
  [SMALL_STATE(92)] = 3232,
  [SMALL_STATE(93)] = 3246,
  [SMALL_STATE(94)] = 3260,
  [SMALL_STATE(95)] = 3274,
  [SMALL_STATE(96)] = 3288,
  [SMALL_STATE(97)] = 3306,
  [SMALL_STATE(98)] = 3320,
  [SMALL_STATE(99)] = 3334,
  [SMALL_STATE(100)] = 3348,
  [SMALL_STATE(101)] = 3362,
  [SMALL_STATE(102)] = 3376,
  [SMALL_STATE(103)] = 3390,
  [SMALL_STATE(104)] = 3404,
  [SMALL_STATE(105)] = 3418,
  [SMALL_STATE(106)] = 3431,
  [SMALL_STATE(107)] = 3445,
  [SMALL_STATE(108)] = 3461,
  [SMALL_STATE(109)] = 3471,
  [SMALL_STATE(110)] = 3481,
  [SMALL_STATE(111)] = 3495,
  [SMALL_STATE(112)] = 3505,
  [SMALL_STATE(113)] = 3521,
  [SMALL_STATE(114)] = 3533,
  [SMALL_STATE(115)] = 3547,
  [SMALL_STATE(116)] = 3557,
  [SMALL_STATE(117)] = 3566,
  [SMALL_STATE(118)] = 3579,
  [SMALL_STATE(119)] = 3592,
  [SMALL_STATE(120)] = 3605,
  [SMALL_STATE(121)] = 3614,
  [SMALL_STATE(122)] = 3627,
  [SMALL_STATE(123)] = 3636,
  [SMALL_STATE(124)] = 3645,
  [SMALL_STATE(125)] = 3654,
  [SMALL_STATE(126)] = 3667,
  [SMALL_STATE(127)] = 3676,
  [SMALL_STATE(128)] = 3689,
  [SMALL_STATE(129)] = 3702,
  [SMALL_STATE(130)] = 3711,
  [SMALL_STATE(131)] = 3724,
  [SMALL_STATE(132)] = 3737,
  [SMALL_STATE(133)] = 3746,
  [SMALL_STATE(134)] = 3759,
  [SMALL_STATE(135)] = 3772,
  [SMALL_STATE(136)] = 3782,
  [SMALL_STATE(137)] = 3792,
  [SMALL_STATE(138)] = 3800,
  [SMALL_STATE(139)] = 3810,
  [SMALL_STATE(140)] = 3820,
  [SMALL_STATE(141)] = 3830,
  [SMALL_STATE(142)] = 3840,
  [SMALL_STATE(143)] = 3848,
  [SMALL_STATE(144)] = 3858,
  [SMALL_STATE(145)] = 3868,
  [SMALL_STATE(146)] = 3878,
  [SMALL_STATE(147)] = 3888,
  [SMALL_STATE(148)] = 3898,
  [SMALL_STATE(149)] = 3908,
  [SMALL_STATE(150)] = 3916,
  [SMALL_STATE(151)] = 3926,
  [SMALL_STATE(152)] = 3936,
  [SMALL_STATE(153)] = 3946,
  [SMALL_STATE(154)] = 3956,
  [SMALL_STATE(155)] = 3964,
  [SMALL_STATE(156)] = 3972,
  [SMALL_STATE(157)] = 3982,
  [SMALL_STATE(158)] = 3992,
  [SMALL_STATE(159)] = 3999,
  [SMALL_STATE(160)] = 4006,
  [SMALL_STATE(161)] = 4013,
  [SMALL_STATE(162)] = 4020,
  [SMALL_STATE(163)] = 4027,
  [SMALL_STATE(164)] = 4034,
  [SMALL_STATE(165)] = 4041,
  [SMALL_STATE(166)] = 4048,
  [SMALL_STATE(167)] = 4055,
  [SMALL_STATE(168)] = 4062,
  [SMALL_STATE(169)] = 4069,
  [SMALL_STATE(170)] = 4076,
  [SMALL_STATE(171)] = 4083,
  [SMALL_STATE(172)] = 4090,
  [SMALL_STATE(173)] = 4097,
  [SMALL_STATE(174)] = 4104,
  [SMALL_STATE(175)] = 4111,
  [SMALL_STATE(176)] = 4118,
  [SMALL_STATE(177)] = 4125,
  [SMALL_STATE(178)] = 4132,
  [SMALL_STATE(179)] = 4139,
  [SMALL_STATE(180)] = 4146,
  [SMALL_STATE(181)] = 4153,
  [SMALL_STATE(182)] = 4160,
  [SMALL_STATE(183)] = 4167,
  [SMALL_STATE(184)] = 4174,
  [SMALL_STATE(185)] = 4181,
  [SMALL_STATE(186)] = 4188,
  [SMALL_STATE(187)] = 4195,
  [SMALL_STATE(188)] = 4202,
  [SMALL_STATE(189)] = 4209,
  [SMALL_STATE(190)] = 4216,
  [SMALL_STATE(191)] = 4223,
  [SMALL_STATE(192)] = 4230,
  [SMALL_STATE(193)] = 4237,
  [SMALL_STATE(194)] = 4244,
  [SMALL_STATE(195)] = 4251,
  [SMALL_STATE(196)] = 4258,
  [SMALL_STATE(197)] = 4265,
  [SMALL_STATE(198)] = 4272,
  [SMALL_STATE(199)] = 4279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(168),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(25),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(164),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(141),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(140),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(56),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(58),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(63),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(105),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(62),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(113),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(106),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2), SHIFT_REPEAT(61),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_name_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_name_repeat1, 2), SHIFT_REPEAT(128),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [588] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
