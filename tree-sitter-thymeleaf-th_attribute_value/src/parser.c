#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
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
  sym__interpreted_string_literal_basic_content = 23,
  sym__escape_sequence = 24,
  sym_greater_than_2 = 25,
  sym_lesser_than_2 = 26,
  sym_greater_or_equal = 27,
  sym_greater_or_equal_2 = 28,
  sym_lesser_or_equal = 29,
  sym_lesser_or_equal_2 = 30,
  sym_equal = 31,
  sym_not_equal = 32,
  sym_equal_2 = 33,
  sym_not_equal_2 = 34,
  sym_and = 35,
  sym_or = 36,
  sym_add = 37,
  sym_substract = 38,
  sym_multiply = 39,
  sym_divide = 40,
  sym_modulo = 41,
  anon_sym_QMARK = 42,
  anon_sym_COLON = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  sym__start_tag_name = 46,
  sym__script_start_tag_name = 47,
  sym__style_start_tag_name = 48,
  sym__end_tag_name = 49,
  sym_erroneous_end_tag_name = 50,
  sym__implicit_end_tag = 51,
  sym_raw_text = 52,
  sym_comment = 53,
  sym_document = 54,
  sym_doctype = 55,
  sym__node = 56,
  sym_element = 57,
  sym_script_element = 58,
  sym_style_element = 59,
  sym_start_tag = 60,
  sym__attributes = 61,
  sym_th_attribute = 62,
  sym_th_attribute_value = 63,
  sym_script_start_tag = 64,
  sym_style_start_tag = 65,
  sym_self_closing_tag = 66,
  sym_end_tag = 67,
  sym_erroneous_end_tag = 68,
  sym_attribute = 69,
  sym_th_attribute_name = 70,
  sym_quoted_attribute_value = 71,
  sym__literal = 72,
  sym_string_literal = 73,
  sym__interpreted_string_literal = 74,
  sym_greater_than = 75,
  sym_lesser_than = 76,
  sym__expression = 77,
  sym_ternary_expression = 78,
  sym_parenthesized_expression = 79,
  sym_binary_expression = 80,
  aux_sym_document_repeat1 = 81,
  aux_sym_start_tag_repeat1 = 82,
  aux_sym__interpreted_string_literal_repeat1 = 83,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 48,
  [56] = 49,
  [57] = 47,
  [58] = 46,
  [59] = 59,
  [60] = 60,
  [61] = 50,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 51,
  [66] = 45,
  [67] = 64,
  [68] = 68,
  [69] = 63,
  [70] = 62,
  [71] = 60,
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
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 't') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != 'h') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(109);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 40:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(62);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_th_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_th_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 44, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 44, .external_lex_state = 3},
  [17] = {.lex_state = 44, .external_lex_state = 3},
  [18] = {.lex_state = 44, .external_lex_state = 3},
  [19] = {.lex_state = 44, .external_lex_state = 3},
  [20] = {.lex_state = 44, .external_lex_state = 3},
  [21] = {.lex_state = 44, .external_lex_state = 2},
  [22] = {.lex_state = 44, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 8, .external_lex_state = 4},
  [35] = {.lex_state = 8, .external_lex_state = 4},
  [36] = {.lex_state = 8, .external_lex_state = 4},
  [37] = {.lex_state = 8, .external_lex_state = 4},
  [38] = {.lex_state = 8, .external_lex_state = 4},
  [39] = {.lex_state = 8, .external_lex_state = 2},
  [40] = {.lex_state = 8, .external_lex_state = 2},
  [41] = {.lex_state = 8, .external_lex_state = 2},
  [42] = {.lex_state = 8, .external_lex_state = 2},
  [43] = {.lex_state = 8, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 44, .external_lex_state = 3},
  [46] = {.lex_state = 44, .external_lex_state = 2},
  [47] = {.lex_state = 44, .external_lex_state = 2},
  [48] = {.lex_state = 44, .external_lex_state = 2},
  [49] = {.lex_state = 44, .external_lex_state = 3},
  [50] = {.lex_state = 44, .external_lex_state = 2},
  [51] = {.lex_state = 44, .external_lex_state = 2},
  [52] = {.lex_state = 44, .external_lex_state = 3},
  [53] = {.lex_state = 44, .external_lex_state = 2},
  [54] = {.lex_state = 44, .external_lex_state = 3},
  [55] = {.lex_state = 44, .external_lex_state = 3},
  [56] = {.lex_state = 44, .external_lex_state = 2},
  [57] = {.lex_state = 44, .external_lex_state = 3},
  [58] = {.lex_state = 44, .external_lex_state = 3},
  [59] = {.lex_state = 44, .external_lex_state = 3},
  [60] = {.lex_state = 44, .external_lex_state = 3},
  [61] = {.lex_state = 44, .external_lex_state = 3},
  [62] = {.lex_state = 44, .external_lex_state = 3},
  [63] = {.lex_state = 44, .external_lex_state = 3},
  [64] = {.lex_state = 44, .external_lex_state = 3},
  [65] = {.lex_state = 44, .external_lex_state = 3},
  [66] = {.lex_state = 44, .external_lex_state = 2},
  [67] = {.lex_state = 44, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 44, .external_lex_state = 2},
  [70] = {.lex_state = 44, .external_lex_state = 2},
  [71] = {.lex_state = 44, .external_lex_state = 2},
  [72] = {.lex_state = 8, .external_lex_state = 4},
  [73] = {.lex_state = 8, .external_lex_state = 4},
  [74] = {.lex_state = 8, .external_lex_state = 4},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 8, .external_lex_state = 4},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 3, .external_lex_state = 2},
  [80] = {.lex_state = 8, .external_lex_state = 2},
  [81] = {.lex_state = 8, .external_lex_state = 2},
  [82] = {.lex_state = 8, .external_lex_state = 4},
  [83] = {.lex_state = 8, .external_lex_state = 4},
  [84] = {.lex_state = 8, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 8, .external_lex_state = 4},
  [87] = {.lex_state = 8, .external_lex_state = 2},
  [88] = {.lex_state = 8, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 6},
  [94] = {.lex_state = 8, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 6},
  [96] = {.lex_state = 8, .external_lex_state = 2},
  [97] = {.lex_state = 7, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 7},
  [100] = {.lex_state = 7, .external_lex_state = 2},
  [101] = {.lex_state = 4, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 6},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 0, .external_lex_state = 6},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 39, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 44, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 44, .external_lex_state = 2},
  [119] = {.lex_state = 40, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 44, .external_lex_state = 2},
  [122] = {.lex_state = 44, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 40, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 39, .external_lex_state = 2},
  [131] = {.lex_state = 44, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 44, .external_lex_state = 2},
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
    STATE(65), 1,
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
    STATE(64), 1,
      sym_end_tag,
    STATE(65), 1,
      sym_self_closing_tag,
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
    STATE(65), 1,
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
    STATE(45), 1,
      sym_end_tag,
    STATE(65), 1,
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
    STATE(65), 1,
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
    ACTIONS(115), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(9), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [897] = 7,
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
    ACTIONS(115), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(9), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [927] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(119), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(6), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [954] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(121), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(12), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(123), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(8), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(125), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(7), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1035] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(127), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(5), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(129), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(2), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(131), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(4), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(133), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(3), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__interpreted_string_literal,
    ACTIONS(135), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(14), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [1170] = 7,
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
  [1195] = 7,
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
  [1220] = 7,
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
  [1245] = 7,
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
  [1270] = 6,
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
  [1293] = 6,
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
  [1315] = 6,
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
  [1337] = 6,
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
  [1359] = 6,
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
  [1381] = 6,
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
  [1403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_SQUOTE,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      anon_sym_LPAREN,
  [1415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(181), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LT,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LT,
    ACTIONS(197), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(209), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(213), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LT,
    ACTIONS(193), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LT,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(189), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(185), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(217), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT,
    ACTIONS(221), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(201), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT,
    ACTIONS(225), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LT,
    ACTIONS(229), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LT,
    ACTIONS(233), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(205), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LT,
    ACTIONS(233), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 6,
      anon_sym_SQUOTE,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
      anon_sym_LPAREN,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LT,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(239), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 5,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(245), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(251), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      sym_attribute_value,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_quoted_attribute_value,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(263), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_attribute_value,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym_quoted_attribute_value,
  [1898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_GT,
      anon_sym_EQ,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(239), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(245), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(282), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [1994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__start_tag_name,
    ACTIONS(288), 1,
      sym__script_start_tag_name,
    ACTIONS(290), 1,
      sym__style_start_tag_name,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__script_start_tag_name,
    ACTIONS(290), 1,
      sym__style_start_tag_name,
    ACTIONS(292), 1,
      sym__start_tag_name,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT_SLASH,
    ACTIONS(296), 1,
      sym_raw_text,
    STATE(69), 1,
      sym_end_tag,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(300), 1,
      sym_raw_text,
    STATE(62), 1,
      sym_end_tag,
  [2046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      sym_raw_text,
    STATE(63), 1,
      sym_end_tag,
  [2059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT_SLASH,
    ACTIONS(304), 1,
      sym_raw_text,
    STATE(70), 1,
      sym_end_tag,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_GT,
      sym_attribute_name,
      anon_sym_th_COLON,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      aux_sym_quoted_attribute_value_token1,
  [2100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(58), 1,
      sym_end_tag,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__end_tag_name,
    ACTIONS(312), 1,
      sym_erroneous_end_tag_name,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      aux_sym_quoted_attribute_value_token1,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      aux_sym_quoted_attribute_value_token2,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_end_tag,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT_SLASH,
    STATE(46), 1,
      sym_end_tag,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      aux_sym_quoted_attribute_value_token2,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(330), 1,
      sym__end_tag_name,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT_SLASH,
    STATE(47), 1,
      sym_end_tag,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_doctype_token1,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__end_tag_name,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_GT,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__doctype,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_GT,
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_th_attribute_name_token1,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_erroneous_end_tag_name,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_GT,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_GT,
  [2306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [2313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [2320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_th_attribute_name_token1,
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
  [2334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
  [2341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__end_tag_name,
  [2348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_erroneous_end_tag_name,
  [2355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_doctype_token1,
  [2362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_GT,
  [2369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_GT,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__doctype,
  [2390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
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
  [SMALL_STATE(24)] = 897,
  [SMALL_STATE(25)] = 927,
  [SMALL_STATE(26)] = 954,
  [SMALL_STATE(27)] = 981,
  [SMALL_STATE(28)] = 1008,
  [SMALL_STATE(29)] = 1035,
  [SMALL_STATE(30)] = 1062,
  [SMALL_STATE(31)] = 1089,
  [SMALL_STATE(32)] = 1116,
  [SMALL_STATE(33)] = 1143,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1220,
  [SMALL_STATE(37)] = 1245,
  [SMALL_STATE(38)] = 1270,
  [SMALL_STATE(39)] = 1293,
  [SMALL_STATE(40)] = 1315,
  [SMALL_STATE(41)] = 1337,
  [SMALL_STATE(42)] = 1359,
  [SMALL_STATE(43)] = 1381,
  [SMALL_STATE(44)] = 1403,
  [SMALL_STATE(45)] = 1415,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1443,
  [SMALL_STATE(48)] = 1457,
  [SMALL_STATE(49)] = 1471,
  [SMALL_STATE(50)] = 1485,
  [SMALL_STATE(51)] = 1499,
  [SMALL_STATE(52)] = 1513,
  [SMALL_STATE(53)] = 1527,
  [SMALL_STATE(54)] = 1541,
  [SMALL_STATE(55)] = 1555,
  [SMALL_STATE(56)] = 1569,
  [SMALL_STATE(57)] = 1583,
  [SMALL_STATE(58)] = 1597,
  [SMALL_STATE(59)] = 1611,
  [SMALL_STATE(60)] = 1625,
  [SMALL_STATE(61)] = 1639,
  [SMALL_STATE(62)] = 1653,
  [SMALL_STATE(63)] = 1667,
  [SMALL_STATE(64)] = 1681,
  [SMALL_STATE(65)] = 1695,
  [SMALL_STATE(66)] = 1709,
  [SMALL_STATE(67)] = 1723,
  [SMALL_STATE(68)] = 1737,
  [SMALL_STATE(69)] = 1749,
  [SMALL_STATE(70)] = 1763,
  [SMALL_STATE(71)] = 1777,
  [SMALL_STATE(72)] = 1791,
  [SMALL_STATE(73)] = 1804,
  [SMALL_STATE(74)] = 1815,
  [SMALL_STATE(75)] = 1828,
  [SMALL_STATE(76)] = 1842,
  [SMALL_STATE(77)] = 1852,
  [SMALL_STATE(78)] = 1868,
  [SMALL_STATE(79)] = 1882,
  [SMALL_STATE(80)] = 1898,
  [SMALL_STATE(81)] = 1908,
  [SMALL_STATE(82)] = 1920,
  [SMALL_STATE(83)] = 1930,
  [SMALL_STATE(84)] = 1940,
  [SMALL_STATE(85)] = 1952,
  [SMALL_STATE(86)] = 1966,
  [SMALL_STATE(87)] = 1976,
  [SMALL_STATE(88)] = 1985,
  [SMALL_STATE(89)] = 1994,
  [SMALL_STATE(90)] = 2007,
  [SMALL_STATE(91)] = 2020,
  [SMALL_STATE(92)] = 2033,
  [SMALL_STATE(93)] = 2046,
  [SMALL_STATE(94)] = 2059,
  [SMALL_STATE(95)] = 2068,
  [SMALL_STATE(96)] = 2081,
  [SMALL_STATE(97)] = 2090,
  [SMALL_STATE(98)] = 2100,
  [SMALL_STATE(99)] = 2110,
  [SMALL_STATE(100)] = 2120,
  [SMALL_STATE(101)] = 2130,
  [SMALL_STATE(102)] = 2140,
  [SMALL_STATE(103)] = 2150,
  [SMALL_STATE(104)] = 2160,
  [SMALL_STATE(105)] = 2168,
  [SMALL_STATE(106)] = 2178,
  [SMALL_STATE(107)] = 2186,
  [SMALL_STATE(108)] = 2194,
  [SMALL_STATE(109)] = 2202,
  [SMALL_STATE(110)] = 2212,
  [SMALL_STATE(111)] = 2222,
  [SMALL_STATE(112)] = 2229,
  [SMALL_STATE(113)] = 2236,
  [SMALL_STATE(114)] = 2243,
  [SMALL_STATE(115)] = 2250,
  [SMALL_STATE(116)] = 2257,
  [SMALL_STATE(117)] = 2264,
  [SMALL_STATE(118)] = 2271,
  [SMALL_STATE(119)] = 2278,
  [SMALL_STATE(120)] = 2285,
  [SMALL_STATE(121)] = 2292,
  [SMALL_STATE(122)] = 2299,
  [SMALL_STATE(123)] = 2306,
  [SMALL_STATE(124)] = 2313,
  [SMALL_STATE(125)] = 2320,
  [SMALL_STATE(126)] = 2327,
  [SMALL_STATE(127)] = 2334,
  [SMALL_STATE(128)] = 2341,
  [SMALL_STATE(129)] = 2348,
  [SMALL_STATE(130)] = 2355,
  [SMALL_STATE(131)] = 2362,
  [SMALL_STATE(132)] = 2369,
  [SMALL_STATE(133)] = 2376,
  [SMALL_STATE(134)] = 2383,
  [SMALL_STATE(135)] = 2390,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
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
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute_name, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(78),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_th_attribute, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
