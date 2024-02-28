#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_EQ = 6,
  anon_sym_DQUOTE = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_LT_SLASH = 9,
  sym_attribute_name = 10,
  anon_sym_th_COLON = 11,
  aux_sym_th_attribute_name_token1 = 12,
  sym_attribute_value = 13,
  sym_entity = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_quoted_attribute_value_token1 = 16,
  aux_sym_quoted_attribute_value_token2 = 17,
  sym_text = 18,
  sym_true_literal = 19,
  sym_false_literal = 20,
  sym_null_literal = 21,
  sym_number_literal = 22,
  sym_token_literal = 23,
  sym__interpreted_string_literal_basic_content = 24,
  sym__escape_sequence = 25,
  sym_greater_than_2 = 26,
  sym_lesser_than_2 = 27,
  sym_greater_or_equal = 28,
  sym_greater_or_equal_2 = 29,
  sym_lesser_or_equal = 30,
  sym_lesser_or_equal_2 = 31,
  sym_equal = 32,
  sym_not_equal = 33,
  sym_equal_2 = 34,
  sym_not_equal_2 = 35,
  sym_and = 36,
  sym_or = 37,
  sym_add = 38,
  sym_substract = 39,
  sym_multiply = 40,
  sym_divide = 41,
  sym_modulo = 42,
  anon_sym_QMARK = 43,
  anon_sym_COLON = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  sym__start_tag_name = 47,
  sym__script_start_tag_name = 48,
  sym__style_start_tag_name = 49,
  sym__end_tag_name = 50,
  sym_erroneous_end_tag_name = 51,
  sym__implicit_end_tag = 52,
  sym_raw_text = 53,
  sym_comment = 54,
  sym_document = 55,
  sym_doctype = 56,
  sym__node = 57,
  sym_element = 58,
  sym_script_element = 59,
  sym_style_element = 60,
  sym_start_tag = 61,
  sym__attributes = 62,
  sym_th_attribute = 63,
  sym_th_attribute_value = 64,
  sym_script_start_tag = 65,
  sym_style_start_tag = 66,
  sym_self_closing_tag = 67,
  sym_end_tag = 68,
  sym_erroneous_end_tag = 69,
  sym_attribute = 70,
  sym_th_attribute_name = 71,
  sym_quoted_attribute_value = 72,
  sym__literal = 73,
  sym_string_literal = 74,
  sym__interpreted_string_literal = 75,
  sym_greater_than = 76,
  sym_lesser_than = 77,
  sym__expression = 78,
  sym_ternary_expression = 79,
  sym_parenthesized_expression = 80,
  sym_binary_expression = 81,
  aux_sym_document_repeat1 = 82,
  aux_sym_start_tag_repeat1 = 83,
  aux_sym__interpreted_string_literal_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_th_COLON] = "th:",
  [aux_sym_th_attribute_name_token1] = "th_attribute_name_token1",
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
  [sym_th_attribute_name] = "th_attribute_name",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym__expression] = "_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_expression] = "binary_expression",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_th_COLON] = anon_sym_th_COLON,
  [aux_sym_th_attribute_name_token1] = aux_sym_th_attribute_name_token1,
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
  [sym_th_attribute_name] = sym_th_attribute_name,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym__expression] = sym__expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_expression] = sym_binary_expression,
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
  [anon_sym_th_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_th_attribute_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_th_attribute_name] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 23,
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
  [36] = 34,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 48,
  [56] = 49,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 50,
  [66] = 46,
  [67] = 64,
  [68] = 58,
  [69] = 63,
  [70] = 61,
  [71] = 62,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 73,
  [81] = 72,
  [82] = 82,
  [83] = 83,
  [84] = 74,
  [85] = 85,
  [86] = 86,
  [87] = 76,
  [88] = 82,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 86,
  [95] = 92,
  [96] = 83,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 98,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 99,
  [110] = 102,
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
  [122] = 118,
  [123] = 123,
  [124] = 113,
  [125] = 119,
  [126] = 117,
  [127] = 127,
  [128] = 112,
  [129] = 120,
  [130] = 111,
  [131] = 114,
  [132] = 127,
  [133] = 121,
  [134] = 116,
  [135] = 123,
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
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(44)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'q') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 't') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 't') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead == '\'') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      if (lookahead == '"') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
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
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(63);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
          lookahead != '>') ADVANCE(110);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(44)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(110);
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
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(139);
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
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_true_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_false_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_token_literal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
  [2] = {.lex_state = 25, .external_lex_state = 2},
  [3] = {.lex_state = 25, .external_lex_state = 2},
  [4] = {.lex_state = 25, .external_lex_state = 2},
  [5] = {.lex_state = 25, .external_lex_state = 2},
  [6] = {.lex_state = 25, .external_lex_state = 2},
  [7] = {.lex_state = 25, .external_lex_state = 2},
  [8] = {.lex_state = 25, .external_lex_state = 2},
  [9] = {.lex_state = 25, .external_lex_state = 2},
  [10] = {.lex_state = 25, .external_lex_state = 2},
  [11] = {.lex_state = 25, .external_lex_state = 2},
  [12] = {.lex_state = 25, .external_lex_state = 2},
  [13] = {.lex_state = 25, .external_lex_state = 2},
  [14] = {.lex_state = 25, .external_lex_state = 2},
  [15] = {.lex_state = 25, .external_lex_state = 2},
  [16] = {.lex_state = 45, .external_lex_state = 3},
  [17] = {.lex_state = 45, .external_lex_state = 3},
  [18] = {.lex_state = 45, .external_lex_state = 3},
  [19] = {.lex_state = 45, .external_lex_state = 3},
  [20] = {.lex_state = 45, .external_lex_state = 3},
  [21] = {.lex_state = 45, .external_lex_state = 2},
  [22] = {.lex_state = 45, .external_lex_state = 2},
  [23] = {.lex_state = 26, .external_lex_state = 2},
  [24] = {.lex_state = 26, .external_lex_state = 2},
  [25] = {.lex_state = 26, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 26, .external_lex_state = 2},
  [28] = {.lex_state = 26, .external_lex_state = 2},
  [29] = {.lex_state = 26, .external_lex_state = 2},
  [30] = {.lex_state = 26, .external_lex_state = 2},
  [31] = {.lex_state = 26, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 2},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 27, .external_lex_state = 4},
  [35] = {.lex_state = 27, .external_lex_state = 4},
  [36] = {.lex_state = 27, .external_lex_state = 4},
  [37] = {.lex_state = 27, .external_lex_state = 4},
  [38] = {.lex_state = 27, .external_lex_state = 4},
  [39] = {.lex_state = 27, .external_lex_state = 2},
  [40] = {.lex_state = 27, .external_lex_state = 2},
  [41] = {.lex_state = 27, .external_lex_state = 2},
  [42] = {.lex_state = 27, .external_lex_state = 2},
  [43] = {.lex_state = 27, .external_lex_state = 2},
  [44] = {.lex_state = 26, .external_lex_state = 2},
  [45] = {.lex_state = 26, .external_lex_state = 2},
  [46] = {.lex_state = 45, .external_lex_state = 3},
  [47] = {.lex_state = 45, .external_lex_state = 3},
  [48] = {.lex_state = 45, .external_lex_state = 2},
  [49] = {.lex_state = 45, .external_lex_state = 3},
  [50] = {.lex_state = 45, .external_lex_state = 2},
  [51] = {.lex_state = 45, .external_lex_state = 2},
  [52] = {.lex_state = 45, .external_lex_state = 3},
  [53] = {.lex_state = 45, .external_lex_state = 2},
  [54] = {.lex_state = 45, .external_lex_state = 3},
  [55] = {.lex_state = 45, .external_lex_state = 3},
  [56] = {.lex_state = 45, .external_lex_state = 2},
  [57] = {.lex_state = 45, .external_lex_state = 3},
  [58] = {.lex_state = 45, .external_lex_state = 3},
  [59] = {.lex_state = 45, .external_lex_state = 3},
  [60] = {.lex_state = 45, .external_lex_state = 2},
  [61] = {.lex_state = 45, .external_lex_state = 3},
  [62] = {.lex_state = 45, .external_lex_state = 3},
  [63] = {.lex_state = 45, .external_lex_state = 3},
  [64] = {.lex_state = 45, .external_lex_state = 3},
  [65] = {.lex_state = 45, .external_lex_state = 3},
  [66] = {.lex_state = 45, .external_lex_state = 2},
  [67] = {.lex_state = 45, .external_lex_state = 2},
  [68] = {.lex_state = 45, .external_lex_state = 2},
  [69] = {.lex_state = 45, .external_lex_state = 2},
  [70] = {.lex_state = 45, .external_lex_state = 2},
  [71] = {.lex_state = 45, .external_lex_state = 2},
  [72] = {.lex_state = 27, .external_lex_state = 4},
  [73] = {.lex_state = 27, .external_lex_state = 4},
  [74] = {.lex_state = 27, .external_lex_state = 4},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 27, .external_lex_state = 4},
  [77] = {.lex_state = 29, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 29, .external_lex_state = 2},
  [80] = {.lex_state = 27, .external_lex_state = 2},
  [81] = {.lex_state = 27, .external_lex_state = 2},
  [82] = {.lex_state = 27, .external_lex_state = 4},
  [83] = {.lex_state = 27, .external_lex_state = 4},
  [84] = {.lex_state = 27, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 27, .external_lex_state = 4},
  [87] = {.lex_state = 27, .external_lex_state = 2},
  [88] = {.lex_state = 27, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 6},
  [94] = {.lex_state = 27, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 6},
  [96] = {.lex_state = 27, .external_lex_state = 2},
  [97] = {.lex_state = 30, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 7},
  [100] = {.lex_state = 30, .external_lex_state = 2},
  [101] = {.lex_state = 31, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 6},
  [105] = {.lex_state = 31, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 0, .external_lex_state = 6},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 32, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 45, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 45, .external_lex_state = 2},
  [119] = {.lex_state = 33, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 45, .external_lex_state = 2},
  [122] = {.lex_state = 45, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 33, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 32, .external_lex_state = 2},
  [131] = {.lex_state = 45, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 45, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_th_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(115),
    [sym_doctype] = STATE(21),
    [sym__node] = STATE(21),
    [sym_element] = STATE(21),
    [sym_script_element] = STATE(21),
    [sym_style_element] = STATE(21),
    [sym_start_tag] = STATE(18),
    [sym_script_start_tag] = STATE(91),
    [sym_style_start_tag] = STATE(95),
    [sym_self_closing_tag] = STATE(51),
    [sym_erroneous_end_tag] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
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
    STATE(31), 2,
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
  [43] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(33), 1,
      sym_or,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(27), 3,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(29), 4,
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
  [94] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(31), 2,
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
  [133] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(29), 4,
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
  [178] = 10,
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
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(29), 4,
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
  [225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(31), 2,
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
  [262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(31), 2,
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
  [297] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(33), 1,
      sym_or,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(29), 4,
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
    ACTIONS(33), 1,
      sym_or,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(29), 4,
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
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 21,
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
  [488] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_and,
    ACTIONS(33), 1,
      sym_or,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 2,
      sym_add,
      sym_substract,
    STATE(31), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(25), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(29), 4,
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
  [568] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    ACTIONS(69), 1,
      sym__implicit_end_tag,
    STATE(17), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_end_tag,
    STATE(92), 1,
      sym_style_start_tag,
    STATE(93), 1,
      sym_script_start_tag,
    ACTIONS(67), 2,
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
  [612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    ACTIONS(75), 1,
      sym__implicit_end_tag,
    STATE(17), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(64), 1,
      sym_end_tag,
    STATE(92), 1,
      sym_style_start_tag,
    STATE(93), 1,
      sym_script_start_tag,
    ACTIONS(73), 2,
      sym_entity,
      sym_text,
    STATE(19), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [656] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LT_SLASH,
    ACTIONS(79), 1,
      sym__implicit_end_tag,
    STATE(17), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(67), 1,
      sym_end_tag,
    STATE(92), 1,
      sym_style_start_tag,
    STATE(93), 1,
      sym_script_start_tag,
    ACTIONS(77), 2,
      sym_entity,
      sym_text,
    STATE(16), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [700] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    ACTIONS(81), 1,
      sym__implicit_end_tag,
    STATE(17), 1,
      sym_start_tag,
    STATE(46), 1,
      sym_end_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(92), 1,
      sym_style_start_tag,
    STATE(93), 1,
      sym_script_start_tag,
    ACTIONS(67), 2,
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
  [744] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT_BANG,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_LT_SLASH,
    ACTIONS(95), 1,
      sym__implicit_end_tag,
    STATE(17), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(92), 1,
      sym_style_start_tag,
    STATE(93), 1,
      sym_script_start_tag,
    ACTIONS(92), 2,
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
  [785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_start_tag,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(95), 1,
      sym_style_start_tag,
    ACTIONS(99), 2,
      sym_entity,
      sym_text,
    STATE(22), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [826] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_LT_BANG,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      anon_sym_LT_SLASH,
    STATE(18), 1,
      sym_start_tag,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(91), 1,
      sym_script_start_tag,
    STATE(95), 1,
      sym_style_start_tag,
    ACTIONS(110), 2,
      sym_entity,
      sym_text,
    STATE(22), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    STATE(127), 1,
      sym_th_attribute_value,
    ACTIONS(115), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(9), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [898] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    STATE(132), 1,
      sym_th_attribute_value,
    ACTIONS(115), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(9), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(119), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(6), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(121), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(12), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(123), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(8), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(125), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(7), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(127), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(5), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1069] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(129), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(2), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(131), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(4), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(133), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(3), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(135), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
    STATE(14), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_SLASH_GT,
    ACTIONS(141), 1,
      sym_attribute_name,
    ACTIONS(143), 1,
      anon_sym_th_COLON,
    STATE(74), 1,
      sym_th_attribute_name,
    STATE(38), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_attribute_name,
    ACTIONS(143), 1,
      anon_sym_th_COLON,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_SLASH_GT,
    STATE(74), 1,
      sym_th_attribute_name,
    STATE(34), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(141), 1,
      sym_attribute_name,
    ACTIONS(143), 1,
      anon_sym_th_COLON,
    ACTIONS(149), 1,
      anon_sym_SLASH_GT,
    STATE(74), 1,
      sym_th_attribute_name,
    STATE(38), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_attribute_name,
    ACTIONS(143), 1,
      anon_sym_th_COLON,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_SLASH_GT,
    STATE(74), 1,
      sym_th_attribute_name,
    STATE(36), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_attribute_name,
    ACTIONS(158), 1,
      anon_sym_th_COLON,
    STATE(74), 1,
      sym_th_attribute_name,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(38), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_th_COLON,
    STATE(84), 1,
      sym_th_attribute_name,
    STATE(40), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_th_COLON,
    ACTIONS(167), 1,
      anon_sym_GT,
    STATE(84), 1,
      sym_th_attribute_name,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_th_COLON,
    ACTIONS(169), 1,
      anon_sym_GT,
    STATE(84), 1,
      sym_th_attribute_name,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(171), 1,
      sym_attribute_name,
    ACTIONS(174), 1,
      anon_sym_th_COLON,
    STATE(84), 1,
      sym_th_attribute_name,
    STATE(42), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_th_COLON,
    ACTIONS(177), 1,
      anon_sym_GT,
    STATE(84), 1,
      sym_th_attribute_name,
    STATE(41), 4,
      sym__attributes,
      sym_th_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
    ACTIONS(181), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
    ACTIONS(185), 5,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      sym_token_literal,
  [1444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(187), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(191), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(199), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1500] = 3,
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
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1528] = 3,
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
  [1542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1556] = 3,
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
  [1570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(195), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1598] = 3,
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
  [1612] = 3,
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
  [1626] = 3,
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
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LT,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1654] = 3,
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
  [1668] = 3,
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
  [1682] = 3,
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
  [1696] = 3,
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
  [1710] = 3,
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
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1738] = 3,
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
  [1752] = 3,
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
  [1766] = 3,
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
  [1780] = 3,
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
  [1794] = 3,
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
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(243), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 5,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(249), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(255), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym_attribute_value,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_quoted_attribute_value,
  [1885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(267), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym_attribute_value,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym_quoted_attribute_value,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 4,
      anon_sym_GT,
      anon_sym_EQ,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(243), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(249), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(286), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__start_tag_name,
    ACTIONS(292), 1,
      sym__script_start_tag_name,
    ACTIONS(294), 1,
      sym__style_start_tag_name,
  [2024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__script_start_tag_name,
    ACTIONS(294), 1,
      sym__style_start_tag_name,
    ACTIONS(296), 1,
      sym__start_tag_name,
  [2037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(300), 1,
      sym_raw_text,
    STATE(69), 1,
      sym_end_tag,
  [2050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LT_SLASH,
    ACTIONS(304), 1,
      sym_raw_text,
    STATE(61), 1,
      sym_end_tag,
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LT_SLASH,
    ACTIONS(306), 1,
      sym_raw_text,
    STATE(63), 1,
      sym_end_tag,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(308), 1,
      sym_raw_text,
    STATE(70), 1,
      sym_end_tag,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      aux_sym_quoted_attribute_value_token1,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LT_SLASH,
    STATE(58), 1,
      sym_end_tag,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__end_tag_name,
    ACTIONS(316), 1,
      sym_erroneous_end_tag_name,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      aux_sym_quoted_attribute_value_token1,
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      aux_sym_quoted_attribute_value_token2,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_end_tag,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(68), 1,
      sym_end_tag,
  [2177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_quoted_attribute_value_token2,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(334), 1,
      sym__end_tag_name,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(60), 1,
      sym_end_tag,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_doctype_token1,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__end_tag_name,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_GT,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__doctype,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_GT,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_th_attribute_name_token1,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_erroneous_end_tag_name,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_GT,
  [2316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_GT,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_th_attribute_name_token1,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__end_tag_name,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_erroneous_end_tag_name,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_doctype_token1,
  [2379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_GT,
  [2386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
  [2393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_GT,
  [2400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__doctype,
  [2407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 377,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 488,
  [SMALL_STATE(15)] = 537,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 700,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 785,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 867,
  [SMALL_STATE(24)] = 898,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 957,
  [SMALL_STATE(27)] = 985,
  [SMALL_STATE(28)] = 1013,
  [SMALL_STATE(29)] = 1041,
  [SMALL_STATE(30)] = 1069,
  [SMALL_STATE(31)] = 1097,
  [SMALL_STATE(32)] = 1125,
  [SMALL_STATE(33)] = 1153,
  [SMALL_STATE(34)] = 1181,
  [SMALL_STATE(35)] = 1206,
  [SMALL_STATE(36)] = 1231,
  [SMALL_STATE(37)] = 1256,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1304,
  [SMALL_STATE(40)] = 1326,
  [SMALL_STATE(41)] = 1348,
  [SMALL_STATE(42)] = 1370,
  [SMALL_STATE(43)] = 1392,
  [SMALL_STATE(44)] = 1414,
  [SMALL_STATE(45)] = 1429,
  [SMALL_STATE(46)] = 1444,
  [SMALL_STATE(47)] = 1458,
  [SMALL_STATE(48)] = 1472,
  [SMALL_STATE(49)] = 1486,
  [SMALL_STATE(50)] = 1500,
  [SMALL_STATE(51)] = 1514,
  [SMALL_STATE(52)] = 1528,
  [SMALL_STATE(53)] = 1542,
  [SMALL_STATE(54)] = 1556,
  [SMALL_STATE(55)] = 1570,
  [SMALL_STATE(56)] = 1584,
  [SMALL_STATE(57)] = 1598,
  [SMALL_STATE(58)] = 1612,
  [SMALL_STATE(59)] = 1626,
  [SMALL_STATE(60)] = 1640,
  [SMALL_STATE(61)] = 1654,
  [SMALL_STATE(62)] = 1668,
  [SMALL_STATE(63)] = 1682,
  [SMALL_STATE(64)] = 1696,
  [SMALL_STATE(65)] = 1710,
  [SMALL_STATE(66)] = 1724,
  [SMALL_STATE(67)] = 1738,
  [SMALL_STATE(68)] = 1752,
  [SMALL_STATE(69)] = 1766,
  [SMALL_STATE(70)] = 1780,
  [SMALL_STATE(71)] = 1794,
  [SMALL_STATE(72)] = 1808,
  [SMALL_STATE(73)] = 1821,
  [SMALL_STATE(74)] = 1832,
  [SMALL_STATE(75)] = 1845,
  [SMALL_STATE(76)] = 1859,
  [SMALL_STATE(77)] = 1869,
  [SMALL_STATE(78)] = 1885,
  [SMALL_STATE(79)] = 1899,
  [SMALL_STATE(80)] = 1915,
  [SMALL_STATE(81)] = 1925,
  [SMALL_STATE(82)] = 1937,
  [SMALL_STATE(83)] = 1947,
  [SMALL_STATE(84)] = 1957,
  [SMALL_STATE(85)] = 1969,
  [SMALL_STATE(86)] = 1983,
  [SMALL_STATE(87)] = 1993,
  [SMALL_STATE(88)] = 2002,
  [SMALL_STATE(89)] = 2011,
  [SMALL_STATE(90)] = 2024,
  [SMALL_STATE(91)] = 2037,
  [SMALL_STATE(92)] = 2050,
  [SMALL_STATE(93)] = 2063,
  [SMALL_STATE(94)] = 2076,
  [SMALL_STATE(95)] = 2085,
  [SMALL_STATE(96)] = 2098,
  [SMALL_STATE(97)] = 2107,
  [SMALL_STATE(98)] = 2117,
  [SMALL_STATE(99)] = 2127,
  [SMALL_STATE(100)] = 2137,
  [SMALL_STATE(101)] = 2147,
  [SMALL_STATE(102)] = 2157,
  [SMALL_STATE(103)] = 2167,
  [SMALL_STATE(104)] = 2177,
  [SMALL_STATE(105)] = 2185,
  [SMALL_STATE(106)] = 2195,
  [SMALL_STATE(107)] = 2203,
  [SMALL_STATE(108)] = 2211,
  [SMALL_STATE(109)] = 2219,
  [SMALL_STATE(110)] = 2229,
  [SMALL_STATE(111)] = 2239,
  [SMALL_STATE(112)] = 2246,
  [SMALL_STATE(113)] = 2253,
  [SMALL_STATE(114)] = 2260,
  [SMALL_STATE(115)] = 2267,
  [SMALL_STATE(116)] = 2274,
  [SMALL_STATE(117)] = 2281,
  [SMALL_STATE(118)] = 2288,
  [SMALL_STATE(119)] = 2295,
  [SMALL_STATE(120)] = 2302,
  [SMALL_STATE(121)] = 2309,
  [SMALL_STATE(122)] = 2316,
  [SMALL_STATE(123)] = 2323,
  [SMALL_STATE(124)] = 2330,
  [SMALL_STATE(125)] = 2337,
  [SMALL_STATE(126)] = 2344,
  [SMALL_STATE(127)] = 2351,
  [SMALL_STATE(128)] = 2358,
  [SMALL_STATE(129)] = 2365,
  [SMALL_STATE(130)] = 2372,
  [SMALL_STATE(131)] = 2379,
  [SMALL_STATE(132)] = 2386,
  [SMALL_STATE(133)] = 2393,
  [SMALL_STATE(134)] = 2400,
  [SMALL_STATE(135)] = 2407,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_value, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(72),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(125),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(81),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(119),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lesser_than, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_name, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
