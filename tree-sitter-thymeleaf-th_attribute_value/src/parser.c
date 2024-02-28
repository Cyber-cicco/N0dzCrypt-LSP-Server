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
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_DASH = 39,
  anon_sym_PLUS = 40,
  aux_sym_number_literal_token1 = 41,
  anon_sym_DOT = 42,
  sym_token_literal = 43,
  sym__interpreted_string_literal_basic_content = 44,
  sym__escape_sequence = 45,
  sym_greater_than_2 = 46,
  sym_lesser_than_2 = 47,
  sym_greater_or_equal = 48,
  sym_greater_or_equal_2 = 49,
  sym_lesser_or_equal = 50,
  sym_lesser_or_equal_2 = 51,
  sym_equal = 52,
  sym_not_equal = 53,
  sym_equal_2 = 54,
  sym_not_equal_2 = 55,
  sym_and = 56,
  sym_or = 57,
  anon_sym_PLUS2 = 58,
  anon_sym_DASH2 = 59,
  sym_multiply = 60,
  sym_divide = 61,
  sym_modulo = 62,
  anon_sym_DOLLAR_LBRACE = 63,
  anon_sym_RBRACE = 64,
  aux_sym_ognl_std_expression_token1 = 65,
  anon_sym_QMARK = 66,
  anon_sym_COLON = 67,
  anon_sym_BANG = 68,
  anon_sym_LPAREN = 69,
  anon_sym_RPAREN = 70,
  sym__start_tag_name = 71,
  sym__script_start_tag_name = 72,
  sym__style_start_tag_name = 73,
  sym__end_tag_name = 74,
  sym_erroneous_end_tag_name = 75,
  sym__implicit_end_tag = 76,
  sym_raw_text = 77,
  sym_comment = 78,
  sym_document = 79,
  sym_doctype = 80,
  sym__node = 81,
  sym_element = 82,
  sym_script_element = 83,
  sym_style_element = 84,
  sym_start_tag = 85,
  sym__attributes = 86,
  sym_th_attribute = 87,
  sym_th_attribute_value = 88,
  sym_script_start_tag = 89,
  sym_style_start_tag = 90,
  sym_self_closing_tag = 91,
  sym_end_tag = 92,
  sym_erroneous_end_tag = 93,
  sym_attribute = 94,
  sym__th_generic = 95,
  sym__th_ognl_only = 96,
  sym_th_generic = 97,
  sym_quoted_attribute_value = 98,
  sym__literal = 99,
  sym_number_literal = 100,
  sym_string_literal = 101,
  sym__interpreted_string_literal = 102,
  sym_greater_than = 103,
  sym_lesser_than = 104,
  sym_add = 105,
  sym_substract = 106,
  sym__th_std_expression = 107,
  sym_ognl_th_std_expression = 108,
  sym_ognl_std_expression = 109,
  sym_ternary_th_std_expression = 110,
  sym_unary_th_std_expression = 111,
  sym_parenthesized_th_std_expression = 112,
  sym_binary_th_std_expression = 113,
  aux_sym_document_repeat1 = 114,
  aux_sym_start_tag_repeat1 = 115,
  aux_sym__interpreted_string_literal_repeat1 = 116,
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
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [aux_sym_number_literal_token1] = "number_literal_token1",
  [anon_sym_DOT] = ".",
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
  [anon_sym_PLUS2] = "+",
  [anon_sym_DASH2] = "-",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_ognl_std_expression_token1] = "ognl_std_expression_token1",
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
  [sym_th_generic] = "th_generic",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym__th_std_expression] = "_th_std_expression",
  [sym_ognl_th_std_expression] = "ognl_th_std_expression",
  [sym_ognl_std_expression] = "ognl_std_expression",
  [sym_ternary_th_std_expression] = "ternary_th_std_expression",
  [sym_unary_th_std_expression] = "unary_th_std_expression",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_number_literal_token1] = aux_sym_number_literal_token1,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_PLUS2] = anon_sym_PLUS,
  [anon_sym_DASH2] = anon_sym_DASH,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_modulo] = sym_modulo,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_ognl_std_expression_token1] = aux_sym_ognl_std_expression_token1,
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
  [sym_th_generic] = sym_th_generic,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym__th_std_expression] = sym__th_std_expression,
  [sym_ognl_th_std_expression] = sym_ognl_th_std_expression,
  [sym_ognl_std_expression] = sym_ognl_std_expression,
  [sym_ternary_th_std_expression] = sym_ternary_th_std_expression,
  [sym_unary_th_std_expression] = sym_unary_th_std_expression,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = false,
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
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_substract] = {
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
  field_operand = 5,
  field_operator = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
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
  [14] = 13,
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
  [36] = 35,
  [37] = 34,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 64,
  [69] = 69,
  [70] = 57,
  [71] = 65,
  [72] = 59,
  [73] = 73,
  [74] = 74,
  [75] = 69,
  [76] = 58,
  [77] = 77,
  [78] = 73,
  [79] = 77,
  [80] = 61,
  [81] = 63,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 83,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 84,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 85,
  [97] = 87,
  [98] = 90,
  [99] = 99,
  [100] = 91,
  [101] = 94,
  [102] = 95,
  [103] = 99,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 108,
  [115] = 106,
  [116] = 116,
  [117] = 117,
  [118] = 116,
  [119] = 112,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
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
  [136] = 127,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 123,
  [141] = 138,
  [142] = 129,
  [143] = 143,
  [144] = 144,
  [145] = 125,
  [146] = 146,
  [147] = 143,
  [148] = 144,
  [149] = 149,
  [150] = 122,
  [151] = 137,
  [152] = 126,
  [153] = 146,
  [154] = 139,
  [155] = 134,
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
      if (eof) ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(113)
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '?') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(112);
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
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(283);
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
      if (lookahead == 'r') ADVANCE(286);
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
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(284);
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
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(181);
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
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(187);
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
      if (lookahead == 'l') ADVANCE(253);
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
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(185);
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
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(198);
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
      if (lookahead == '{') ADVANCE(294);
      END_STATE();
    case 92:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(92)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(287);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '?') ADVANCE(298);
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
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(93)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 94:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(94)
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == 't') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(95)
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(95)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(202);
      END_STATE();
    case 96:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(96)
      if (lookahead == '\'') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(96)
      END_STATE();
    case 97:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(246);
      if (lookahead == '"') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 98:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 100:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(102)
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 't') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(102)
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(287);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 't') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 109:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 110:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(248);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 112:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 113:
      if (eof) ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(113)
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(287);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '?') ADVANCE(298);
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
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(114)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '>') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(114)
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_utext);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'j') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_th_insert);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_th_insert);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_th_replace);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_th_replace);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_th_if);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_th_if);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_th_unless);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_th_unless);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_th_switch);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_th_switch);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_th_case);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_th_case);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_th_object);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_th_object);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_th_with);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_th_with);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_th_attr);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_th_attrappend);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_th_attrprepend);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_th_fragment);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_th_fragment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_th_remove);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_th_remove);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(178);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ognl_std_expression_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_ognl_std_expression_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 114, .external_lex_state = 2},
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
  [13] = {.lex_state = 101, .external_lex_state = 2},
  [14] = {.lex_state = 101, .external_lex_state = 2},
  [15] = {.lex_state = 92, .external_lex_state = 2},
  [16] = {.lex_state = 92, .external_lex_state = 2},
  [17] = {.lex_state = 101, .external_lex_state = 2},
  [18] = {.lex_state = 101, .external_lex_state = 2},
  [19] = {.lex_state = 101, .external_lex_state = 2},
  [20] = {.lex_state = 92, .external_lex_state = 2},
  [21] = {.lex_state = 101, .external_lex_state = 2},
  [22] = {.lex_state = 92, .external_lex_state = 2},
  [23] = {.lex_state = 92, .external_lex_state = 2},
  [24] = {.lex_state = 101, .external_lex_state = 2},
  [25] = {.lex_state = 92, .external_lex_state = 2},
  [26] = {.lex_state = 101, .external_lex_state = 2},
  [27] = {.lex_state = 92, .external_lex_state = 2},
  [28] = {.lex_state = 101, .external_lex_state = 2},
  [29] = {.lex_state = 92, .external_lex_state = 2},
  [30] = {.lex_state = 101, .external_lex_state = 2},
  [31] = {.lex_state = 92, .external_lex_state = 2},
  [32] = {.lex_state = 101, .external_lex_state = 2},
  [33] = {.lex_state = 101, .external_lex_state = 2},
  [34] = {.lex_state = 114, .external_lex_state = 3},
  [35] = {.lex_state = 114, .external_lex_state = 3},
  [36] = {.lex_state = 114, .external_lex_state = 3},
  [37] = {.lex_state = 114, .external_lex_state = 3},
  [38] = {.lex_state = 114, .external_lex_state = 2},
  [39] = {.lex_state = 114, .external_lex_state = 2},
  [40] = {.lex_state = 114, .external_lex_state = 3},
  [41] = {.lex_state = 93, .external_lex_state = 2},
  [42] = {.lex_state = 93, .external_lex_state = 2},
  [43] = {.lex_state = 101, .external_lex_state = 2},
  [44] = {.lex_state = 101, .external_lex_state = 2},
  [45] = {.lex_state = 101, .external_lex_state = 2},
  [46] = {.lex_state = 101, .external_lex_state = 2},
  [47] = {.lex_state = 94, .external_lex_state = 4},
  [48] = {.lex_state = 94, .external_lex_state = 4},
  [49] = {.lex_state = 94, .external_lex_state = 4},
  [50] = {.lex_state = 94, .external_lex_state = 4},
  [51] = {.lex_state = 94, .external_lex_state = 4},
  [52] = {.lex_state = 94, .external_lex_state = 2},
  [53] = {.lex_state = 94, .external_lex_state = 2},
  [54] = {.lex_state = 94, .external_lex_state = 2},
  [55] = {.lex_state = 94, .external_lex_state = 2},
  [56] = {.lex_state = 94, .external_lex_state = 2},
  [57] = {.lex_state = 114, .external_lex_state = 3},
  [58] = {.lex_state = 114, .external_lex_state = 2},
  [59] = {.lex_state = 114, .external_lex_state = 2},
  [60] = {.lex_state = 114, .external_lex_state = 2},
  [61] = {.lex_state = 114, .external_lex_state = 2},
  [62] = {.lex_state = 114, .external_lex_state = 3},
  [63] = {.lex_state = 114, .external_lex_state = 3},
  [64] = {.lex_state = 114, .external_lex_state = 2},
  [65] = {.lex_state = 114, .external_lex_state = 3},
  [66] = {.lex_state = 114, .external_lex_state = 3},
  [67] = {.lex_state = 114, .external_lex_state = 2},
  [68] = {.lex_state = 114, .external_lex_state = 3},
  [69] = {.lex_state = 114, .external_lex_state = 3},
  [70] = {.lex_state = 114, .external_lex_state = 2},
  [71] = {.lex_state = 114, .external_lex_state = 2},
  [72] = {.lex_state = 114, .external_lex_state = 3},
  [73] = {.lex_state = 114, .external_lex_state = 2},
  [74] = {.lex_state = 114, .external_lex_state = 3},
  [75] = {.lex_state = 114, .external_lex_state = 2},
  [76] = {.lex_state = 114, .external_lex_state = 3},
  [77] = {.lex_state = 114, .external_lex_state = 3},
  [78] = {.lex_state = 114, .external_lex_state = 3},
  [79] = {.lex_state = 114, .external_lex_state = 2},
  [80] = {.lex_state = 114, .external_lex_state = 3},
  [81] = {.lex_state = 114, .external_lex_state = 2},
  [82] = {.lex_state = 114, .external_lex_state = 3},
  [83] = {.lex_state = 94, .external_lex_state = 4},
  [84] = {.lex_state = 95, .external_lex_state = 2},
  [85] = {.lex_state = 94, .external_lex_state = 4},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 94, .external_lex_state = 4},
  [88] = {.lex_state = 94, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 94, .external_lex_state = 4},
  [91] = {.lex_state = 94, .external_lex_state = 4},
  [92] = {.lex_state = 95, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 94, .external_lex_state = 2},
  [97] = {.lex_state = 94, .external_lex_state = 2},
  [98] = {.lex_state = 94, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 6},
  [100] = {.lex_state = 94, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 0, .external_lex_state = 5},
  [103] = {.lex_state = 0, .external_lex_state = 6},
  [104] = {.lex_state = 97, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 7},
  [107] = {.lex_state = 97, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 5},
  [112] = {.lex_state = 98, .external_lex_state = 2},
  [113] = {.lex_state = 99, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 98, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 114, .external_lex_state = 2},
  [125] = {.lex_state = 100, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 114, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 114, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 114, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 114, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 101, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 8},
  [144] = {.lex_state = 0, .external_lex_state = 9},
  [145] = {.lex_state = 100, .external_lex_state = 2},
  [146] = {.lex_state = 101, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 8},
  [148] = {.lex_state = 0, .external_lex_state = 9},
  [149] = {.lex_state = 101, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 101, .external_lex_state = 2},
  [154] = {.lex_state = 101, .external_lex_state = 2},
  [155] = {.lex_state = 114, .external_lex_state = 2},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_number_literal_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_document] = STATE(135),
    [sym_doctype] = STATE(39),
    [sym__node] = STATE(39),
    [sym_element] = STATE(39),
    [sym_script_element] = STATE(39),
    [sym_style_element] = STATE(39),
    [sym_start_tag] = STATE(35),
    [sym_script_start_tag] = STATE(94),
    [sym_style_start_tag] = STATE(95),
    [sym_self_closing_tag] = STATE(61),
    [sym_erroneous_end_tag] = STATE(39),
    [aux_sym_document_repeat1] = STATE(39),
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
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(17), 16,
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
  [45] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(27), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [84] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(17), 6,
      anon_sym_DQUOTE,
      sym_and,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
    ACTIONS(17), 10,
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
  [184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(17), 18,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(17), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [264] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_and,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(17), 5,
      anon_sym_DQUOTE,
      sym_or,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [317] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_and,
    ACTIONS(41), 1,
      sym_or,
    ACTIONS(43), 1,
      anon_sym_QMARK,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(39), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [374] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_and,
    ACTIONS(41), 1,
      sym_or,
    ACTIONS(43), 1,
      anon_sym_QMARK,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [429] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_and,
    ACTIONS(41), 1,
      sym_or,
    ACTIONS(43), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [484] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PLUS2,
    ACTIONS(21), 1,
      anon_sym_DASH2,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_and,
    ACTIONS(41), 1,
      sym_or,
    ACTIONS(43), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_COLON,
    STATE(24), 2,
      sym_greater_than,
      sym_lesser_than,
    STATE(32), 2,
      sym_add,
      sym_substract,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(35), 4,
      sym_equal,
      sym_not_equal,
      sym_equal_2,
      sym_not_equal_2,
    ACTIONS(33), 6,
      sym_greater_than_2,
      sym_lesser_than_2,
      sym_greater_or_equal,
      sym_greater_or_equal_2,
      sym_lesser_or_equal,
      sym_lesser_or_equal_2,
  [539] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    STATE(129), 1,
      sym_th_attribute_value,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(53), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(11), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [591] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    STATE(142), 1,
      sym_th_attribute_value,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(53), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(11), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [711] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(81), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(4), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [760] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(83), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(7), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [809] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(85), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(3), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [889] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(91), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(9), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1000] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(101), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(2), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1080] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(107), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(5), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1160] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(113), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(10), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(119), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(8), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 21,
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
      anon_sym_PLUS2,
      anon_sym_DASH2,
      sym_multiply,
      sym_divide,
      sym_modulo,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [1320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(125), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(6), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1369] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      aux_sym_number_literal_token1,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__interpreted_string_literal,
    ACTIONS(61), 2,
      anon_sym_PLUS2,
      anon_sym_DASH2,
    ACTIONS(127), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_token_literal,
    STATE(12), 9,
      sym__literal,
      sym_number_literal,
      sym_string_literal,
      sym__th_std_expression,
      sym_ognl_th_std_expression,
      sym_ternary_th_std_expression,
      sym_unary_th_std_expression,
      sym_parenthesized_th_std_expression,
      sym_binary_th_std_expression,
  [1418] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT_BANG,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      anon_sym_LT_SLASH,
    ACTIONS(137), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(68), 1,
      sym_end_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(101), 1,
      sym_script_start_tag,
    STATE(102), 1,
      sym_style_start_tag,
    ACTIONS(135), 2,
      sym_entity,
      sym_text,
    STATE(40), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1462] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT_BANG,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      anon_sym_LT_SLASH,
    ACTIONS(143), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(73), 1,
      sym_end_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(101), 1,
      sym_script_start_tag,
    STATE(102), 1,
      sym_style_start_tag,
    ACTIONS(141), 2,
      sym_entity,
      sym_text,
    STATE(37), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1506] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT_BANG,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      anon_sym_LT_SLASH,
    ACTIONS(147), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(78), 1,
      sym_end_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(101), 1,
      sym_script_start_tag,
    STATE(102), 1,
      sym_style_start_tag,
    ACTIONS(145), 2,
      sym_entity,
      sym_text,
    STATE(34), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1550] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT_BANG,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      anon_sym_LT_SLASH,
    ACTIONS(149), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(64), 1,
      sym_end_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(101), 1,
      sym_script_start_tag,
    STATE(102), 1,
      sym_style_start_tag,
    ACTIONS(135), 2,
      sym_entity,
      sym_text,
    STATE(40), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LT_BANG,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LT_SLASH,
    STATE(35), 1,
      sym_start_tag,
    STATE(61), 1,
      sym_self_closing_tag,
    STATE(94), 1,
      sym_script_start_tag,
    STATE(95), 1,
      sym_style_start_tag,
    ACTIONS(162), 2,
      sym_entity,
      sym_text,
    STATE(38), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1635] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_start_tag,
    STATE(61), 1,
      sym_self_closing_tag,
    STATE(94), 1,
      sym_script_start_tag,
    STATE(95), 1,
      sym_style_start_tag,
    ACTIONS(167), 2,
      sym_entity,
      sym_text,
    STATE(38), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1676] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__implicit_end_tag,
    ACTIONS(169), 1,
      anon_sym_LT_BANG,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_LT_SLASH,
    STATE(36), 1,
      sym_start_tag,
    STATE(80), 1,
      sym_self_closing_tag,
    STATE(101), 1,
      sym_script_start_tag,
    STATE(102), 1,
      sym_style_start_tag,
    ACTIONS(178), 2,
      sym_entity,
      sym_text,
    STATE(40), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [1717] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_th_attribute_name_token1,
    STATE(154), 1,
      sym__th_ognl_only,
    ACTIONS(185), 2,
      sym_th_object,
      sym_th_with,
    STATE(153), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(183), 8,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
  [1745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_th_attribute_name_token1,
    STATE(139), 1,
      sym__th_ognl_only,
    ACTIONS(189), 2,
      sym_th_object,
      sym_th_with,
    STATE(146), 2,
      sym__th_generic,
      sym_th_generic,
    ACTIONS(187), 8,
      sym_th_insert,
      sym_th_replace,
      sym_th_if,
      sym_th_unless,
      sym_th_switch,
      sym_th_case,
      sym_th_fragment,
      sym_th_remove,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      anon_sym_SQUOTE,
      anon_sym_PLUS,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(193), 8,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_DASH,
      aux_sym_number_literal_token1,
      sym_token_literal,
      anon_sym_PLUS2,
      anon_sym_DASH2,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_SQUOTE,
      anon_sym_PLUS,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(197), 8,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_DASH,
      aux_sym_number_literal_token1,
      sym_token_literal,
      anon_sym_PLUS2,
      anon_sym_DASH2,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_SQUOTE,
      anon_sym_PLUS,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(201), 8,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_DASH,
      aux_sym_number_literal_token1,
      sym_token_literal,
      anon_sym_PLUS2,
      anon_sym_DASH2,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      anon_sym_SQUOTE,
      anon_sym_PLUS,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BANG,
      anon_sym_LPAREN,
    ACTIONS(205), 8,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      anon_sym_DASH,
      aux_sym_number_literal_token1,
      sym_token_literal,
      anon_sym_PLUS2,
      anon_sym_DASH2,
  [1857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(209), 1,
      anon_sym_th_COLON,
    ACTIONS(211), 1,
      anon_sym_SLASH_GT,
    ACTIONS(213), 1,
      sym_attribute_name,
    STATE(48), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_th_COLON,
    ACTIONS(220), 1,
      sym_attribute_name,
    ACTIONS(215), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(48), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1899] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_th_COLON,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_GT,
    ACTIONS(225), 1,
      anon_sym_SLASH_GT,
    STATE(51), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_th_COLON,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_GT,
    ACTIONS(227), 1,
      anon_sym_SLASH_GT,
    STATE(47), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(209), 1,
      anon_sym_th_COLON,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(229), 1,
      anon_sym_SLASH_GT,
    STATE(48), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      anon_sym_th_COLON,
    ACTIONS(235), 1,
      sym_attribute_name,
    STATE(54), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_th_COLON,
    ACTIONS(235), 1,
      sym_attribute_name,
    ACTIONS(237), 1,
      anon_sym_GT,
    STATE(54), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_GT,
    ACTIONS(239), 1,
      anon_sym_th_COLON,
    ACTIONS(242), 1,
      sym_attribute_name,
    STATE(54), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_th_COLON,
    ACTIONS(235), 1,
      sym_attribute_name,
    ACTIONS(245), 1,
      anon_sym_GT,
    STATE(52), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_th_COLON,
    ACTIONS(235), 1,
      sym_attribute_name,
    ACTIONS(247), 1,
      anon_sym_GT,
    STATE(53), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(249), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(261), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(269), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LT,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(277), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(281), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LT,
    ACTIONS(273), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(285), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(257), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(293), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LT,
    ACTIONS(253), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(297), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(289), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(265), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LT,
    ACTIONS(301), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(305), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_attribute_value,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym_quoted_attribute_value,
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(319), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_EQ,
    ACTIONS(305), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(327), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_GT,
      anon_sym_th_COLON,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [2533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      sym_attribute_value,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(341), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [2563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LT_SLASH,
    ACTIONS(346), 1,
      sym_raw_text,
    STATE(79), 1,
      sym_end_tag,
  [2576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LT_SLASH,
    ACTIONS(348), 1,
      sym_raw_text,
    STATE(58), 1,
      sym_end_tag,
  [2589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__start_tag_name,
    ACTIONS(352), 1,
      sym__script_start_tag_name,
    ACTIONS(354), 1,
      sym__style_start_tag_name,
  [2629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_GT,
      anon_sym_th_COLON,
      sym_attribute_name,
  [2638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LT_SLASH,
    ACTIONS(358), 1,
      sym_raw_text,
    STATE(77), 1,
      sym_end_tag,
  [2651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LT_SLASH,
    ACTIONS(360), 1,
      sym_raw_text,
    STATE(76), 1,
      sym_end_tag,
  [2664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__script_start_tag_name,
    ACTIONS(354), 1,
      sym__style_start_tag_name,
    ACTIONS(362), 1,
      sym__start_tag_name,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      aux_sym_quoted_attribute_value_token2,
  [2687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LT_SLASH,
    STATE(67), 1,
      sym_end_tag,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__end_tag_name,
    ACTIONS(370), 1,
      sym_erroneous_end_tag_name,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      aux_sym_quoted_attribute_value_token2,
  [2717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_end_tag,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LT_SLASH,
    STATE(66), 1,
      sym_end_tag,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_quoted_attribute_value_token1,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_ognl_std_expression_token1,
    STATE(133), 1,
      sym_ognl_std_expression,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LT_SLASH,
    STATE(70), 1,
      sym_end_tag,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(384), 1,
      sym__end_tag_name,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(142), 1,
      sym_ognl_th_std_expression,
  [2803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(129), 1,
      sym_ognl_th_std_expression,
  [2821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      aux_sym_quoted_attribute_value_token1,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__doctype,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_GT,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_doctype_token1,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_GT,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_number_literal_token1,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_GT,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_number_literal_token1,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_number_literal_token1,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_GT,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_GT,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_EQ,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__end_tag_name,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_erroneous_end_tag_name,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_doctype_token1,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_EQ,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__end_tag_name,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_erroneous_end_tag_name,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_EQ,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__doctype,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_EQ,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 484,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 591,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 677,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 760,
  [SMALL_STATE(19)] = 809,
  [SMALL_STATE(20)] = 858,
  [SMALL_STATE(21)] = 889,
  [SMALL_STATE(22)] = 938,
  [SMALL_STATE(23)] = 969,
  [SMALL_STATE(24)] = 1000,
  [SMALL_STATE(25)] = 1049,
  [SMALL_STATE(26)] = 1080,
  [SMALL_STATE(27)] = 1129,
  [SMALL_STATE(28)] = 1160,
  [SMALL_STATE(29)] = 1209,
  [SMALL_STATE(30)] = 1240,
  [SMALL_STATE(31)] = 1289,
  [SMALL_STATE(32)] = 1320,
  [SMALL_STATE(33)] = 1369,
  [SMALL_STATE(34)] = 1418,
  [SMALL_STATE(35)] = 1462,
  [SMALL_STATE(36)] = 1506,
  [SMALL_STATE(37)] = 1550,
  [SMALL_STATE(38)] = 1594,
  [SMALL_STATE(39)] = 1635,
  [SMALL_STATE(40)] = 1676,
  [SMALL_STATE(41)] = 1717,
  [SMALL_STATE(42)] = 1745,
  [SMALL_STATE(43)] = 1773,
  [SMALL_STATE(44)] = 1794,
  [SMALL_STATE(45)] = 1815,
  [SMALL_STATE(46)] = 1836,
  [SMALL_STATE(47)] = 1857,
  [SMALL_STATE(48)] = 1879,
  [SMALL_STATE(49)] = 1899,
  [SMALL_STATE(50)] = 1921,
  [SMALL_STATE(51)] = 1943,
  [SMALL_STATE(52)] = 1965,
  [SMALL_STATE(53)] = 1984,
  [SMALL_STATE(54)] = 2003,
  [SMALL_STATE(55)] = 2022,
  [SMALL_STATE(56)] = 2041,
  [SMALL_STATE(57)] = 2060,
  [SMALL_STATE(58)] = 2074,
  [SMALL_STATE(59)] = 2088,
  [SMALL_STATE(60)] = 2102,
  [SMALL_STATE(61)] = 2116,
  [SMALL_STATE(62)] = 2130,
  [SMALL_STATE(63)] = 2144,
  [SMALL_STATE(64)] = 2158,
  [SMALL_STATE(65)] = 2172,
  [SMALL_STATE(66)] = 2186,
  [SMALL_STATE(67)] = 2200,
  [SMALL_STATE(68)] = 2214,
  [SMALL_STATE(69)] = 2228,
  [SMALL_STATE(70)] = 2242,
  [SMALL_STATE(71)] = 2256,
  [SMALL_STATE(72)] = 2270,
  [SMALL_STATE(73)] = 2284,
  [SMALL_STATE(74)] = 2298,
  [SMALL_STATE(75)] = 2312,
  [SMALL_STATE(76)] = 2326,
  [SMALL_STATE(77)] = 2340,
  [SMALL_STATE(78)] = 2354,
  [SMALL_STATE(79)] = 2368,
  [SMALL_STATE(80)] = 2382,
  [SMALL_STATE(81)] = 2396,
  [SMALL_STATE(82)] = 2410,
  [SMALL_STATE(83)] = 2424,
  [SMALL_STATE(84)] = 2437,
  [SMALL_STATE(85)] = 2453,
  [SMALL_STATE(86)] = 2463,
  [SMALL_STATE(87)] = 2477,
  [SMALL_STATE(88)] = 2487,
  [SMALL_STATE(89)] = 2499,
  [SMALL_STATE(90)] = 2513,
  [SMALL_STATE(91)] = 2523,
  [SMALL_STATE(92)] = 2533,
  [SMALL_STATE(93)] = 2549,
  [SMALL_STATE(94)] = 2563,
  [SMALL_STATE(95)] = 2576,
  [SMALL_STATE(96)] = 2589,
  [SMALL_STATE(97)] = 2598,
  [SMALL_STATE(98)] = 2607,
  [SMALL_STATE(99)] = 2616,
  [SMALL_STATE(100)] = 2629,
  [SMALL_STATE(101)] = 2638,
  [SMALL_STATE(102)] = 2651,
  [SMALL_STATE(103)] = 2664,
  [SMALL_STATE(104)] = 2677,
  [SMALL_STATE(105)] = 2687,
  [SMALL_STATE(106)] = 2697,
  [SMALL_STATE(107)] = 2707,
  [SMALL_STATE(108)] = 2717,
  [SMALL_STATE(109)] = 2727,
  [SMALL_STATE(110)] = 2737,
  [SMALL_STATE(111)] = 2745,
  [SMALL_STATE(112)] = 2753,
  [SMALL_STATE(113)] = 2763,
  [SMALL_STATE(114)] = 2773,
  [SMALL_STATE(115)] = 2783,
  [SMALL_STATE(116)] = 2793,
  [SMALL_STATE(117)] = 2803,
  [SMALL_STATE(118)] = 2811,
  [SMALL_STATE(119)] = 2821,
  [SMALL_STATE(120)] = 2831,
  [SMALL_STATE(121)] = 2839,
  [SMALL_STATE(122)] = 2846,
  [SMALL_STATE(123)] = 2853,
  [SMALL_STATE(124)] = 2860,
  [SMALL_STATE(125)] = 2867,
  [SMALL_STATE(126)] = 2874,
  [SMALL_STATE(127)] = 2881,
  [SMALL_STATE(128)] = 2888,
  [SMALL_STATE(129)] = 2895,
  [SMALL_STATE(130)] = 2902,
  [SMALL_STATE(131)] = 2909,
  [SMALL_STATE(132)] = 2916,
  [SMALL_STATE(133)] = 2923,
  [SMALL_STATE(134)] = 2930,
  [SMALL_STATE(135)] = 2937,
  [SMALL_STATE(136)] = 2944,
  [SMALL_STATE(137)] = 2951,
  [SMALL_STATE(138)] = 2958,
  [SMALL_STATE(139)] = 2965,
  [SMALL_STATE(140)] = 2972,
  [SMALL_STATE(141)] = 2979,
  [SMALL_STATE(142)] = 2986,
  [SMALL_STATE(143)] = 2993,
  [SMALL_STATE(144)] = 3000,
  [SMALL_STATE(145)] = 3007,
  [SMALL_STATE(146)] = 3014,
  [SMALL_STATE(147)] = 3021,
  [SMALL_STATE(148)] = 3028,
  [SMALL_STATE(149)] = 3035,
  [SMALL_STATE(150)] = 3042,
  [SMALL_STATE(151)] = 3049,
  [SMALL_STATE(152)] = 3056,
  [SMALL_STATE(153)] = 3063,
  [SMALL_STATE(154)] = 3070,
  [SMALL_STATE(155)] = 3077,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_th_std_expression, 3, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_th_std_expression, 2, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_th_std_expression, 5, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_th_std_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ognl_th_std_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_th_std_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(148),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(150),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(144),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substract, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(42),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(41),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(88),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(93),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ognl_std_expression, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_generic, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
