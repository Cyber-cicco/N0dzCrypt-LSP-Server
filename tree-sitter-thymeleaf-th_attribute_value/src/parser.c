#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  sym_greater_than = 2,
  sym_lesser_than = 3,
  sym_greater_or_equal = 4,
  sym_lesser_or_equal = 5,
  sym_equal = 6,
  sym_equal_2 = 7,
  sym_not_equal = 8,
  sym_add = 9,
  sym_substract = 10,
  sym_multiply = 11,
  sym_divide = 12,
  sym_modulo = 13,
  anon_sym_QMARK = 14,
  anon_sym_COLON = 15,
  anon_sym_SQUOTE = 16,
  sym__interpreted_string_literal_basic_content = 17,
  sym__escape_sequence = 18,
  sym_source_file = 19,
  sym__node = 20,
  sym__expression = 21,
  sym_ternary_expression = 22,
  sym_binary_expression = 23,
  sym_string_literal = 24,
  sym__interpreted_string_literal = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym__interpreted_string_literal_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
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
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
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
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
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
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lesser_than);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_modulo);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_greater_than] = ACTIONS(1),
    [sym_lesser_than] = ACTIONS(1),
    [sym_greater_or_equal] = ACTIONS(1),
    [sym_lesser_or_equal] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_equal_2] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [sym_substract] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__node] = STATE(12),
    [sym__expression] = STATE(10),
    [sym_ternary_expression] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_string_literal] = STATE(10),
    [sym__interpreted_string_literal] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NULL] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_NULL] = ACTIONS(9),
    [sym_greater_than] = ACTIONS(11),
    [sym_lesser_than] = ACTIONS(11),
    [sym_greater_or_equal] = ACTIONS(9),
    [sym_lesser_or_equal] = ACTIONS(9),
    [sym_equal] = ACTIONS(9),
    [sym_equal_2] = ACTIONS(9),
    [sym_not_equal] = ACTIONS(9),
    [sym_add] = ACTIONS(9),
    [sym_substract] = ACTIONS(9),
    [sym_multiply] = ACTIONS(9),
    [sym_divide] = ACTIONS(9),
    [sym_modulo] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_NULL] = ACTIONS(13),
    [sym_greater_than] = ACTIONS(15),
    [sym_lesser_than] = ACTIONS(15),
    [sym_greater_or_equal] = ACTIONS(17),
    [sym_lesser_or_equal] = ACTIONS(17),
    [sym_equal] = ACTIONS(19),
    [sym_equal_2] = ACTIONS(19),
    [sym_not_equal] = ACTIONS(19),
    [sym_add] = ACTIONS(21),
    [sym_substract] = ACTIONS(21),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_NULL] = ACTIONS(27),
    [sym_greater_than] = ACTIONS(29),
    [sym_lesser_than] = ACTIONS(29),
    [sym_greater_or_equal] = ACTIONS(27),
    [sym_lesser_or_equal] = ACTIONS(27),
    [sym_equal] = ACTIONS(27),
    [sym_equal_2] = ACTIONS(27),
    [sym_not_equal] = ACTIONS(27),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(27),
    [sym_divide] = ACTIONS(27),
    [sym_modulo] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_NULL] = ACTIONS(31),
    [sym_greater_than] = ACTIONS(33),
    [sym_lesser_than] = ACTIONS(33),
    [sym_greater_or_equal] = ACTIONS(31),
    [sym_lesser_or_equal] = ACTIONS(31),
    [sym_equal] = ACTIONS(31),
    [sym_equal_2] = ACTIONS(31),
    [sym_not_equal] = ACTIONS(31),
    [sym_add] = ACTIONS(31),
    [sym_substract] = ACTIONS(31),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_lesser_than] = ACTIONS(37),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_add] = ACTIONS(35),
    [sym_substract] = ACTIONS(35),
    [sym_multiply] = ACTIONS(35),
    [sym_divide] = ACTIONS(35),
    [sym_modulo] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_lesser_than] = ACTIONS(37),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_add] = ACTIONS(35),
    [sym_substract] = ACTIONS(35),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(15),
    [sym_lesser_than] = ACTIONS(15),
    [sym_greater_or_equal] = ACTIONS(17),
    [sym_lesser_or_equal] = ACTIONS(17),
    [sym_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_add] = ACTIONS(21),
    [sym_substract] = ACTIONS(21),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_lesser_than] = ACTIONS(37),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_add] = ACTIONS(21),
    [sym_substract] = ACTIONS(21),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_NULL] = ACTIONS(39),
    [sym_greater_than] = ACTIONS(15),
    [sym_lesser_than] = ACTIONS(15),
    [sym_greater_or_equal] = ACTIONS(17),
    [sym_lesser_or_equal] = ACTIONS(17),
    [sym_equal] = ACTIONS(19),
    [sym_equal_2] = ACTIONS(19),
    [sym_not_equal] = ACTIONS(19),
    [sym_add] = ACTIONS(21),
    [sym_substract] = ACTIONS(21),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(25), 1,
      anon_sym_QMARK,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(15), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(17), 2,
      sym_greater_or_equal,
      sym_lesser_or_equal,
    ACTIONS(21), 2,
      sym_add,
      sym_substract,
    ACTIONS(19), 3,
      sym_equal,
      sym_equal_2,
      sym_not_equal,
    ACTIONS(23), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
  [29] = 6,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_NULL,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(13), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [52] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_NULL,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(13), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [75] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(11), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [88] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(6), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [101] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(7), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [114] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(8), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [127] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(9), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [140] = 3,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym__interpreted_string_literal,
    STATE(3), 4,
      sym__expression,
      sym_ternary_expression,
      sym_binary_expression,
      sym_string_literal,
  [153] = 3,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(57), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [164] = 3,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(61), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [175] = 3,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(66), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [186] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 29,
  [SMALL_STATE(13)] = 52,
  [SMALL_STATE(14)] = 75,
  [SMALL_STATE(15)] = 88,
  [SMALL_STATE(16)] = 101,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 127,
  [SMALL_STATE(19)] = 140,
  [SMALL_STATE(20)] = 153,
  [SMALL_STATE(21)] = 164,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
