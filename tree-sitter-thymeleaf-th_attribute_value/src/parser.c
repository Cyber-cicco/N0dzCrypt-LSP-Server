#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_and = 9,
  sym_or = 10,
  sym_add = 11,
  sym_substract = 12,
  sym_multiply = 13,
  sym_divide = 14,
  sym_modulo = 15,
  anon_sym_QMARK = 16,
  anon_sym_COLON = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_SQUOTE = 20,
  sym__interpreted_string_literal_basic_content = 21,
  sym__escape_sequence = 22,
  sym_source_file = 23,
  sym__node = 24,
  sym__expression = 25,
  sym_ternary_expression = 26,
  sym_parenthesized_expression = 27,
  sym_binary_expression = 28,
  sym_string_literal = 29,
  sym__interpreted_string_literal = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym__interpreted_string_literal_repeat1 = 32,
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
  [anon_sym_SQUOTE] = "'",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym__expression] = "_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym__expression] = sym__expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
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
  [sym_parenthesized_expression] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (!eof && lookahead == 0) ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'q') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 8:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (!eof && lookahead == 0) ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lesser_than);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__node] = STATE(16),
    [sym__expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_string_literal] = STATE(13),
    [sym__interpreted_string_literal] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NULL] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_NULL] = ACTIONS(11),
    [sym_greater_than] = ACTIONS(13),
    [sym_lesser_than] = ACTIONS(13),
    [sym_greater_or_equal] = ACTIONS(11),
    [sym_lesser_or_equal] = ACTIONS(11),
    [sym_equal] = ACTIONS(11),
    [sym_equal_2] = ACTIONS(11),
    [sym_not_equal] = ACTIONS(11),
    [sym_and] = ACTIONS(11),
    [sym_or] = ACTIONS(11),
    [sym_add] = ACTIONS(11),
    [sym_substract] = ACTIONS(11),
    [sym_multiply] = ACTIONS(11),
    [sym_divide] = ACTIONS(11),
    [sym_modulo] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_NULL] = ACTIONS(15),
    [sym_greater_than] = ACTIONS(17),
    [sym_lesser_than] = ACTIONS(17),
    [sym_greater_or_equal] = ACTIONS(19),
    [sym_lesser_or_equal] = ACTIONS(19),
    [sym_equal] = ACTIONS(21),
    [sym_equal_2] = ACTIONS(21),
    [sym_not_equal] = ACTIONS(21),
    [sym_and] = ACTIONS(23),
    [sym_or] = ACTIONS(25),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(33),
    [sym_lesser_or_equal] = ACTIONS(33),
    [sym_equal] = ACTIONS(33),
    [sym_equal_2] = ACTIONS(33),
    [sym_not_equal] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(33),
    [sym_substract] = ACTIONS(33),
    [sym_multiply] = ACTIONS(33),
    [sym_divide] = ACTIONS(33),
    [sym_modulo] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_NULL] = ACTIONS(37),
    [sym_greater_than] = ACTIONS(39),
    [sym_lesser_than] = ACTIONS(39),
    [sym_greater_or_equal] = ACTIONS(37),
    [sym_lesser_or_equal] = ACTIONS(37),
    [sym_equal] = ACTIONS(37),
    [sym_equal_2] = ACTIONS(37),
    [sym_not_equal] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_add] = ACTIONS(37),
    [sym_substract] = ACTIONS(37),
    [sym_multiply] = ACTIONS(37),
    [sym_divide] = ACTIONS(37),
    [sym_modulo] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_NULL] = ACTIONS(41),
    [sym_greater_than] = ACTIONS(43),
    [sym_lesser_than] = ACTIONS(43),
    [sym_greater_or_equal] = ACTIONS(41),
    [sym_lesser_or_equal] = ACTIONS(41),
    [sym_equal] = ACTIONS(41),
    [sym_equal_2] = ACTIONS(41),
    [sym_not_equal] = ACTIONS(41),
    [sym_and] = ACTIONS(41),
    [sym_or] = ACTIONS(41),
    [sym_add] = ACTIONS(41),
    [sym_substract] = ACTIONS(41),
    [sym_multiply] = ACTIONS(41),
    [sym_divide] = ACTIONS(41),
    [sym_modulo] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(33),
    [sym_lesser_or_equal] = ACTIONS(33),
    [sym_equal] = ACTIONS(33),
    [sym_equal_2] = ACTIONS(33),
    [sym_not_equal] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(33),
    [sym_substract] = ACTIONS(33),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(17),
    [sym_lesser_than] = ACTIONS(17),
    [sym_greater_or_equal] = ACTIONS(19),
    [sym_lesser_or_equal] = ACTIONS(19),
    [sym_equal] = ACTIONS(21),
    [sym_equal_2] = ACTIONS(21),
    [sym_not_equal] = ACTIONS(21),
    [sym_and] = ACTIONS(23),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(17),
    [sym_lesser_than] = ACTIONS(17),
    [sym_greater_or_equal] = ACTIONS(19),
    [sym_lesser_or_equal] = ACTIONS(19),
    [sym_equal] = ACTIONS(21),
    [sym_equal_2] = ACTIONS(21),
    [sym_not_equal] = ACTIONS(21),
    [sym_and] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(17),
    [sym_lesser_than] = ACTIONS(17),
    [sym_greater_or_equal] = ACTIONS(19),
    [sym_lesser_or_equal] = ACTIONS(19),
    [sym_equal] = ACTIONS(33),
    [sym_equal_2] = ACTIONS(33),
    [sym_not_equal] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_NULL] = ACTIONS(33),
    [sym_greater_than] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(33),
    [sym_lesser_or_equal] = ACTIONS(33),
    [sym_equal] = ACTIONS(33),
    [sym_equal_2] = ACTIONS(33),
    [sym_not_equal] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_NULL] = ACTIONS(45),
    [sym_greater_than] = ACTIONS(47),
    [sym_lesser_than] = ACTIONS(47),
    [sym_greater_or_equal] = ACTIONS(45),
    [sym_lesser_or_equal] = ACTIONS(45),
    [sym_equal] = ACTIONS(45),
    [sym_equal_2] = ACTIONS(45),
    [sym_not_equal] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_or] = ACTIONS(45),
    [sym_add] = ACTIONS(45),
    [sym_substract] = ACTIONS(45),
    [sym_multiply] = ACTIONS(45),
    [sym_divide] = ACTIONS(45),
    [sym_modulo] = ACTIONS(45),
    [anon_sym_QMARK] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_NULL] = ACTIONS(49),
    [sym_greater_than] = ACTIONS(17),
    [sym_lesser_than] = ACTIONS(17),
    [sym_greater_or_equal] = ACTIONS(19),
    [sym_lesser_or_equal] = ACTIONS(19),
    [sym_equal] = ACTIONS(21),
    [sym_equal_2] = ACTIONS(21),
    [sym_not_equal] = ACTIONS(21),
    [sym_and] = ACTIONS(23),
    [sym_or] = ACTIONS(25),
    [sym_add] = ACTIONS(27),
    [sym_substract] = ACTIONS(27),
    [sym_multiply] = ACTIONS(29),
    [sym_divide] = ACTIONS(29),
    [sym_modulo] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(23), 1,
      sym_and,
    ACTIONS(25), 1,
      sym_or,
    ACTIONS(31), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(19), 2,
      sym_greater_or_equal,
      sym_lesser_or_equal,
    ACTIONS(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(21), 3,
      sym_equal,
      sym_equal_2,
      sym_not_equal,
    ACTIONS(29), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
  [35] = 9,
    ACTIONS(23), 1,
      sym_and,
    ACTIONS(25), 1,
      sym_or,
    ACTIONS(31), 1,
      anon_sym_QMARK,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(19), 2,
      sym_greater_or_equal,
      sym_lesser_or_equal,
    ACTIONS(27), 2,
      sym_add,
      sym_substract,
    ACTIONS(21), 3,
      sym_equal,
      sym_equal_2,
      sym_not_equal,
    ACTIONS(29), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
  [70] = 7,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_NULL,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(17), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(13), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [97] = 7,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_NULL,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(17), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    STATE(13), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [124] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(8), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [141] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(14), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [158] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(4), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [175] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(15), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [192] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(7), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [209] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(9), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [226] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(10), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [243] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(11), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [260] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(3), 5,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
      sym_string_literal,
  [277] = 3,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(72), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [288] = 3,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(77), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [299] = 3,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(81), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [310] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 35,
  [SMALL_STATE(16)] = 70,
  [SMALL_STATE(17)] = 97,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 141,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 175,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 209,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 243,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 288,
  [SMALL_STATE(29)] = 299,
  [SMALL_STATE(30)] = 310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
