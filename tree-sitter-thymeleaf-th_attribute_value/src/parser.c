#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
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
  aux_sym_ognl_object_literal_token1 = 72,
  aux_sym_ognl_object_literal_token2 = 73,
  anon_sym_LBRACK = 74,
  anon_sym_RBRACK = 75,
  anon_sym_COMMA = 76,
  sym__start_tag_name = 77,
  sym__script_start_tag_name = 78,
  sym__style_start_tag_name = 79,
  sym__end_tag_name = 80,
  sym_erroneous_end_tag_name = 81,
  sym__implicit_end_tag = 82,
  sym_raw_text = 83,
  sym_comment = 84,
  sym_document = 85,
  sym_doctype = 86,
  sym__node = 87,
  sym_element = 88,
  sym_script_element = 89,
  sym_style_element = 90,
  sym_start_tag = 91,
  sym__attributes = 92,
  sym_th_attribute = 93,
  sym_th_attribute_value = 94,
  sym_script_start_tag = 95,
  sym_style_start_tag = 96,
  sym_self_closing_tag = 97,
  sym_end_tag = 98,
  sym_erroneous_end_tag = 99,
  sym_attribute = 100,
  sym__th_generic = 101,
  sym__th_ognl_only = 102,
  sym_quoted_attribute_value = 103,
  sym__literal = 104,
  sym_number_literal = 105,
  sym_token_literal = 106,
  sym_string_literal = 107,
  sym_interpolated_string_literal = 108,
  sym__interpreted_string_literal = 109,
  sym_greater_than = 110,
  sym_lesser_than = 111,
  sym_add = 112,
  sym_substract = 113,
  sym_multiply = 114,
  sym__th_std_expression = 115,
  sym_fragment_th_std_expression = 116,
  sym_url_th_std_expression = 117,
  sym_message_th_std_expression = 118,
  sym_varselect_th_std_expression = 119,
  sym_ognl_th_std_expression = 120,
  sym_url_std_expression = 121,
  sym_message_std_expression = 122,
  sym_ternary_th_std_expression = 123,
  sym_unary_th_std_expression = 124,
  sym_parenthesized_th_std_expression = 125,
  sym_binary_th_std_expression = 126,
  sym__ognl_std_expression = 127,
  sym__ognl_literal = 128,
  sym__ognl_post_accessor = 129,
  sym_ognl_object_literal = 130,
  sym_ognl_property_access = 131,
  sym_ognl_method_access = 132,
  sym_ognl_method_literal = 133,
  sym_ognl_method_name = 134,
  sym_ognl_method_args = 135,
  aux_sym_document_repeat1 = 136,
  aux_sym_start_tag_repeat1 = 137,
  aux_sym_token_literal_repeat1 = 138,
  aux_sym_interpolated_string_literal_repeat1 = 139,
  aux_sym__interpreted_string_literal_repeat1 = 140,
  aux_sym_ognl_object_literal_repeat1 = 141,
  aux_sym_ognl_method_args_repeat1 = 142,
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
  [42] = 41,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 35,
  [68] = 40,
  [69] = 39,
  [70] = 37,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 84,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 85,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 94,
  [98] = 86,
  [99] = 92,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 91,
  [104] = 89,
  [105] = 105,
  [106] = 87,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 90,
  [112] = 100,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 113,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 127,
  [134] = 132,
  [135] = 123,
  [136] = 119,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 124,
  [141] = 139,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 147,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 154,
  [158] = 149,
  [159] = 159,
  [160] = 145,
  [161] = 155,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 162,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 172,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 183,
  [188] = 188,
  [189] = 178,
  [190] = 181,
  [191] = 184,
  [192] = 185,
  [193] = 182,
  [194] = 194,
  [195] = 175,
  [196] = 196,
  [197] = 171,
  [198] = 180,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 194,
  [204] = 167,
  [205] = 199,
  [206] = 196,
  [207] = 201,
  [208] = 200,
  [209] = 186,
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
      if (eof) ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '~') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(213);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(229);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(227);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '~') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(198);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '~') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '}') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 33:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 42:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(163);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(221);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '~') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '>') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(161);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_true_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_false_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_null_literal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(230);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'a') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'r') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 's') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_ognl_object_literal_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46, .external_lex_state = 2},
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
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 20, .external_lex_state = 2},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 20, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20, .external_lex_state = 2},
  [31] = {.lex_state = 20, .external_lex_state = 2},
  [32] = {.lex_state = 21, .external_lex_state = 2},
  [33] = {.lex_state = 20, .external_lex_state = 2},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 2},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 2},
  [38] = {.lex_state = 20, .external_lex_state = 2},
  [39] = {.lex_state = 20, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 2},
  [41] = {.lex_state = 46, .external_lex_state = 3},
  [42] = {.lex_state = 46, .external_lex_state = 3},
  [43] = {.lex_state = 46, .external_lex_state = 3},
  [44] = {.lex_state = 46, .external_lex_state = 3},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 46, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 46, .external_lex_state = 2},
  [52] = {.lex_state = 46, .external_lex_state = 3},
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
  [64] = {.lex_state = 23, .external_lex_state = 2},
  [65] = {.lex_state = 25, .external_lex_state = 2},
  [66] = {.lex_state = 25, .external_lex_state = 2},
  [67] = {.lex_state = 22, .external_lex_state = 2},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22, .external_lex_state = 2},
  [70] = {.lex_state = 22, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 25, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 26, .external_lex_state = 4},
  [75] = {.lex_state = 26, .external_lex_state = 4},
  [76] = {.lex_state = 26, .external_lex_state = 4},
  [77] = {.lex_state = 26, .external_lex_state = 4},
  [78] = {.lex_state = 26, .external_lex_state = 4},
  [79] = {.lex_state = 26, .external_lex_state = 2},
  [80] = {.lex_state = 26, .external_lex_state = 2},
  [81] = {.lex_state = 26, .external_lex_state = 2},
  [82] = {.lex_state = 26, .external_lex_state = 2},
  [83] = {.lex_state = 26, .external_lex_state = 2},
  [84] = {.lex_state = 46, .external_lex_state = 3},
  [85] = {.lex_state = 46, .external_lex_state = 2},
  [86] = {.lex_state = 46, .external_lex_state = 2},
  [87] = {.lex_state = 46, .external_lex_state = 2},
  [88] = {.lex_state = 46, .external_lex_state = 2},
  [89] = {.lex_state = 46, .external_lex_state = 2},
  [90] = {.lex_state = 46, .external_lex_state = 3},
  [91] = {.lex_state = 46, .external_lex_state = 2},
  [92] = {.lex_state = 46, .external_lex_state = 3},
  [93] = {.lex_state = 46, .external_lex_state = 3},
  [94] = {.lex_state = 46, .external_lex_state = 2},
  [95] = {.lex_state = 46, .external_lex_state = 2},
  [96] = {.lex_state = 46, .external_lex_state = 3},
  [97] = {.lex_state = 46, .external_lex_state = 3},
  [98] = {.lex_state = 46, .external_lex_state = 3},
  [99] = {.lex_state = 46, .external_lex_state = 2},
  [100] = {.lex_state = 46, .external_lex_state = 3},
  [101] = {.lex_state = 46, .external_lex_state = 2},
  [102] = {.lex_state = 46, .external_lex_state = 3},
  [103] = {.lex_state = 46, .external_lex_state = 3},
  [104] = {.lex_state = 46, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 46, .external_lex_state = 3},
  [107] = {.lex_state = 46, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 46, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 46, .external_lex_state = 2},
  [112] = {.lex_state = 46, .external_lex_state = 2},
  [113] = {.lex_state = 26, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 27, .external_lex_state = 2},
  [116] = {.lex_state = 28, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 26, .external_lex_state = 4},
  [120] = {.lex_state = 29, .external_lex_state = 2},
  [121] = {.lex_state = 29, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 26, .external_lex_state = 4},
  [124] = {.lex_state = 26, .external_lex_state = 4},
  [125] = {.lex_state = 26, .external_lex_state = 2},
  [126] = {.lex_state = 28, .external_lex_state = 2},
  [127] = {.lex_state = 26, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 28, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 26, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 5},
  [135] = {.lex_state = 26, .external_lex_state = 2},
  [136] = {.lex_state = 26, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 6},
  [139] = {.lex_state = 0, .external_lex_state = 6},
  [140] = {.lex_state = 26, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 6},
  [142] = {.lex_state = 0, .external_lex_state = 6},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 6},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 30, .external_lex_state = 2},
  [148] = {.lex_state = 31, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 31, .external_lex_state = 2},
  [151] = {.lex_state = 30, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 6},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 7},
  [156] = {.lex_state = 0, .external_lex_state = 6},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 32, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 7},
  [162] = {.lex_state = 32, .external_lex_state = 2},
  [163] = {.lex_state = 32, .external_lex_state = 2},
  [164] = {.lex_state = 32, .external_lex_state = 2},
  [165] = {.lex_state = 32, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 6},
  [167] = {.lex_state = 20, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 19, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 8},
  [172] = {.lex_state = 46, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 33, .external_lex_state = 2},
  [176] = {.lex_state = 46, .external_lex_state = 2},
  [177] = {.lex_state = 34, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 46, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 46, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 46, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 9},
  [195] = {.lex_state = 33, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 46, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 19, .external_lex_state = 2},
  [201] = {.lex_state = 19, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 20, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 19, .external_lex_state = 2},
  [208] = {.lex_state = 19, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_document] = STATE(202),
    [sym_doctype] = STATE(47),
    [sym__node] = STATE(47),
    [sym_element] = STATE(47),
    [sym_script_element] = STATE(47),
    [sym_style_element] = STATE(47),
    [sym_start_tag] = STATE(44),
    [sym_script_start_tag] = STATE(142),
    [sym_style_start_tag] = STATE(141),
    [sym_self_closing_tag] = STATE(87),
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(170), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(168), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(17), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(43), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(25), 15,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(45), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(47), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(49), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(51), 3,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
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
    STATE(24), 1,
      aux_sym_token_literal_repeat1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    ACTIONS(61), 3,
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
  [870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
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
  [912] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(69), 16,
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
  [962] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(69), 10,
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
  [1016] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(69), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1072] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_and,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(69), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
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
  [1172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(69), 18,
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
  [1218] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(89), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(83), 6,
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
  [1317] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(101), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(107), 1,
      aux_sym_token_literal_token2,
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(103), 11,
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
    ACTIONS(105), 12,
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
  [1417] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_token_literal_token1,
    ACTIONS(118), 1,
      aux_sym_token_literal_token2,
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(111), 11,
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
    ACTIONS(113), 12,
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
  [1517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 24,
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
  [1551] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_and,
    ACTIONS(91), 1,
      sym_or,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_multiply,
    ACTIONS(77), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(12), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(85), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(83), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1611] = 3,
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
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 24,
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
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 24,
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
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 12,
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
    ACTIONS(111), 13,
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
    STATE(43), 1,
      sym_start_tag,
    STATE(88), 1,
      sym_end_tag,
    STATE(106), 1,
      sym_self_closing_tag,
    STATE(138), 1,
      sym_script_start_tag,
    STATE(139), 1,
      sym_style_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(52), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2038] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LT_SLASH,
    ACTIONS(183), 1,
      sym__implicit_end_tag,
    STATE(43), 1,
      sym_start_tag,
    STATE(84), 1,
      sym_end_tag,
    STATE(106), 1,
      sym_self_closing_tag,
    STATE(138), 1,
      sym_script_start_tag,
    STATE(139), 1,
      sym_style_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(52), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2082] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LT_SLASH,
    ACTIONS(187), 1,
      sym__implicit_end_tag,
    STATE(43), 1,
      sym_start_tag,
    STATE(104), 1,
      sym_end_tag,
    STATE(106), 1,
      sym_self_closing_tag,
    STATE(138), 1,
      sym_script_start_tag,
    STATE(139), 1,
      sym_style_start_tag,
    ACTIONS(185), 2,
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
  [2126] = 12,
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
    STATE(89), 1,
      sym_end_tag,
    STATE(106), 1,
      sym_self_closing_tag,
    STATE(138), 1,
      sym_script_start_tag,
    STATE(139), 1,
      sym_style_start_tag,
    ACTIONS(189), 2,
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
  [2170] = 3,
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
  [2195] = 3,
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
  [2220] = 11,
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
    STATE(44), 1,
      sym_start_tag,
    STATE(87), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_style_start_tag,
    STATE(142), 1,
      sym_script_start_tag,
    ACTIONS(203), 2,
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
  [2261] = 3,
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
  [2286] = 3,
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
  [2311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(213), 11,
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
  [2336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_LT_BANG,
    ACTIONS(222), 1,
      anon_sym_LT,
    ACTIONS(225), 1,
      anon_sym_LT_SLASH,
    STATE(44), 1,
      sym_start_tag,
    STATE(87), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_style_start_tag,
    STATE(142), 1,
      sym_script_start_tag,
    ACTIONS(228), 2,
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
  [2377] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__implicit_end_tag,
    ACTIONS(231), 1,
      anon_sym_LT_BANG,
    ACTIONS(234), 1,
      anon_sym_LT,
    ACTIONS(237), 1,
      anon_sym_LT_SLASH,
    STATE(43), 1,
      sym_start_tag,
    STATE(106), 1,
      sym_self_closing_tag,
    STATE(138), 1,
      sym_script_start_tag,
    STATE(139), 1,
      sym_style_start_tag,
    ACTIONS(240), 2,
      sym_entity,
      sym_text,
    STATE(52), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2418] = 9,
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
  [2453] = 9,
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
  [2488] = 9,
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
  [2523] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(283), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(137), 5,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2557] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(289), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(192), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(291), 3,
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
  [2621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(293), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(185), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(295), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(184), 6,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_std_expression,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2685] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(297), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(173), 5,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(207), 1,
      sym__th_generic,
    STATE(208), 1,
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
  [2741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(200), 1,
      sym__th_ognl_only,
    STATE(201), 1,
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
  [2766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_number_literal_token1,
    ACTIONS(287), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(27), 1,
      sym__interpreted_string_literal,
    STATE(152), 1,
      sym_ognl_method_name,
    ACTIONS(307), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(146), 5,
      sym_number_literal,
      sym_string_literal,
      sym__ognl_literal,
      sym_ognl_object_literal,
      sym_ognl_method_literal,
  [2797] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      aux_sym_ognl_object_literal_token2,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(117), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(311), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(72), 1,
      aux_sym_ognl_object_literal_repeat1,
    STATE(130), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(319), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(147), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2875] = 3,
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
  [2893] = 3,
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
  [2911] = 3,
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
  [2929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(114), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(325), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_ognl_object_literal_token2,
    STATE(72), 1,
      aux_sym_ognl_object_literal_repeat1,
    ACTIONS(327), 7,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(122), 3,
      sym__ognl_post_accessor,
      sym_ognl_property_access,
      sym_ognl_method_access,
    ACTIONS(332), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_GT,
    ACTIONS(336), 1,
      anon_sym_th_COLON,
    ACTIONS(338), 1,
      anon_sym_SLASH_GT,
    ACTIONS(340), 1,
      sym_attribute_name,
    STATE(78), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_th_COLON,
    ACTIONS(340), 1,
      sym_attribute_name,
    ACTIONS(342), 1,
      anon_sym_GT,
    ACTIONS(344), 1,
      anon_sym_SLASH_GT,
    STATE(74), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3034] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_th_COLON,
    ACTIONS(340), 1,
      sym_attribute_name,
    ACTIONS(342), 1,
      anon_sym_GT,
    ACTIONS(346), 1,
      anon_sym_SLASH_GT,
    STATE(77), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_GT,
    ACTIONS(336), 1,
      anon_sym_th_COLON,
    ACTIONS(340), 1,
      sym_attribute_name,
    ACTIONS(348), 1,
      anon_sym_SLASH_GT,
    STATE(78), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_th_COLON,
    ACTIONS(355), 1,
      sym_attribute_name,
    ACTIONS(350), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(78), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_GT,
    ACTIONS(360), 1,
      anon_sym_th_COLON,
    ACTIONS(362), 1,
      sym_attribute_name,
    STATE(81), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_th_COLON,
    ACTIONS(362), 1,
      sym_attribute_name,
    ACTIONS(364), 1,
      anon_sym_GT,
    STATE(83), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_th_COLON,
    ACTIONS(362), 1,
      sym_attribute_name,
    ACTIONS(366), 1,
      anon_sym_GT,
    STATE(82), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_GT,
    ACTIONS(368), 1,
      anon_sym_th_COLON,
    ACTIONS(371), 1,
      sym_attribute_name,
    STATE(82), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_th_COLON,
    ACTIONS(362), 1,
      sym_attribute_name,
    ACTIONS(374), 1,
      anon_sym_GT,
    STATE(82), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(376), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LT,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LT,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LT,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LT,
    ACTIONS(396), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LT,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LT,
    ACTIONS(404), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LT,
    ACTIONS(380), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LT,
    ACTIONS(412), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LT,
    ACTIONS(412), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(408), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LT,
    ACTIONS(384), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LT,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LT,
    ACTIONS(416), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(420), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LT,
    ACTIONS(400), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(392), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LT,
    ACTIONS(388), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3513] = 3,
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
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LT,
    ACTIONS(432), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 6,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LT,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LT,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(438), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_ognl_object_literal_token1,
    STATE(118), 1,
      sym_ognl_object_literal,
    STATE(128), 1,
      sym_ognl_method_literal,
    STATE(152), 1,
      sym_ognl_method_name,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(448), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      sym_attribute_value,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym_quoted_attribute_value,
  [3692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      sym_attribute_value,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_quoted_attribute_value,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_EQ,
    ACTIONS(438), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(477), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(485), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_ognl_method_args_repeat1,
  [3821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__start_tag_name,
    ACTIONS(496), 1,
      sym__script_start_tag_name,
    ACTIONS(498), 1,
      sym__style_start_tag_name,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__script_start_tag_name,
    ACTIONS(498), 1,
      sym__style_start_tag_name,
    ACTIONS(500), 1,
      sym__start_tag_name,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_ognl_method_args_repeat1,
  [3887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    ACTIONS(508), 1,
      sym_raw_text,
    STATE(103), 1,
      sym_end_tag,
  [3900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    ACTIONS(510), 1,
      sym_raw_text,
    STATE(102), 1,
      sym_end_tag,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LT_SLASH,
    ACTIONS(514), 1,
      sym_raw_text,
    STATE(101), 1,
      sym_end_tag,
  [3935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LT_SLASH,
    ACTIONS(516), 1,
      sym_raw_text,
    STATE(91), 1,
      sym_end_tag,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_ognl_method_args_repeat1,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    STATE(97), 1,
      sym_end_tag,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      aux_sym_quoted_attribute_value_token2,
  [3997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      aux_sym_quoted_attribute_value_token1,
  [4007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(170), 1,
      sym_ognl_th_std_expression,
  [4017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      aux_sym_quoted_attribute_value_token1,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym_quoted_attribute_value_token2,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_ognl_method_args,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    STATE(96), 1,
      sym_end_tag,
  [4065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__end_tag_name,
    ACTIONS(540), 1,
      sym_erroneous_end_tag_name,
  [4075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LT_SLASH,
    STATE(95), 1,
      sym_end_tag,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(168), 1,
      sym_ognl_th_std_expression,
  [4103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_url_std_expression_token1,
    STATE(174), 1,
      sym_url_std_expression,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LT_SLASH,
    STATE(94), 1,
      sym_end_tag,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(546), 1,
      sym__end_tag_name,
  [4133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_url_std_expression_token1,
    STATE(181), 1,
      sym_message_std_expression,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_url_std_expression_token1,
    STATE(178), 1,
      sym_url_std_expression,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_url_std_expression_token1,
    STATE(189), 1,
      sym_url_std_expression,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_url_std_expression_token1,
    STATE(190), 1,
      sym_message_std_expression,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__doctype,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_number_literal_token1,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__end_tag_name,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_GT,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_doctype_token1,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_GT,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_token_literal_token2,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_GT,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_GT,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SQUOTE,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_GT,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_erroneous_end_tag_name,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_doctype_token1,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__end_tag_name,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_GT,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_EQ,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_EQ,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_erroneous_end_tag_name,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__doctype,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_EQ,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_EQ,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
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
  [SMALL_STATE(16)] = 962,
  [SMALL_STATE(17)] = 1016,
  [SMALL_STATE(18)] = 1072,
  [SMALL_STATE(19)] = 1130,
  [SMALL_STATE(20)] = 1172,
  [SMALL_STATE(21)] = 1218,
  [SMALL_STATE(22)] = 1280,
  [SMALL_STATE(23)] = 1317,
  [SMALL_STATE(24)] = 1377,
  [SMALL_STATE(25)] = 1417,
  [SMALL_STATE(26)] = 1477,
  [SMALL_STATE(27)] = 1517,
  [SMALL_STATE(28)] = 1551,
  [SMALL_STATE(29)] = 1611,
  [SMALL_STATE(30)] = 1645,
  [SMALL_STATE(31)] = 1679,
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
  [SMALL_STATE(43)] = 2082,
  [SMALL_STATE(44)] = 2126,
  [SMALL_STATE(45)] = 2170,
  [SMALL_STATE(46)] = 2195,
  [SMALL_STATE(47)] = 2220,
  [SMALL_STATE(48)] = 2261,
  [SMALL_STATE(49)] = 2286,
  [SMALL_STATE(50)] = 2311,
  [SMALL_STATE(51)] = 2336,
  [SMALL_STATE(52)] = 2377,
  [SMALL_STATE(53)] = 2418,
  [SMALL_STATE(54)] = 2453,
  [SMALL_STATE(55)] = 2488,
  [SMALL_STATE(56)] = 2523,
  [SMALL_STATE(57)] = 2557,
  [SMALL_STATE(58)] = 2589,
  [SMALL_STATE(59)] = 2621,
  [SMALL_STATE(60)] = 2653,
  [SMALL_STATE(61)] = 2685,
  [SMALL_STATE(62)] = 2716,
  [SMALL_STATE(63)] = 2741,
  [SMALL_STATE(64)] = 2766,
  [SMALL_STATE(65)] = 2797,
  [SMALL_STATE(66)] = 2827,
  [SMALL_STATE(67)] = 2857,
  [SMALL_STATE(68)] = 2875,
  [SMALL_STATE(69)] = 2893,
  [SMALL_STATE(70)] = 2911,
  [SMALL_STATE(71)] = 2929,
  [SMALL_STATE(72)] = 2950,
  [SMALL_STATE(73)] = 2969,
  [SMALL_STATE(74)] = 2990,
  [SMALL_STATE(75)] = 3012,
  [SMALL_STATE(76)] = 3034,
  [SMALL_STATE(77)] = 3056,
  [SMALL_STATE(78)] = 3078,
  [SMALL_STATE(79)] = 3098,
  [SMALL_STATE(80)] = 3117,
  [SMALL_STATE(81)] = 3136,
  [SMALL_STATE(82)] = 3155,
  [SMALL_STATE(83)] = 3174,
  [SMALL_STATE(84)] = 3193,
  [SMALL_STATE(85)] = 3207,
  [SMALL_STATE(86)] = 3221,
  [SMALL_STATE(87)] = 3235,
  [SMALL_STATE(88)] = 3249,
  [SMALL_STATE(89)] = 3263,
  [SMALL_STATE(90)] = 3277,
  [SMALL_STATE(91)] = 3291,
  [SMALL_STATE(92)] = 3305,
  [SMALL_STATE(93)] = 3319,
  [SMALL_STATE(94)] = 3333,
  [SMALL_STATE(95)] = 3347,
  [SMALL_STATE(96)] = 3361,
  [SMALL_STATE(97)] = 3375,
  [SMALL_STATE(98)] = 3389,
  [SMALL_STATE(99)] = 3403,
  [SMALL_STATE(100)] = 3417,
  [SMALL_STATE(101)] = 3431,
  [SMALL_STATE(102)] = 3445,
  [SMALL_STATE(103)] = 3459,
  [SMALL_STATE(104)] = 3473,
  [SMALL_STATE(105)] = 3487,
  [SMALL_STATE(106)] = 3499,
  [SMALL_STATE(107)] = 3513,
  [SMALL_STATE(108)] = 3527,
  [SMALL_STATE(109)] = 3539,
  [SMALL_STATE(110)] = 3553,
  [SMALL_STATE(111)] = 3565,
  [SMALL_STATE(112)] = 3579,
  [SMALL_STATE(113)] = 3593,
  [SMALL_STATE(114)] = 3606,
  [SMALL_STATE(115)] = 3616,
  [SMALL_STATE(116)] = 3632,
  [SMALL_STATE(117)] = 3646,
  [SMALL_STATE(118)] = 3656,
  [SMALL_STATE(119)] = 3666,
  [SMALL_STATE(120)] = 3676,
  [SMALL_STATE(121)] = 3692,
  [SMALL_STATE(122)] = 3708,
  [SMALL_STATE(123)] = 3718,
  [SMALL_STATE(124)] = 3728,
  [SMALL_STATE(125)] = 3738,
  [SMALL_STATE(126)] = 3750,
  [SMALL_STATE(127)] = 3764,
  [SMALL_STATE(128)] = 3774,
  [SMALL_STATE(129)] = 3784,
  [SMALL_STATE(130)] = 3798,
  [SMALL_STATE(131)] = 3808,
  [SMALL_STATE(132)] = 3821,
  [SMALL_STATE(133)] = 3834,
  [SMALL_STATE(134)] = 3843,
  [SMALL_STATE(135)] = 3856,
  [SMALL_STATE(136)] = 3865,
  [SMALL_STATE(137)] = 3874,
  [SMALL_STATE(138)] = 3887,
  [SMALL_STATE(139)] = 3900,
  [SMALL_STATE(140)] = 3913,
  [SMALL_STATE(141)] = 3922,
  [SMALL_STATE(142)] = 3935,
  [SMALL_STATE(143)] = 3948,
  [SMALL_STATE(144)] = 3961,
  [SMALL_STATE(145)] = 3969,
  [SMALL_STATE(146)] = 3979,
  [SMALL_STATE(147)] = 3987,
  [SMALL_STATE(148)] = 3997,
  [SMALL_STATE(149)] = 4007,
  [SMALL_STATE(150)] = 4017,
  [SMALL_STATE(151)] = 4027,
  [SMALL_STATE(152)] = 4037,
  [SMALL_STATE(153)] = 4047,
  [SMALL_STATE(154)] = 4055,
  [SMALL_STATE(155)] = 4065,
  [SMALL_STATE(156)] = 4075,
  [SMALL_STATE(157)] = 4083,
  [SMALL_STATE(158)] = 4093,
  [SMALL_STATE(159)] = 4103,
  [SMALL_STATE(160)] = 4113,
  [SMALL_STATE(161)] = 4123,
  [SMALL_STATE(162)] = 4133,
  [SMALL_STATE(163)] = 4143,
  [SMALL_STATE(164)] = 4153,
  [SMALL_STATE(165)] = 4163,
  [SMALL_STATE(166)] = 4173,
  [SMALL_STATE(167)] = 4181,
  [SMALL_STATE(168)] = 4188,
  [SMALL_STATE(169)] = 4195,
  [SMALL_STATE(170)] = 4202,
  [SMALL_STATE(171)] = 4209,
  [SMALL_STATE(172)] = 4216,
  [SMALL_STATE(173)] = 4223,
  [SMALL_STATE(174)] = 4230,
  [SMALL_STATE(175)] = 4237,
  [SMALL_STATE(176)] = 4244,
  [SMALL_STATE(177)] = 4251,
  [SMALL_STATE(178)] = 4258,
  [SMALL_STATE(179)] = 4265,
  [SMALL_STATE(180)] = 4272,
  [SMALL_STATE(181)] = 4279,
  [SMALL_STATE(182)] = 4286,
  [SMALL_STATE(183)] = 4293,
  [SMALL_STATE(184)] = 4300,
  [SMALL_STATE(185)] = 4307,
  [SMALL_STATE(186)] = 4314,
  [SMALL_STATE(187)] = 4321,
  [SMALL_STATE(188)] = 4328,
  [SMALL_STATE(189)] = 4335,
  [SMALL_STATE(190)] = 4342,
  [SMALL_STATE(191)] = 4349,
  [SMALL_STATE(192)] = 4356,
  [SMALL_STATE(193)] = 4363,
  [SMALL_STATE(194)] = 4370,
  [SMALL_STATE(195)] = 4377,
  [SMALL_STATE(196)] = 4384,
  [SMALL_STATE(197)] = 4391,
  [SMALL_STATE(198)] = 4398,
  [SMALL_STATE(199)] = 4405,
  [SMALL_STATE(200)] = 4412,
  [SMALL_STATE(201)] = 4419,
  [SMALL_STATE(202)] = 4426,
  [SMALL_STATE(203)] = 4433,
  [SMALL_STATE(204)] = 4440,
  [SMALL_STATE(205)] = 4447,
  [SMALL_STATE(206)] = 4454,
  [SMALL_STATE(207)] = 4461,
  [SMALL_STATE(208)] = 4468,
  [SMALL_STATE(209)] = 4475,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(177),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(26),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(167),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(164),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(165),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(58),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(57),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_name, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 3, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_object_literal_repeat1, 2), SHIFT_REPEAT(72),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 2, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(63),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(113),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(62),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(125),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_args, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 4, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(116),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_property_access, 2, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_literal, 3, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_method_access, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_object_literal, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ognl_method_args_repeat1, 2), SHIFT_REPEAT(64),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [614] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
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
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
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
