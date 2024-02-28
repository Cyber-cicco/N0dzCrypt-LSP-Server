#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_each = 12,
  anon_sym_text = 13,
  anon_sym_utext = 14,
  anon_sym_inline = 15,
  aux_sym_th_attribute_name_token1 = 16,
  sym_th_insert = 17,
  sym_th_replace = 18,
  sym_th_if = 19,
  sym_th_unless = 20,
  sym_th_switch = 21,
  sym_th_case = 22,
  sym_th_object = 23,
  sym_th_with = 24,
  sym_th_attr = 25,
  sym_th_attrappend = 26,
  sym_th_attrprepend = 27,
  sym_th_fragment = 28,
  sym_th_remove = 29,
  sym_attribute_value = 30,
  sym_entity = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_quoted_attribute_value_token1 = 33,
  aux_sym_quoted_attribute_value_token2 = 34,
  sym_text = 35,
  sym_true_literal = 36,
  sym_false_literal = 37,
  sym_null_literal = 38,
  sym_number_literal = 39,
  sym_token_literal = 40,
  sym__interpreted_string_literal_basic_content = 41,
  sym__escape_sequence = 42,
  sym_greater_than_2 = 43,
  sym_lesser_than_2 = 44,
  sym_greater_or_equal = 45,
  sym_greater_or_equal_2 = 46,
  sym_lesser_or_equal = 47,
  sym_lesser_or_equal_2 = 48,
  sym_equal = 49,
  sym_not_equal = 50,
  sym_equal_2 = 51,
  sym_not_equal_2 = 52,
  sym_and = 53,
  sym_or = 54,
  sym_add = 55,
  sym_substract = 56,
  sym_multiply = 57,
  sym_divide = 58,
  sym_modulo = 59,
  anon_sym_DOLLAR_LBRACE = 60,
  anon_sym_RBRACE = 61,
  aux_sym_ognl_std_expression_token1 = 62,
  anon_sym_QMARK = 63,
  anon_sym_COLON = 64,
  anon_sym_LPAREN = 65,
  anon_sym_RPAREN = 66,
  sym__start_tag_name = 67,
  sym__script_start_tag_name = 68,
  sym__style_start_tag_name = 69,
  sym__end_tag_name = 70,
  sym_erroneous_end_tag_name = 71,
  sym__implicit_end_tag = 72,
  sym_raw_text = 73,
  sym_comment = 74,
  sym_document = 75,
  sym_doctype = 76,
  sym__node = 77,
  sym_element = 78,
  sym_script_element = 79,
  sym_style_element = 80,
  sym_start_tag = 81,
  sym__attributes = 82,
  sym_th_attribute = 83,
  sym_th_attribute_value = 84,
  sym_script_start_tag = 85,
  sym_style_start_tag = 86,
  sym_self_closing_tag = 87,
  sym_end_tag = 88,
  sym_erroneous_end_tag = 89,
  sym_attribute = 90,
  sym__th_generic = 91,
  sym__th_ognl_only = 92,
  sym_th_generic = 93,
  sym_quoted_attribute_value = 94,
  sym__literal = 95,
  sym_string_literal = 96,
  sym__interpreted_string_literal = 97,
  sym_greater_than = 98,
  sym_lesser_than = 99,
  sym__th_std_expression = 100,
  sym_ognl_th_std_expression = 101,
  sym_ognl_std_expression = 102,
  sym_ternary_th_std_expression = 103,
  sym_parenthesized_th_std_expression = 104,
  sym_binary_th_std_expression = 105,
  aux_sym_document_repeat1 = 106,
  aux_sym_start_tag_repeat1 = 107,
  aux_sym__interpreted_string_literal_repeat1 = 108,
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
  [anon_sym_each] = "each",
  [anon_sym_text] = "text",
  [anon_sym_utext] = "utext",
  [anon_sym_inline] = "inline",
  [aux_sym_th_attribute_name_token1] = "th_attribute_name_token1",
  [sym_th_insert] = "th_insert",
  [sym_th_replace] = "th_replace",
  [sym_th_if] = "th_if",
  [sym_th_unless] = "th_unless",
  [sym_th_switch] = "th_switch",
  [sym_th_case] = "th_case",
  [sym_th_object] = "th_object",
  [sym_th_with] = "th_with",
  [sym_th_attr] = "th_attr",
  [sym_th_attrappend] = "th_attrappend",
  [sym_th_attrprepend] = "th_attrprepend",
  [sym_th_fragment] = "th_fragment",
  [sym_th_remove] = "th_remove",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [sym_null_literal] = "null_literal",
  [sym_number_literal] = "number_literal",
  [sym_token_literal] = "token_literal",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
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
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_ognl_std_expression_token1] = "ognl_std_expression_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
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
  [sym_th_generic] = "th_generic",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym__th_std_expression] = "_th_std_expression",
  [sym_ognl_th_std_expression] = "ognl_th_std_expression",
  [sym_ognl_std_expression] = "ognl_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_parenthesized_th_std_expression] = "parenthesized_th_std_expression",
  [sym_binary_th_std_expression] = "binary_th_std_expression",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
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
  [anon_sym_each] = anon_sym_each,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_utext] = anon_sym_utext,
  [anon_sym_inline] = anon_sym_inline,
  [aux_sym_th_attribute_name_token1] = aux_sym_th_attribute_name_token1,
  [sym_th_insert] = sym_th_insert,
  [sym_th_replace] = sym_th_replace,
  [sym_th_if] = sym_th_if,
  [sym_th_unless] = sym_th_unless,
  [sym_th_switch] = sym_th_switch,
  [sym_th_case] = sym_th_case,
  [sym_th_object] = sym_th_object,
  [sym_th_with] = sym_th_with,
  [sym_th_attr] = sym_th_attr,
  [sym_th_attrappend] = sym_th_attrappend,
  [sym_th_attrprepend] = sym_th_attrprepend,
  [sym_th_fragment] = sym_th_fragment,
  [sym_th_remove] = sym_th_remove,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [sym_null_literal] = sym_null_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_token_literal] = sym_token_literal,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
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
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_modulo] = sym_modulo,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_ognl_std_expression_token1] = aux_sym_ognl_std_expression_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_th_generic] = sym_th_generic,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym__th_std_expression] = sym__th_std_expression,
  [sym_ognl_th_std_expression] = sym_ognl_th_std_expression,
  [sym_ognl_std_expression] = sym_ognl_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_parenthesized_th_std_expression] = sym_parenthesized_th_std_expression,
  [sym_binary_th_std_expression] = sym_binary_th_std_expression,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
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
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_th_attribute_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_th_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_th_remove] = {
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_token_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
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
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ognl_std_expression_token1] = {
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
  [sym_string_literal] = {
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
  [sym__th_std_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ognl_th_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ognl_std_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_th_std_expression] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
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
  field_condition = 2,
  field_consequence = 3,
  field_left = 4,
  field_operator = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
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
  [3] = 3,
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
  [19] = 17,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 21,
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
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 38,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 60,
  [65] = 62,
  [66] = 61,
  [67] = 54,
  [68] = 59,
  [69] = 49,
  [70] = 70,
  [71] = 63,
  [72] = 70,
  [73] = 55,
  [74] = 50,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 75,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 81,
  [89] = 87,
  [90] = 82,
  [91] = 86,
  [92] = 76,
  [93] = 93,
  [94] = 93,
  [95] = 78,
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
  [106] = 98,
  [107] = 103,
  [108] = 99,
  [109] = 97,
  [110] = 105,
  [111] = 101,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 117,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 121,
  [130] = 122,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 128,
  [135] = 135,
  [136] = 136,
  [137] = 133,
  [138] = 136,
  [139] = 114,
  [140] = 116,
  [141] = 115,
  [142] = 132,
  [143] = 120,
  [144] = 125,
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
      if (eof) ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(112)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == '?') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(112)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(276);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(278);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'j') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'q') ADVANCE(278);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == '{') ADVANCE(288);
      END_STATE();
    case 92:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(92)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == '?') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92)
      END_STATE();
    case 93:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(93)
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 't') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 94:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(94)
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 95:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(95)
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == 't') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(130);
      END_STATE();
    case 96:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(96)
      if (lookahead == '\'') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(96)
      END_STATE();
    case 97:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(97)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 99:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(245);
      if (lookahead == '"') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 100:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 101:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 108:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 109:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(247);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 112:
      if (eof) ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(112)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == '?') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(112)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(113)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '>') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(113)
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(272);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(276);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_utext);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_th_insert);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_th_replace);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_th_if);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_th_unless);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_th_switch);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_th_case);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_th_object);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_th_with);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_th_attrappend);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_th_attrprepend);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_th_fragment);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_th_remove);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(177);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\r') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ognl_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ognl_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 113, .external_lex_state = 2},
  [2] = {.lex_state = 92, .external_lex_state = 2},
  [3] = {.lex_state = 92, .external_lex_state = 2},
  [4] = {.lex_state = 92, .external_lex_state = 2},
  [5] = {.lex_state = 92, .external_lex_state = 2},
  [6] = {.lex_state = 92, .external_lex_state = 2},
  [7] = {.lex_state = 92, .external_lex_state = 2},
  [8] = {.lex_state = 92, .external_lex_state = 2},
  [9] = {.lex_state = 92, .external_lex_state = 2},
  [10] = {.lex_state = 92, .external_lex_state = 2},
  [11] = {.lex_state = 92, .external_lex_state = 2},
  [12] = {.lex_state = 92, .external_lex_state = 2},
  [13] = {.lex_state = 92, .external_lex_state = 2},
  [14] = {.lex_state = 92, .external_lex_state = 2},
  [15] = {.lex_state = 92, .external_lex_state = 2},
  [16] = {.lex_state = 92, .external_lex_state = 2},
  [17] = {.lex_state = 113, .external_lex_state = 3},
  [18] = {.lex_state = 113, .external_lex_state = 3},
  [19] = {.lex_state = 113, .external_lex_state = 3},
  [20] = {.lex_state = 113, .external_lex_state = 3},
  [21] = {.lex_state = 113, .external_lex_state = 3},
  [22] = {.lex_state = 93, .external_lex_state = 2},
  [23] = {.lex_state = 113, .external_lex_state = 2},
  [24] = {.lex_state = 93, .external_lex_state = 2},
  [25] = {.lex_state = 113, .external_lex_state = 2},
  [26] = {.lex_state = 93, .external_lex_state = 2},
  [27] = {.lex_state = 93, .external_lex_state = 2},
  [28] = {.lex_state = 93, .external_lex_state = 2},
  [29] = {.lex_state = 93, .external_lex_state = 2},
  [30] = {.lex_state = 93, .external_lex_state = 2},
  [31] = {.lex_state = 93, .external_lex_state = 2},
  [32] = {.lex_state = 93, .external_lex_state = 2},
  [33] = {.lex_state = 93, .external_lex_state = 2},
  [34] = {.lex_state = 93, .external_lex_state = 2},
  [35] = {.lex_state = 94, .external_lex_state = 2},
  [36] = {.lex_state = 94, .external_lex_state = 2},
  [37] = {.lex_state = 93, .external_lex_state = 2},
  [38] = {.lex_state = 95, .external_lex_state = 4},
  [39] = {.lex_state = 93, .external_lex_state = 2},
  [40] = {.lex_state = 95, .external_lex_state = 4},
  [41] = {.lex_state = 95, .external_lex_state = 4},
  [42] = {.lex_state = 95, .external_lex_state = 4},
  [43] = {.lex_state = 95, .external_lex_state = 4},
  [44] = {.lex_state = 95, .external_lex_state = 2},
  [45] = {.lex_state = 95, .external_lex_state = 2},
  [46] = {.lex_state = 95, .external_lex_state = 2},
  [47] = {.lex_state = 95, .external_lex_state = 2},
  [48] = {.lex_state = 95, .external_lex_state = 2},
  [49] = {.lex_state = 113, .external_lex_state = 3},
  [50] = {.lex_state = 113, .external_lex_state = 2},
  [51] = {.lex_state = 113, .external_lex_state = 3},
  [52] = {.lex_state = 113, .external_lex_state = 3},
  [53] = {.lex_state = 113, .external_lex_state = 2},
  [54] = {.lex_state = 113, .external_lex_state = 2},
  [55] = {.lex_state = 113, .external_lex_state = 2},
  [56] = {.lex_state = 113, .external_lex_state = 2},
  [57] = {.lex_state = 113, .external_lex_state = 3},
  [58] = {.lex_state = 113, .external_lex_state = 3},
  [59] = {.lex_state = 113, .external_lex_state = 3},
  [60] = {.lex_state = 113, .external_lex_state = 2},
  [61] = {.lex_state = 113, .external_lex_state = 3},
  [62] = {.lex_state = 113, .external_lex_state = 3},
  [63] = {.lex_state = 113, .external_lex_state = 2},
  [64] = {.lex_state = 113, .external_lex_state = 3},
  [65] = {.lex_state = 113, .external_lex_state = 2},
  [66] = {.lex_state = 113, .external_lex_state = 2},
  [67] = {.lex_state = 113, .external_lex_state = 3},
  [68] = {.lex_state = 113, .external_lex_state = 2},
  [69] = {.lex_state = 113, .external_lex_state = 2},
  [70] = {.lex_state = 113, .external_lex_state = 2},
  [71] = {.lex_state = 113, .external_lex_state = 3},
  [72] = {.lex_state = 113, .external_lex_state = 3},
  [73] = {.lex_state = 113, .external_lex_state = 3},
  [74] = {.lex_state = 113, .external_lex_state = 3},
  [75] = {.lex_state = 95, .external_lex_state = 4},
  [76] = {.lex_state = 95, .external_lex_state = 4},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 95, .external_lex_state = 4},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 95, .external_lex_state = 2},
  [81] = {.lex_state = 95, .external_lex_state = 4},
  [82] = {.lex_state = 95, .external_lex_state = 4},
  [83] = {.lex_state = 97, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 97, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 95, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 95, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 95, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 95, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 5},
  [97] = {.lex_state = 0, .external_lex_state = 7},
  [98] = {.lex_state = 98, .external_lex_state = 2},
  [99] = {.lex_state = 99, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 5},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 100, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 98, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 99, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 113, .external_lex_state = 2},
  [118] = {.lex_state = 113, .external_lex_state = 2},
  [119] = {.lex_state = 113, .external_lex_state = 2},
  [120] = {.lex_state = 93, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 113, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 113, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 101, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 93, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 8},
  [134] = {.lex_state = 101, .external_lex_state = 2},
  [135] = {.lex_state = 93, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 0, .external_lex_state = 9},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 93, .external_lex_state = 2},
  [143] = {.lex_state = 93, .external_lex_state = 2},
  [144] = {.lex_state = 113, .external_lex_state = 2},
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
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_utext] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [sym_th_insert] = ACTIONS(1),
    [sym_th_replace] = ACTIONS(1),
    [sym_th_if] = ACTIONS(1),
    [sym_th_unless] = ACTIONS(1),
    [sym_th_switch] = ACTIONS(1),
    [sym_th_case] = ACTIONS(1),
    [sym_th_object] = ACTIONS(1),
    [sym_th_with] = ACTIONS(1),
    [sym_th_attr] = ACTIONS(1),
    [sym_th_attrappend] = ACTIONS(1),
    [sym_th_attrprepend] = ACTIONS(1),
    [sym_th_fragment] = ACTIONS(1),
    [sym_th_remove] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_true_literal] = ACTIONS(1),
    [sym_false_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
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
    [sym_add] = ACTIONS(1),
    [sym_substract] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(124),
    [sym_doctype] = STATE(23),
    [sym__node] = STATE(23),
    [sym_element] = STATE(23),
    [sym_script_element] = STATE(23),
    [sym_style_element] = STATE(23),
    [sym_start_tag] = STATE(17),
    [sym_script_start_tag] = STATE(86),
    [sym_style_start_tag] = STATE(94),
    [sym_self_closing_tag] = STATE(55),
    [sym_erroneous_end_tag] = STATE(23),
    [aux_sym_document_repeat1] = STATE(23),
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
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(19), 10,
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
  [43] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(19), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [88] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(19), 16,
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
  [127] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(19), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(19), 18,
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
      sym_add,
      sym_substract,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(19), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [246] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(35), 1,
      sym_or,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(33), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [297] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(35), 1,
      sym_or,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [408] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(35), 1,
      sym_or,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [457] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(35), 1,
      sym_or,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(30), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(21), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 21,
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
      sym_add,
      sym_substract,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [599] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      sym__implicit_end_tag,
    STATE(19), 1,
      sym_start_tag,
    STATE(50), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(93), 1,
      sym_style_start_tag,
    ACTIONS(71), 2,
      sym_entity,
      sym_text,
    STATE(18), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [643] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_LT_SLASH,
    ACTIONS(77), 1,
      sym__implicit_end_tag,
    STATE(19), 1,
      sym_start_tag,
    STATE(65), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(93), 1,
      sym_style_start_tag,
    ACTIONS(75), 2,
      sym_entity,
      sym_text,
    STATE(21), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [687] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_LT_SLASH,
    ACTIONS(83), 1,
      sym__implicit_end_tag,
    STATE(19), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(74), 1,
      sym_end_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(93), 1,
      sym_style_start_tag,
    ACTIONS(81), 2,
      sym_entity,
      sym_text,
    STATE(20), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [731] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_LT_SLASH,
    ACTIONS(85), 1,
      sym__implicit_end_tag,
    STATE(19), 1,
      sym_start_tag,
    STATE(62), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(93), 1,
      sym_style_start_tag,
    ACTIONS(75), 2,
      sym_entity,
      sym_text,
    STATE(21), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [775] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_LT_SLASH,
    ACTIONS(99), 1,
      sym__implicit_end_tag,
    STATE(19), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(93), 1,
      sym_style_start_tag,
    ACTIONS(96), 2,
      sym_entity,
      sym_text,
    STATE(21), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [816] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    STATE(131), 1,
      sym_th_attribute_value,
    ACTIONS(103), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(13), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_self_closing_tag,
    STATE(86), 1,
      sym_script_start_tag,
    STATE(94), 1,
      sym_style_start_tag,
    ACTIONS(111), 2,
      sym_entity,
      sym_text,
    STATE(25), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [892] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    STATE(126), 1,
      sym_th_attribute_value,
    ACTIONS(103), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(13), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_LT_BANG,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      anon_sym_LT_SLASH,
    STATE(17), 1,
      sym_start_tag,
    STATE(55), 1,
      sym_self_closing_tag,
    STATE(86), 1,
      sym_script_start_tag,
    STATE(94), 1,
      sym_style_start_tag,
    ACTIONS(122), 2,
      sym_entity,
      sym_text,
    STATE(25), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [968] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(125), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(6), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(127), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(5), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(129), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(8), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(131), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(12), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(133), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(4), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(135), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(9), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1160] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(137), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(2), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(139), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(7), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__interpreted_string_literal,
    ACTIONS(141), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(3), 7,
      sym__literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_th_attribute_name_token1,
    STATE(143), 1,
      sym__th_ognl_only,
    ACTIONS(147), 2,
      sym_th_object,
      sym_th_with,
    STATE(142), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(145), 8,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
  [1284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_th_attribute_name_token1,
    STATE(120), 1,
      sym__th_ognl_only,
    ACTIONS(151), 2,
      sym_th_object,
      sym_th_with,
    STATE(132), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(149), 8,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(155), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
  [1328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_th_COLON,
    ACTIONS(161), 1,
      anon_sym_SLASH_GT,
    ACTIONS(163), 1,
      sym_attribute_name,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(167), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
  [1366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_th_COLON,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      anon_sym_GT,
    ACTIONS(171), 1,
      anon_sym_SLASH_GT,
    STATE(38), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_th_COLON,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      anon_sym_GT,
    ACTIONS(173), 1,
      anon_sym_SLASH_GT,
    STATE(43), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_th_COLON,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_th_COLON,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(183), 1,
      anon_sym_SLASH_GT,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(187), 1,
      anon_sym_th_COLON,
    ACTIONS(189), 1,
      sym_attribute_name,
    STATE(46), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_th_COLON,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(191), 1,
      anon_sym_GT,
    STATE(47), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_th_COLON,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(193), 1,
      anon_sym_GT,
    STATE(47), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_th_COLON,
    ACTIONS(198), 1,
      sym_attribute_name,
    STATE(47), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_th_COLON,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(201), 1,
      anon_sym_GT,
    STATE(45), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(203), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LT,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(211), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LT,
    ACTIONS(215), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LT,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(231), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LT,
    ACTIONS(219), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT,
    ACTIONS(235), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LT,
    ACTIONS(243), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(247), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(239), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LT,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LT,
    ACTIONS(223), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LT,
    ACTIONS(251), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(255), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(227), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LT,
    ACTIONS(207), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(259), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(267), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(273), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(259), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_attribute_value,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_quoted_attribute_value,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(289), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [2034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_attribute_value,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym_quoted_attribute_value,
  [2050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(300), 1,
      sym_raw_text,
    STATE(70), 1,
      sym_end_tag,
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__start_tag_name,
    ACTIONS(304), 1,
      sym__script_start_tag_name,
    ACTIONS(306), 1,
      sym__style_start_tag_name,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__script_start_tag_name,
    ACTIONS(306), 1,
      sym__style_start_tag_name,
    ACTIONS(308), 1,
      sym__start_tag_name,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LT_SLASH,
    ACTIONS(312), 1,
      sym_raw_text,
    STATE(72), 1,
      sym_end_tag,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LT_SLASH,
    ACTIONS(314), 1,
      sym_raw_text,
    STATE(71), 1,
      sym_end_tag,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(316), 1,
      sym_raw_text,
    STATE(63), 1,
      sym_end_tag,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__end_tag_name,
    ACTIONS(322), 1,
      sym_erroneous_end_tag_name,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_quoted_attribute_value_token1,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_quoted_attribute_value_token2,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LT_SLASH,
    STATE(59), 1,
      sym_end_tag,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_ognl_std_expression_token1,
    STATE(127), 1,
      sym_ognl_std_expression,
  [2230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LT_SLASH,
    STATE(61), 1,
      sym_end_tag,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(126), 1,
      sym_ognl_th_std_expression,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      aux_sym_quoted_attribute_value_token1,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(66), 1,
      sym_end_tag,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      aux_sym_quoted_attribute_value_token2,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(342), 1,
      sym__end_tag_name,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(131), 1,
      sym_ognl_th_std_expression,
  [2308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(68), 1,
      sym_end_tag,
  [2318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [2333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__doctype,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
  [2347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_GT,
  [2361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_GT,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_GT,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_EQ,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_GT,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_GT,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_doctype_token1,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_erroneous_end_tag_name,
  [2473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_doctype_token1,
  [2480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [2487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__end_tag_name,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_erroneous_end_tag_name,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__end_tag_name,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__doctype,
  [2515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_EQ,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 377,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 537,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 731,
  [SMALL_STATE(21)] = 775,
  [SMALL_STATE(22)] = 816,
  [SMALL_STATE(23)] = 851,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 927,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 1000,
  [SMALL_STATE(28)] = 1032,
  [SMALL_STATE(29)] = 1064,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1128,
  [SMALL_STATE(32)] = 1160,
  [SMALL_STATE(33)] = 1192,
  [SMALL_STATE(34)] = 1224,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1284,
  [SMALL_STATE(37)] = 1312,
  [SMALL_STATE(38)] = 1328,
  [SMALL_STATE(39)] = 1350,
  [SMALL_STATE(40)] = 1366,
  [SMALL_STATE(41)] = 1388,
  [SMALL_STATE(42)] = 1410,
  [SMALL_STATE(43)] = 1430,
  [SMALL_STATE(44)] = 1452,
  [SMALL_STATE(45)] = 1471,
  [SMALL_STATE(46)] = 1490,
  [SMALL_STATE(47)] = 1509,
  [SMALL_STATE(48)] = 1528,
  [SMALL_STATE(49)] = 1547,
  [SMALL_STATE(50)] = 1561,
  [SMALL_STATE(51)] = 1575,
  [SMALL_STATE(52)] = 1589,
  [SMALL_STATE(53)] = 1603,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1631,
  [SMALL_STATE(56)] = 1645,
  [SMALL_STATE(57)] = 1659,
  [SMALL_STATE(58)] = 1673,
  [SMALL_STATE(59)] = 1687,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1715,
  [SMALL_STATE(62)] = 1729,
  [SMALL_STATE(63)] = 1743,
  [SMALL_STATE(64)] = 1757,
  [SMALL_STATE(65)] = 1771,
  [SMALL_STATE(66)] = 1785,
  [SMALL_STATE(67)] = 1799,
  [SMALL_STATE(68)] = 1813,
  [SMALL_STATE(69)] = 1827,
  [SMALL_STATE(70)] = 1841,
  [SMALL_STATE(71)] = 1855,
  [SMALL_STATE(72)] = 1869,
  [SMALL_STATE(73)] = 1883,
  [SMALL_STATE(74)] = 1897,
  [SMALL_STATE(75)] = 1911,
  [SMALL_STATE(76)] = 1924,
  [SMALL_STATE(77)] = 1934,
  [SMALL_STATE(78)] = 1948,
  [SMALL_STATE(79)] = 1958,
  [SMALL_STATE(80)] = 1972,
  [SMALL_STATE(81)] = 1984,
  [SMALL_STATE(82)] = 1994,
  [SMALL_STATE(83)] = 2004,
  [SMALL_STATE(84)] = 2020,
  [SMALL_STATE(85)] = 2034,
  [SMALL_STATE(86)] = 2050,
  [SMALL_STATE(87)] = 2063,
  [SMALL_STATE(88)] = 2076,
  [SMALL_STATE(89)] = 2085,
  [SMALL_STATE(90)] = 2098,
  [SMALL_STATE(91)] = 2107,
  [SMALL_STATE(92)] = 2120,
  [SMALL_STATE(93)] = 2129,
  [SMALL_STATE(94)] = 2142,
  [SMALL_STATE(95)] = 2155,
  [SMALL_STATE(96)] = 2164,
  [SMALL_STATE(97)] = 2172,
  [SMALL_STATE(98)] = 2182,
  [SMALL_STATE(99)] = 2192,
  [SMALL_STATE(100)] = 2202,
  [SMALL_STATE(101)] = 2210,
  [SMALL_STATE(102)] = 2220,
  [SMALL_STATE(103)] = 2230,
  [SMALL_STATE(104)] = 2240,
  [SMALL_STATE(105)] = 2248,
  [SMALL_STATE(106)] = 2258,
  [SMALL_STATE(107)] = 2268,
  [SMALL_STATE(108)] = 2278,
  [SMALL_STATE(109)] = 2288,
  [SMALL_STATE(110)] = 2298,
  [SMALL_STATE(111)] = 2308,
  [SMALL_STATE(112)] = 2318,
  [SMALL_STATE(113)] = 2326,
  [SMALL_STATE(114)] = 2333,
  [SMALL_STATE(115)] = 2340,
  [SMALL_STATE(116)] = 2347,
  [SMALL_STATE(117)] = 2354,
  [SMALL_STATE(118)] = 2361,
  [SMALL_STATE(119)] = 2368,
  [SMALL_STATE(120)] = 2375,
  [SMALL_STATE(121)] = 2382,
  [SMALL_STATE(122)] = 2389,
  [SMALL_STATE(123)] = 2396,
  [SMALL_STATE(124)] = 2403,
  [SMALL_STATE(125)] = 2410,
  [SMALL_STATE(126)] = 2417,
  [SMALL_STATE(127)] = 2424,
  [SMALL_STATE(128)] = 2431,
  [SMALL_STATE(129)] = 2438,
  [SMALL_STATE(130)] = 2445,
  [SMALL_STATE(131)] = 2452,
  [SMALL_STATE(132)] = 2459,
  [SMALL_STATE(133)] = 2466,
  [SMALL_STATE(134)] = 2473,
  [SMALL_STATE(135)] = 2480,
  [SMALL_STATE(136)] = 2487,
  [SMALL_STATE(137)] = 2494,
  [SMALL_STATE(138)] = 2501,
  [SMALL_STATE(139)] = 2508,
  [SMALL_STATE(140)] = 2515,
  [SMALL_STATE(141)] = 2522,
  [SMALL_STATE(142)] = 2529,
  [SMALL_STATE(143)] = 2536,
  [SMALL_STATE(144)] = 2543,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(75),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(35),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(84),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_std_expression, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
