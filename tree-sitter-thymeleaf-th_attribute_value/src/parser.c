#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  anon_sym_GT = 2,
  anon_sym_LT = 3,
  anon_sym_GT_EQ = 4,
  anon_sym_LT_EQ = 5,
  anon_sym_EQ_EQ = 6,
  anon_sym_eq = 7,
  anon_sym_ne = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_QMARK = 14,
  anon_sym_COLON = 15,
  anon_sym_SQUOTE = 16,
  sym__interpreted_string_literal_basic_content = 17,
  sym__escape_sequence = 18,
  sym_source_file = 19,
  sym__node = 20,
  sym_greater_than = 21,
  sym_lesser_than = 22,
  sym_greater_or_equal = 23,
  sym_lesser_or_equal = 24,
  sym_equal = 25,
  sym_equal_2 = 26,
  sym_not_equal = 27,
  sym_add = 28,
  sym_substract = 29,
  sym_multiply = 30,
  sym_divide = 31,
  sym_modulo = 32,
  sym__expression = 33,
  sym_ternary_expression = 34,
  sym_binary_expression = 35,
  sym_string_literal = 36,
  sym__interpreted_string_literal = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym__interpreted_string_literal_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_eq] = "eq",
  [anon_sym_ne] = "ne",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_greater_than] = "greater_than",
  [sym_lesser_than] = "lesser_than",
  [sym_greater_or_equal] = "greater_or_equal",
  [sym_lesser_or_equal] = "lesser_or_equal",
  [sym_equal] = "equal",
  [sym_equal_2] = "equal_2",
  [sym_not_equal] = "not_equal",
  [sym_add] = "add",
  [sym_substract] = "substract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [sym__expression] = "_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_ne] = anon_sym_ne,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_greater_than] = sym_greater_than,
  [sym_lesser_than] = sym_lesser_than,
  [sym_greater_or_equal] = sym_greater_or_equal,
  [sym_lesser_or_equal] = sym_lesser_or_equal,
  [sym_equal] = sym_equal,
  [sym_equal_2] = sym_equal_2,
  [sym_not_equal] = sym_not_equal,
  [sym_add] = sym_add,
  [sym_substract] = sym_substract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_modulo] = sym_modulo,
  [sym__expression] = sym__expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
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
  [sym_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_2] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (!eof && lookahead == 0) ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'q') ADVANCE(15);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '\'') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (!eof && lookahead == 0) ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__node] = STATE(12),
    [sym__expression] = STATE(7),
    [sym_ternary_expression] = STATE(7),
    [sym_binary_expression] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym__interpreted_string_literal] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NULL] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
  },
  [2] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_NULL] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_eq] = ACTIONS(21),
    [anon_sym_ne] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
  },
  [3] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_eq] = ACTIONS(37),
    [anon_sym_ne] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
  },
  [4] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_eq] = ACTIONS(37),
    [anon_sym_ne] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
  },
  [5] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_eq] = ACTIONS(37),
    [anon_sym_ne] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
  },
  [6] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_eq] = ACTIONS(37),
    [anon_sym_ne] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_NULL] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_eq] = ACTIONS(21),
    [anon_sym_ne] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(41),
  },
  [8] = {
    [sym_greater_than] = STATE(17),
    [sym_lesser_than] = STATE(17),
    [sym_greater_or_equal] = STATE(17),
    [sym_lesser_or_equal] = STATE(17),
    [sym_equal] = STATE(18),
    [sym_equal_2] = STATE(18),
    [sym_not_equal] = STATE(18),
    [sym_add] = STATE(19),
    [sym_substract] = STATE(19),
    [sym_multiply] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_modulo] = STATE(15),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_eq] = ACTIONS(21),
    [anon_sym_ne] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 15,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [22] = 2,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 15,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [44] = 2,
    ACTIONS(55), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 15,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SQUOTE,
  [66] = 6,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_NULL,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(13), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [89] = 6,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_NULL,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(13), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [112] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(2), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [125] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(6), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [138] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(8), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [151] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(3), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [164] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(4), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [177] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__interpreted_string_literal,
    STATE(5), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [190] = 3,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(71), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [201] = 3,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(75), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [212] = 3,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(79), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [223] = 1,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
  [227] = 1,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
  [231] = 1,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
  [235] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [239] = 1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
  [243] = 1,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
  [247] = 1,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
  [251] = 1,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
  [255] = 1,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
  [259] = 1,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
  [263] = 1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
  [267] = 1,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
  [271] = 1,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 22,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 201,
  [SMALL_STATE(22)] = 212,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 227,
  [SMALL_STATE(25)] = 231,
  [SMALL_STATE(26)] = 235,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 247,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 259,
  [SMALL_STATE(33)] = 263,
  [SMALL_STATE(34)] = 267,
  [SMALL_STATE(35)] = 271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 1),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substract, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_2, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_or_equal, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lesser_than, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_thymeleaf_attribute(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
