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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
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
  sym_th_each = 14,
  sym_th_if = 15,
  sym_th_unless = 16,
  sym_th_switch = 17,
  sym_th_case = 18,
  sym_th_object = 19,
  sym_th_with = 20,
  sym_th_attr = 21,
  sym_th_attrappend = 22,
  sym_th_attrprepend = 23,
  sym_th_text = 24,
  sym_th_utext = 25,
  sym_th_fragment = 26,
  sym_th_remove = 27,
  sym_th_inline = 28,
  sym_th_generic = 29,
  sym_attribute_value = 30,
  sym_entity = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_quoted_attribute_value_token1 = 33,
  aux_sym_quoted_attribute_value_token2 = 34,
  sym_text = 35,
  sym_true_literal = 36,
  sym_false_literal = 37,
  sym_null_literal = 38,
  aux_sym_number_literal_token1 = 39,
  anon_sym_DOT = 40,
  aux_sym_token_literal_token1 = 41,
  aux_sym_token_literal_token2 = 42,
  anon_sym_PIPE = 43,
  anon_sym_POUND = 44,
  anon_sym_TILDE = 45,
  anon_sym_DOLLAR = 46,
  anon_sym_STAR = 47,
  sym__interpreted_string_literal_basic_content = 48,
  sym_interpolated_string_literal_basic_content = 49,
  sym__escape_sequence = 50,
  sym_greater_than_2 = 51,
  sym_lesser_than_2 = 52,
  sym_greater_or_equal = 53,
  sym_greater_or_equal_2 = 54,
  sym_lesser_or_equal = 55,
  sym_lesser_or_equal_2 = 56,
  sym_equal = 57,
  sym_not_equal = 58,
  sym_equal_2 = 59,
  sym_not_equal_2 = 60,
  sym_and = 61,
  sym_or = 62,
  anon_sym_PLUS = 63,
  anon_sym_DASH = 64,
  sym_divide = 65,
  sym_modulo = 66,
  anon_sym_TILDE_LBRACE = 67,
  anon_sym_RBRACE = 68,
  anon_sym_AT_LBRACE = 69,
  anon_sym_POUND_LBRACE = 70,
  anon_sym_STAR_LBRACE = 71,
  anon_sym_DOLLAR_LBRACE = 72,
  aux_sym_url_std_expression_token1 = 73,
  anon_sym_QMARK = 74,
  anon_sym_COLON = 75,
  anon_sym_BANG = 76,
  anon_sym_LPAREN = 77,
  anon_sym_RPAREN = 78,
  sym__start_tag_name = 79,
  sym__script_start_tag_name = 80,
  sym__style_start_tag_name = 81,
  sym__end_tag_name = 82,
  sym_erroneous_end_tag_name = 83,
  sym__implicit_end_tag = 84,
  sym_raw_text = 85,
  sym_comment = 86,
  sym_document = 87,
  sym_doctype = 88,
  sym__node = 89,
  sym_element = 90,
  sym_script_element = 91,
  sym_style_element = 92,
  sym_start_tag = 93,
  sym__attributes = 94,
  sym_th_attribute = 95,
  sym_th_attribute_value = 96,
  sym_script_start_tag = 97,
  sym_style_start_tag = 98,
  sym_self_closing_tag = 99,
  sym_end_tag = 100,
  sym_erroneous_end_tag = 101,
  sym_attribute = 102,
  sym__th_generic = 103,
  sym__th_ognl_only = 104,
  sym_quoted_attribute_value = 105,
  sym__literal = 106,
  sym_number_literal = 107,
  sym_token_literal = 108,
  sym_string_literal = 109,
  sym_interpolated_string_literal = 110,
  sym__interpreted_string_literal = 111,
  sym_greater_than = 112,
  sym_lesser_than = 113,
  sym_add = 114,
  sym_substract = 115,
  sym_multiply = 116,
  sym__th_std_expression = 117,
  sym_fragment_th_std_expression = 118,
  sym_url_th_std_expression = 119,
  sym_message_th_std_expression = 120,
  sym_varselect_th_std_expression = 121,
  sym_ognl_th_std_expression = 122,
  sym_url_std_expression = 123,
  sym_message_std_expression = 124,
  sym_ternary_th_std_expression = 125,
  sym_unary_th_std_expression = 126,
  sym_parenthesized_th_std_expression = 127,
  sym_binary_th_std_expression = 128,
  sym_ognl_std_expression = 129,
  aux_sym_document_repeat1 = 130,
  aux_sym_start_tag_repeat1 = 131,
  aux_sym_token_literal_repeat1 = 132,
  aux_sym_interpolated_string_literal_repeat1 = 133,
  aux_sym__interpreted_string_literal_repeat1 = 134,
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
  [sym_th_text] = "th_text",
  [sym_th_utext] = "th_utext",
  [sym_th_fragment] = "th_fragment",
  [sym_th_remove] = "th_remove",
  [sym_th_inline] = "th_inline",
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
  [sym_ognl_std_expression] = "ognl_std_expression",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_token_literal_repeat1] = "token_literal_repeat1",
  [aux_sym_interpolated_string_literal_repeat1] = "interpolated_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
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
  [sym_th_text] = sym_th_text,
  [sym_th_utext] = sym_th_utext,
  [sym_th_fragment] = sym_th_fragment,
  [sym_th_remove] = sym_th_remove,
  [sym_th_inline] = sym_th_inline,
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
  [sym_ognl_std_expression] = sym_ognl_std_expression,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_token_literal_repeat1] = aux_sym_token_literal_repeat1,
  [aux_sym_interpolated_string_literal_repeat1] = aux_sym_interpolated_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
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
  [sym_th_text] = {
    .visible = true,
    .named = true,
  },
  [sym_th_utext] = {
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
  [sym_th_inline] = {
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
  [sym_ognl_std_expression] = {
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
  [42] = 41,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 35,
  [59] = 29,
  [60] = 32,
  [61] = 34,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 62,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 74,
  [86] = 83,
  [87] = 82,
  [88] = 84,
  [89] = 89,
  [90] = 81,
  [91] = 91,
  [92] = 80,
  [93] = 73,
  [94] = 79,
  [95] = 78,
  [96] = 77,
  [97] = 76,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 100,
  [112] = 110,
  [113] = 113,
  [114] = 103,
  [115] = 106,
  [116] = 101,
  [117] = 109,
  [118] = 113,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 123,
  [131] = 125,
  [132] = 120,
  [133] = 133,
  [134] = 133,
  [135] = 128,
  [136] = 127,
  [137] = 119,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 124,
  [143] = 139,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 147,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 149,
  [158] = 158,
  [159] = 150,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 156,
  [164] = 155,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 162,
  [169] = 161,
  [170] = 170,
  [171] = 171,
  [172] = 148,
  [173] = 167,
  [174] = 146,
  [175] = 171,
  [176] = 176,
  [177] = 166,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 160,
  [182] = 154,
  [183] = 144,
  [184] = 151,
  [185] = 152,
  [186] = 165,
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
      if (eof) ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead == '!') ADVANCE(327);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(282);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(173);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(329);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(226);
      if (lookahead == '|') ADVANCE(279);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(302);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(321);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(320);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(318);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(316);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == '!') ADVANCE(326);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(173);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '|') ADVANCE(279);
      if (lookahead == '~') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == ')') ADVANCE(329);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == ')') ADVANCE(329);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(282);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(279);
      if (lookahead == '~') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 23:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == 't') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(323);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(176);
      if (lookahead == '"') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(178);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead == '!') ADVANCE(327);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(282);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(173);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(329);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(226);
      if (lookahead == '|') ADVANCE(279);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43)
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(294);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__doctype);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_th_each);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_th_attrappend);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_th_attrprepend);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_th_text);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_th_utext);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_th_inline);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'j') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'v') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_th_generic);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'q') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'j') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'q') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'v') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'w') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'x') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'x') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_token_literal_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(321);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '{') ADVANCE(320);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_interpolated_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_greater_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_lesser_than_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_not_equal_2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_url_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 43, .external_lex_state = 2},
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
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 20, .external_lex_state = 2},
  [25] = {.lex_state = 20, .external_lex_state = 2},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 21, .external_lex_state = 2},
  [28] = {.lex_state = 20, .external_lex_state = 2},
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
  [41] = {.lex_state = 43, .external_lex_state = 3},
  [42] = {.lex_state = 43, .external_lex_state = 3},
  [43] = {.lex_state = 43, .external_lex_state = 3},
  [44] = {.lex_state = 43, .external_lex_state = 3},
  [45] = {.lex_state = 43, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 43, .external_lex_state = 3},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 43, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 22, .external_lex_state = 2},
  [54] = {.lex_state = 22, .external_lex_state = 2},
  [55] = {.lex_state = 22, .external_lex_state = 2},
  [56] = {.lex_state = 23, .external_lex_state = 2},
  [57] = {.lex_state = 23, .external_lex_state = 2},
  [58] = {.lex_state = 22, .external_lex_state = 2},
  [59] = {.lex_state = 22, .external_lex_state = 2},
  [60] = {.lex_state = 22, .external_lex_state = 2},
  [61] = {.lex_state = 22, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 4},
  [63] = {.lex_state = 24, .external_lex_state = 4},
  [64] = {.lex_state = 24, .external_lex_state = 4},
  [65] = {.lex_state = 24, .external_lex_state = 4},
  [66] = {.lex_state = 24, .external_lex_state = 4},
  [67] = {.lex_state = 24, .external_lex_state = 2},
  [68] = {.lex_state = 24, .external_lex_state = 2},
  [69] = {.lex_state = 24, .external_lex_state = 2},
  [70] = {.lex_state = 24, .external_lex_state = 2},
  [71] = {.lex_state = 24, .external_lex_state = 2},
  [72] = {.lex_state = 43, .external_lex_state = 2},
  [73] = {.lex_state = 43, .external_lex_state = 3},
  [74] = {.lex_state = 43, .external_lex_state = 3},
  [75] = {.lex_state = 43, .external_lex_state = 3},
  [76] = {.lex_state = 43, .external_lex_state = 3},
  [77] = {.lex_state = 43, .external_lex_state = 3},
  [78] = {.lex_state = 43, .external_lex_state = 3},
  [79] = {.lex_state = 43, .external_lex_state = 3},
  [80] = {.lex_state = 43, .external_lex_state = 3},
  [81] = {.lex_state = 43, .external_lex_state = 3},
  [82] = {.lex_state = 43, .external_lex_state = 3},
  [83] = {.lex_state = 43, .external_lex_state = 3},
  [84] = {.lex_state = 43, .external_lex_state = 3},
  [85] = {.lex_state = 43, .external_lex_state = 2},
  [86] = {.lex_state = 43, .external_lex_state = 2},
  [87] = {.lex_state = 43, .external_lex_state = 2},
  [88] = {.lex_state = 43, .external_lex_state = 2},
  [89] = {.lex_state = 43, .external_lex_state = 3},
  [90] = {.lex_state = 43, .external_lex_state = 2},
  [91] = {.lex_state = 43, .external_lex_state = 3},
  [92] = {.lex_state = 43, .external_lex_state = 2},
  [93] = {.lex_state = 43, .external_lex_state = 2},
  [94] = {.lex_state = 43, .external_lex_state = 2},
  [95] = {.lex_state = 43, .external_lex_state = 2},
  [96] = {.lex_state = 43, .external_lex_state = 2},
  [97] = {.lex_state = 43, .external_lex_state = 2},
  [98] = {.lex_state = 24, .external_lex_state = 4},
  [99] = {.lex_state = 25, .external_lex_state = 2},
  [100] = {.lex_state = 24, .external_lex_state = 4},
  [101] = {.lex_state = 24, .external_lex_state = 4},
  [102] = {.lex_state = 24, .external_lex_state = 2},
  [103] = {.lex_state = 24, .external_lex_state = 4},
  [104] = {.lex_state = 25, .external_lex_state = 2},
  [105] = {.lex_state = 26, .external_lex_state = 2},
  [106] = {.lex_state = 24, .external_lex_state = 4},
  [107] = {.lex_state = 25, .external_lex_state = 2},
  [108] = {.lex_state = 26, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 5},
  [110] = {.lex_state = 0, .external_lex_state = 6},
  [111] = {.lex_state = 24, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 6},
  [113] = {.lex_state = 0, .external_lex_state = 6},
  [114] = {.lex_state = 24, .external_lex_state = 2},
  [115] = {.lex_state = 24, .external_lex_state = 2},
  [116] = {.lex_state = 24, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0, .external_lex_state = 6},
  [119] = {.lex_state = 27, .external_lex_state = 2},
  [120] = {.lex_state = 28, .external_lex_state = 2},
  [121] = {.lex_state = 29, .external_lex_state = 2},
  [122] = {.lex_state = 29, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 7},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 6},
  [127] = {.lex_state = 27, .external_lex_state = 2},
  [128] = {.lex_state = 27, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 6},
  [130] = {.lex_state = 0, .external_lex_state = 7},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 28, .external_lex_state = 2},
  [133] = {.lex_state = 27, .external_lex_state = 2},
  [134] = {.lex_state = 27, .external_lex_state = 2},
  [135] = {.lex_state = 27, .external_lex_state = 2},
  [136] = {.lex_state = 27, .external_lex_state = 2},
  [137] = {.lex_state = 27, .external_lex_state = 2},
  [138] = {.lex_state = 27, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 6},
  [141] = {.lex_state = 0, .external_lex_state = 6},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 30, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 43, .external_lex_state = 2},
  [148] = {.lex_state = 31, .external_lex_state = 2},
  [149] = {.lex_state = 43, .external_lex_state = 2},
  [150] = {.lex_state = 43, .external_lex_state = 2},
  [151] = {.lex_state = 19, .external_lex_state = 2},
  [152] = {.lex_state = 19, .external_lex_state = 2},
  [153] = {.lex_state = 43, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 43, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 43, .external_lex_state = 2},
  [160] = {.lex_state = 20, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 9},
  [172] = {.lex_state = 31, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 8},
  [175] = {.lex_state = 0, .external_lex_state = 9},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 20, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 19, .external_lex_state = 2},
  [185] = {.lex_state = 19, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_th_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym_th_insert] = ACTIONS(1),
    [sym_th_replace] = ACTIONS(1),
    [sym_th_each] = ACTIONS(1),
    [sym_th_if] = ACTIONS(1),
    [sym_th_unless] = ACTIONS(1),
    [sym_th_switch] = ACTIONS(1),
    [sym_th_case] = ACTIONS(1),
    [sym_th_object] = ACTIONS(1),
    [sym_th_with] = ACTIONS(1),
    [sym_th_attr] = ACTIONS(1),
    [sym_th_attrappend] = ACTIONS(1),
    [sym_th_attrprepend] = ACTIONS(1),
    [sym_th_text] = ACTIONS(1),
    [sym_th_utext] = ACTIONS(1),
    [sym_th_fragment] = ACTIONS(1),
    [sym_th_remove] = ACTIONS(1),
    [sym_th_inline] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_true_literal] = ACTIONS(1),
    [sym_false_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_token_literal_token1] = ACTIONS(1),
    [aux_sym_token_literal_token2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_greater_than_2] = ACTIONS(1),
    [sym_lesser_than_2] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_greater_or_equal_2] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal_2] = ACTIONS(1),
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
    [sym_document] = STATE(158),
    [sym_doctype] = STATE(45),
    [sym__node] = STATE(45),
    [sym_element] = STATE(45),
    [sym_script_element] = STATE(45),
    [sym_style_element] = STATE(45),
    [sym_start_tag] = STATE(43),
    [sym_script_start_tag] = STATE(118),
    [sym_style_start_tag] = STATE(110),
    [sym_self_closing_tag] = STATE(93),
    [sym_erroneous_end_tag] = STATE(45),
    [aux_sym_document_repeat1] = STATE(45),
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    STATE(186), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(22), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    STATE(165), 1,
      sym_th_attribute_value,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(17), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(22), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(43), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(15), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(45), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(25), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(47), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(14), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(49), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(17), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(51), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(18), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(53), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(19), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(55), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(21), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(57), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(20), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(59), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(24), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(23), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(33), 2,
      sym_interpolated_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(61), 3,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
    STATE(16), 14,
      sym__literal,
      sym_number_literal,
      sym_token_literal,
      sym_string_literal,
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
    STATE(8), 1,
      sym_multiply,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
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
  [912] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_QMARK,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(71), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [974] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(91), 10,
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
  [1028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(91), 18,
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
  [1074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(91), 21,
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
  [1116] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(91), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1174] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(91), 16,
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
  [1224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(91), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1280] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_token_literal_token1,
    ACTIONS(101), 1,
      aux_sym_token_literal_token2,
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(97), 11,
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
    ACTIONS(99), 12,
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
  [1380] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1440] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      sym_and,
    ACTIONS(81), 1,
      sym_or,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_QMARK,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_multiply,
    ACTIONS(87), 2,
      sym_divide,
      sym_modulo,
    STATE(7), 2,
      sym_add,
      sym_substract,
    STATE(11), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(77), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(75), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [1500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_token_literal_token1,
    ACTIONS(114), 1,
      aux_sym_token_literal_token2,
    STATE(26), 1,
      aux_sym_token_literal_repeat1,
    ACTIONS(107), 11,
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
    ACTIONS(109), 12,
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
  [1540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 12,
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
    ACTIONS(107), 13,
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
  [1573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(117), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 21,
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
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 21,
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
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 21,
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
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 21,
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
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 21,
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
  [1731] = 3,
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
  [1762] = 3,
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
  [1793] = 3,
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
  [1824] = 3,
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
  [1855] = 3,
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
  [1886] = 3,
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
  [1917] = 3,
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
  [1948] = 3,
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
  [1979] = 12,
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
    STATE(44), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(94), 1,
      sym_end_tag,
    STATE(112), 1,
      sym_style_start_tag,
    STATE(113), 1,
      sym_script_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(47), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2023] = 12,
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
    STATE(44), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(79), 1,
      sym_end_tag,
    STATE(112), 1,
      sym_style_start_tag,
    STATE(113), 1,
      sym_script_start_tag,
    ACTIONS(177), 2,
      sym_entity,
      sym_text,
    STATE(47), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2067] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_LT_SLASH,
    ACTIONS(187), 1,
      sym__implicit_end_tag,
    STATE(44), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(88), 1,
      sym_end_tag,
    STATE(112), 1,
      sym_style_start_tag,
    STATE(113), 1,
      sym_script_start_tag,
    ACTIONS(185), 2,
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
  [2111] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LT_BANG,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym__implicit_end_tag,
    STATE(44), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(84), 1,
      sym_end_tag,
    STATE(112), 1,
      sym_style_start_tag,
    STATE(113), 1,
      sym_script_start_tag,
    ACTIONS(189), 2,
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
  [2155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_start_tag,
    STATE(93), 1,
      sym_self_closing_tag,
    STATE(110), 1,
      sym_style_start_tag,
    STATE(118), 1,
      sym_script_start_tag,
    ACTIONS(195), 2,
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
  [2196] = 3,
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
  [2221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_BANG,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    ACTIONS(213), 1,
      sym__implicit_end_tag,
    STATE(44), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(112), 1,
      sym_style_start_tag,
    STATE(113), 1,
      sym_script_start_tag,
    ACTIONS(210), 2,
      sym_entity,
      sym_text,
    STATE(47), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [2262] = 3,
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
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(219), 11,
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
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 6,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      aux_sym_token_literal_token1,
      aux_sym_token_literal_token2,
      anon_sym_DASH,
    ACTIONS(223), 11,
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
  [2337] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      anon_sym_LT_BANG,
    ACTIONS(230), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_LT_SLASH,
    STATE(43), 1,
      sym_start_tag,
    STATE(93), 1,
      sym_self_closing_tag,
    STATE(110), 1,
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
  [2378] = 3,
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
  [2403] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(249), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(251), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(253), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 4,
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
  [2438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    ACTIONS(262), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(271), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 4,
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
  [2473] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(251), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(253), 1,
      anon_sym_STAR_LBRACE,
    ACTIONS(255), 1,
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
    STATE(53), 5,
      sym_url_th_std_expression,
      sym_message_th_std_expression,
      sym_varselect_th_std_expression,
      sym_ognl_th_std_expression,
      aux_sym_interpolated_string_literal_repeat1,
  [2508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(184), 1,
      sym__th_generic,
    STATE(185), 1,
      sym__th_ognl_only,
    ACTIONS(285), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(283), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [2533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym__th_generic,
    STATE(152), 1,
      sym__th_ognl_only,
    ACTIONS(289), 2,
      sym_th_object,
      sym_th_with,
    ACTIONS(287), 9,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
      sym_th_generic,
  [2558] = 3,
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
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(123), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_interpolated_string_literal_basic_content,
    ACTIONS(135), 9,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_AT_LBRACE,
      anon_sym_POUND_LBRACE,
      anon_sym_STAR_LBRACE,
      anon_sym_DOLLAR_LBRACE,
  [2612] = 3,
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
  [2630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_th_COLON,
    ACTIONS(296), 1,
      sym_attribute_name,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(62), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2650] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(301), 1,
      anon_sym_th_COLON,
    ACTIONS(303), 1,
      anon_sym_SLASH_GT,
    ACTIONS(305), 1,
      sym_attribute_name,
    STATE(62), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_th_COLON,
    ACTIONS(305), 1,
      sym_attribute_name,
    ACTIONS(307), 1,
      anon_sym_GT,
    ACTIONS(309), 1,
      anon_sym_SLASH_GT,
    STATE(63), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_th_COLON,
    ACTIONS(305), 1,
      sym_attribute_name,
    ACTIONS(307), 1,
      anon_sym_GT,
    ACTIONS(311), 1,
      anon_sym_SLASH_GT,
    STATE(66), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(301), 1,
      anon_sym_th_COLON,
    ACTIONS(305), 1,
      sym_attribute_name,
    ACTIONS(313), 1,
      anon_sym_SLASH_GT,
    STATE(62), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_GT,
    ACTIONS(317), 1,
      anon_sym_th_COLON,
    ACTIONS(319), 1,
      sym_attribute_name,
    STATE(70), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_th_COLON,
    ACTIONS(319), 1,
      sym_attribute_name,
    ACTIONS(321), 1,
      anon_sym_GT,
    STATE(69), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_th_COLON,
    ACTIONS(319), 1,
      sym_attribute_name,
    ACTIONS(323), 1,
      anon_sym_GT,
    STATE(71), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_th_COLON,
    ACTIONS(319), 1,
      sym_attribute_name,
    ACTIONS(325), 1,
      anon_sym_GT,
    STATE(71), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_GT,
    ACTIONS(327), 1,
      anon_sym_th_COLON,
    ACTIONS(330), 1,
      sym_attribute_name,
    STATE(71), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LT,
    ACTIONS(337), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(341), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(333), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(345), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2903] = 3,
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
  [2917] = 3,
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
  [2931] = 3,
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
  [2945] = 3,
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
  [2959] = 3,
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
  [2973] = 3,
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
  [2987] = 3,
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
  [3001] = 3,
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
  [3015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(341), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3029] = 3,
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
  [3043] = 3,
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
  [3057] = 3,
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
  [3071] = 3,
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
  [3085] = 3,
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
  [3099] = 3,
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
  [3113] = 3,
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
  [3127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LT,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3141] = 3,
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
  [3155] = 3,
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
  [3169] = 3,
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
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(345), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_EQ,
    ACTIONS(389), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(395), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(389), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(408), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      sym_attribute_value,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_quoted_attribute_value,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [3306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(420), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [3320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      sym_attribute_value,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_quoted_attribute_value,
  [3336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__start_tag_name,
    ACTIONS(430), 1,
      sym__script_start_tag_name,
    ACTIONS(432), 1,
      sym__style_start_tag_name,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LT_SLASH,
    ACTIONS(436), 1,
      sym_raw_text,
    STATE(87), 1,
      sym_end_tag,
  [3362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LT_SLASH,
    ACTIONS(440), 1,
      sym_raw_text,
    STATE(82), 1,
      sym_end_tag,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LT_SLASH,
    ACTIONS(442), 1,
      sym_raw_text,
    STATE(83), 1,
      sym_end_tag,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__script_start_tag_name,
    ACTIONS(432), 1,
      sym__style_start_tag_name,
    ACTIONS(444), 1,
      sym__start_tag_name,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LT_SLASH,
    ACTIONS(446), 1,
      sym_raw_text,
    STATE(86), 1,
      sym_end_tag,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_url_std_expression_token1,
    STATE(166), 1,
      sym_url_std_expression,
  [3460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      aux_sym_quoted_attribute_value_token2,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      aux_sym_quoted_attribute_value_token1,
  [3480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      aux_sym_quoted_attribute_value_token1,
  [3490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__end_tag_name,
    ACTIONS(462), 1,
      sym_erroneous_end_tag_name,
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LT_SLASH,
    STATE(96), 1,
      sym_end_tag,
  [3510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(165), 1,
      sym_ognl_th_std_expression,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_url_std_expression_token1,
    STATE(167), 1,
      sym_message_std_expression,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_url_std_expression_token1,
    STATE(168), 1,
      sym_ognl_std_expression,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(472), 1,
      sym__end_tag_name,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(186), 1,
      sym_ognl_th_std_expression,
  [3576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      aux_sym_quoted_attribute_value_token2,
  [3586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_url_std_expression_token1,
    STATE(169), 1,
      sym_ognl_std_expression,
  [3596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_url_std_expression_token1,
    STATE(161), 1,
      sym_ognl_std_expression,
  [3606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_url_std_expression_token1,
    STATE(162), 1,
      sym_ognl_std_expression,
  [3616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym_url_std_expression_token1,
    STATE(173), 1,
      sym_message_std_expression,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_url_std_expression_token1,
    STATE(177), 1,
      sym_url_std_expression,
  [3636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_url_std_expression_token1,
    STATE(178), 1,
      sym_url_std_expression,
  [3646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LT_SLASH,
    STATE(95), 1,
      sym_end_tag,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LT_SLASH,
    STATE(77), 1,
      sym_end_tag,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LT_SLASH,
    STATE(78), 1,
      sym_end_tag,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [3699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_token_literal_token2,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym__end_tag_name,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_GT,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym_doctype_token1,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_GT,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_GT,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_GT,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_GT,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_GT,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__doctype,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SQUOTE,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_erroneous_end_tag_name,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_doctype_token1,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__end_tag_name,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_erroneous_end_tag_name,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_number_literal_token1,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__doctype,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_EQ,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_EQ,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
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
  [SMALL_STATE(16)] = 974,
  [SMALL_STATE(17)] = 1028,
  [SMALL_STATE(18)] = 1074,
  [SMALL_STATE(19)] = 1116,
  [SMALL_STATE(20)] = 1174,
  [SMALL_STATE(21)] = 1224,
  [SMALL_STATE(22)] = 1280,
  [SMALL_STATE(23)] = 1340,
  [SMALL_STATE(24)] = 1380,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1500,
  [SMALL_STATE(27)] = 1540,
  [SMALL_STATE(28)] = 1573,
  [SMALL_STATE(29)] = 1607,
  [SMALL_STATE(30)] = 1638,
  [SMALL_STATE(31)] = 1669,
  [SMALL_STATE(32)] = 1700,
  [SMALL_STATE(33)] = 1731,
  [SMALL_STATE(34)] = 1762,
  [SMALL_STATE(35)] = 1793,
  [SMALL_STATE(36)] = 1824,
  [SMALL_STATE(37)] = 1855,
  [SMALL_STATE(38)] = 1886,
  [SMALL_STATE(39)] = 1917,
  [SMALL_STATE(40)] = 1948,
  [SMALL_STATE(41)] = 1979,
  [SMALL_STATE(42)] = 2023,
  [SMALL_STATE(43)] = 2067,
  [SMALL_STATE(44)] = 2111,
  [SMALL_STATE(45)] = 2155,
  [SMALL_STATE(46)] = 2196,
  [SMALL_STATE(47)] = 2221,
  [SMALL_STATE(48)] = 2262,
  [SMALL_STATE(49)] = 2287,
  [SMALL_STATE(50)] = 2312,
  [SMALL_STATE(51)] = 2337,
  [SMALL_STATE(52)] = 2378,
  [SMALL_STATE(53)] = 2403,
  [SMALL_STATE(54)] = 2438,
  [SMALL_STATE(55)] = 2473,
  [SMALL_STATE(56)] = 2508,
  [SMALL_STATE(57)] = 2533,
  [SMALL_STATE(58)] = 2558,
  [SMALL_STATE(59)] = 2576,
  [SMALL_STATE(60)] = 2594,
  [SMALL_STATE(61)] = 2612,
  [SMALL_STATE(62)] = 2630,
  [SMALL_STATE(63)] = 2650,
  [SMALL_STATE(64)] = 2672,
  [SMALL_STATE(65)] = 2694,
  [SMALL_STATE(66)] = 2716,
  [SMALL_STATE(67)] = 2738,
  [SMALL_STATE(68)] = 2757,
  [SMALL_STATE(69)] = 2776,
  [SMALL_STATE(70)] = 2795,
  [SMALL_STATE(71)] = 2814,
  [SMALL_STATE(72)] = 2833,
  [SMALL_STATE(73)] = 2847,
  [SMALL_STATE(74)] = 2861,
  [SMALL_STATE(75)] = 2875,
  [SMALL_STATE(76)] = 2889,
  [SMALL_STATE(77)] = 2903,
  [SMALL_STATE(78)] = 2917,
  [SMALL_STATE(79)] = 2931,
  [SMALL_STATE(80)] = 2945,
  [SMALL_STATE(81)] = 2959,
  [SMALL_STATE(82)] = 2973,
  [SMALL_STATE(83)] = 2987,
  [SMALL_STATE(84)] = 3001,
  [SMALL_STATE(85)] = 3015,
  [SMALL_STATE(86)] = 3029,
  [SMALL_STATE(87)] = 3043,
  [SMALL_STATE(88)] = 3057,
  [SMALL_STATE(89)] = 3071,
  [SMALL_STATE(90)] = 3085,
  [SMALL_STATE(91)] = 3099,
  [SMALL_STATE(92)] = 3113,
  [SMALL_STATE(93)] = 3127,
  [SMALL_STATE(94)] = 3141,
  [SMALL_STATE(95)] = 3155,
  [SMALL_STATE(96)] = 3169,
  [SMALL_STATE(97)] = 3183,
  [SMALL_STATE(98)] = 3197,
  [SMALL_STATE(99)] = 3210,
  [SMALL_STATE(100)] = 3224,
  [SMALL_STATE(101)] = 3234,
  [SMALL_STATE(102)] = 3244,
  [SMALL_STATE(103)] = 3256,
  [SMALL_STATE(104)] = 3266,
  [SMALL_STATE(105)] = 3280,
  [SMALL_STATE(106)] = 3296,
  [SMALL_STATE(107)] = 3306,
  [SMALL_STATE(108)] = 3320,
  [SMALL_STATE(109)] = 3336,
  [SMALL_STATE(110)] = 3349,
  [SMALL_STATE(111)] = 3362,
  [SMALL_STATE(112)] = 3371,
  [SMALL_STATE(113)] = 3384,
  [SMALL_STATE(114)] = 3397,
  [SMALL_STATE(115)] = 3406,
  [SMALL_STATE(116)] = 3415,
  [SMALL_STATE(117)] = 3424,
  [SMALL_STATE(118)] = 3437,
  [SMALL_STATE(119)] = 3450,
  [SMALL_STATE(120)] = 3460,
  [SMALL_STATE(121)] = 3470,
  [SMALL_STATE(122)] = 3480,
  [SMALL_STATE(123)] = 3490,
  [SMALL_STATE(124)] = 3500,
  [SMALL_STATE(125)] = 3510,
  [SMALL_STATE(126)] = 3520,
  [SMALL_STATE(127)] = 3528,
  [SMALL_STATE(128)] = 3538,
  [SMALL_STATE(129)] = 3548,
  [SMALL_STATE(130)] = 3556,
  [SMALL_STATE(131)] = 3566,
  [SMALL_STATE(132)] = 3576,
  [SMALL_STATE(133)] = 3586,
  [SMALL_STATE(134)] = 3596,
  [SMALL_STATE(135)] = 3606,
  [SMALL_STATE(136)] = 3616,
  [SMALL_STATE(137)] = 3626,
  [SMALL_STATE(138)] = 3636,
  [SMALL_STATE(139)] = 3646,
  [SMALL_STATE(140)] = 3656,
  [SMALL_STATE(141)] = 3664,
  [SMALL_STATE(142)] = 3672,
  [SMALL_STATE(143)] = 3682,
  [SMALL_STATE(144)] = 3692,
  [SMALL_STATE(145)] = 3699,
  [SMALL_STATE(146)] = 3706,
  [SMALL_STATE(147)] = 3713,
  [SMALL_STATE(148)] = 3720,
  [SMALL_STATE(149)] = 3727,
  [SMALL_STATE(150)] = 3734,
  [SMALL_STATE(151)] = 3741,
  [SMALL_STATE(152)] = 3748,
  [SMALL_STATE(153)] = 3755,
  [SMALL_STATE(154)] = 3762,
  [SMALL_STATE(155)] = 3769,
  [SMALL_STATE(156)] = 3776,
  [SMALL_STATE(157)] = 3783,
  [SMALL_STATE(158)] = 3790,
  [SMALL_STATE(159)] = 3797,
  [SMALL_STATE(160)] = 3804,
  [SMALL_STATE(161)] = 3811,
  [SMALL_STATE(162)] = 3818,
  [SMALL_STATE(163)] = 3825,
  [SMALL_STATE(164)] = 3832,
  [SMALL_STATE(165)] = 3839,
  [SMALL_STATE(166)] = 3846,
  [SMALL_STATE(167)] = 3853,
  [SMALL_STATE(168)] = 3860,
  [SMALL_STATE(169)] = 3867,
  [SMALL_STATE(170)] = 3874,
  [SMALL_STATE(171)] = 3881,
  [SMALL_STATE(172)] = 3888,
  [SMALL_STATE(173)] = 3895,
  [SMALL_STATE(174)] = 3902,
  [SMALL_STATE(175)] = 3909,
  [SMALL_STATE(176)] = 3916,
  [SMALL_STATE(177)] = 3923,
  [SMALL_STATE(178)] = 3930,
  [SMALL_STATE(179)] = 3937,
  [SMALL_STATE(180)] = 3944,
  [SMALL_STATE(181)] = 3951,
  [SMALL_STATE(182)] = 3958,
  [SMALL_STATE(183)] = 3965,
  [SMALL_STATE(184)] = 3972,
  [SMALL_STATE(185)] = 3979,
  [SMALL_STATE(186)] = 3986,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_literal_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(145),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_token_literal_repeat1, 2), SHIFT_REPEAT(26),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varselect_th_std_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varselect_th_std_expression, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_th_std_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_th_std_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_th_std_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_th_std_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment_th_std_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment_th_std_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_string_literal, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_literal, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiply, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(54),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(54),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(119),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(127),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(128),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_literal_repeat1, 2), SHIFT_REPEAT(133),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(57),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(98),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(56),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(102),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(99),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [504] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_std_expression, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_std_expression, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_std_expression, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
