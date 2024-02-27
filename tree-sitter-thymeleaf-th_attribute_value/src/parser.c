#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_true_literal = 1,
  sym_false_literal = 2,
  sym_null_literal = 3,
  sym_number_literal = 4,
  anon_sym_SQUOTE = 5,
  sym__interpreted_string_literal_basic_content = 6,
  sym__escape_sequence = 7,
  anon_sym_NULL = 8,
  sym_greater_than = 9,
  sym_greater_than_2 = 10,
  sym_lesser_than = 11,
  sym_lesser_than_2 = 12,
  sym_greater_or_equal = 13,
  sym_greater_or_equal_2 = 14,
  sym_lesser_or_equal = 15,
  sym_lesser_or_equal_2 = 16,
  sym_equal = 17,
  sym_not_equal = 18,
  sym_equal_2 = 19,
  sym_not_equal_2 = 20,
  sym_and = 21,
  sym_or = 22,
  sym_add = 23,
  sym_substract = 24,
  sym_multiply = 25,
  sym_divide = 26,
  sym_modulo = 27,
  anon_sym_QMARK = 28,
  anon_sym_COLON = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  sym_source_file = 32,
  sym__literal = 33,
  sym_string_literal = 34,
  sym__interpreted_string_literal = 35,
  sym__node = 36,
  sym__expression = 37,
  sym_ternary_expression = 38,
  sym_parenthesized_expression = 39,
  sym_binary_expression = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym__interpreted_string_literal_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [sym_null_literal] = "null_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_SQUOTE] = "'",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_NULL] = "\0",
  [sym_greater_than] = "greater_than",
  [sym_greater_than_2] = "greater_than_2",
  [sym_lesser_than] = "lesser_than",
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
  [sym_source_file] = "source_file",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym__node] = "_node",
  [sym__expression] = "_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [sym_null_literal] = sym_null_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_greater_than] = sym_greater_than,
  [sym_greater_than_2] = sym_greater_than_2,
  [sym_lesser_than] = sym_lesser_than,
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
  [sym_source_file] = sym_source_file,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym__node] = sym__node,
  [sym__expression] = sym__expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_2] = {
    .visible = true,
    .named = true,
  },
  [sym_lesser_than] = {
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
  [sym_source_file] = {
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
      if (eof) ADVANCE(23);
      if (!eof && lookahead == 0) ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\'') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (!eof && lookahead == 0) ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_lesser_than);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
    [sym_true_literal] = ACTIONS(1),
    [sym_false_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_greater_than] = ACTIONS(1),
    [sym_greater_than_2] = ACTIONS(1),
    [sym_lesser_than] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(13),
    [sym__interpreted_string_literal] = STATE(5),
    [sym__node] = STATE(16),
    [sym__expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_true_literal] = ACTIONS(5),
    [sym_false_literal] = ACTIONS(5),
    [sym_null_literal] = ACTIONS(5),
    [sym_number_literal] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_NULL] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_true_literal] = ACTIONS(13),
    [sym_false_literal] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_NULL] = ACTIONS(13),
    [sym_greater_than] = ACTIONS(15),
    [sym_greater_than_2] = ACTIONS(13),
    [sym_lesser_than] = ACTIONS(15),
    [sym_lesser_than_2] = ACTIONS(13),
    [sym_greater_or_equal] = ACTIONS(13),
    [sym_greater_or_equal_2] = ACTIONS(13),
    [sym_lesser_or_equal] = ACTIONS(13),
    [sym_lesser_or_equal_2] = ACTIONS(13),
    [sym_equal] = ACTIONS(13),
    [sym_not_equal] = ACTIONS(13),
    [sym_equal_2] = ACTIONS(13),
    [sym_not_equal_2] = ACTIONS(13),
    [sym_and] = ACTIONS(13),
    [sym_or] = ACTIONS(13),
    [sym_add] = ACTIONS(13),
    [sym_substract] = ACTIONS(13),
    [sym_multiply] = ACTIONS(13),
    [sym_divide] = ACTIONS(13),
    [sym_modulo] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_true_literal] = ACTIONS(17),
    [sym_false_literal] = ACTIONS(17),
    [sym_null_literal] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_NULL] = ACTIONS(17),
    [sym_greater_than] = ACTIONS(19),
    [sym_greater_than_2] = ACTIONS(21),
    [sym_lesser_than] = ACTIONS(19),
    [sym_lesser_than_2] = ACTIONS(21),
    [sym_greater_or_equal] = ACTIONS(21),
    [sym_greater_or_equal_2] = ACTIONS(21),
    [sym_lesser_or_equal] = ACTIONS(21),
    [sym_lesser_or_equal_2] = ACTIONS(21),
    [sym_equal] = ACTIONS(23),
    [sym_not_equal] = ACTIONS(23),
    [sym_equal_2] = ACTIONS(23),
    [sym_not_equal_2] = ACTIONS(23),
    [sym_and] = ACTIONS(25),
    [sym_or] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_greater_than_2] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(37),
    [sym_lesser_than_2] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_greater_or_equal_2] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal_2] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal_2] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(35),
    [sym_substract] = ACTIONS(35),
    [sym_multiply] = ACTIONS(35),
    [sym_divide] = ACTIONS(35),
    [sym_modulo] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_true_literal] = ACTIONS(39),
    [sym_false_literal] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_NULL] = ACTIONS(39),
    [sym_greater_than] = ACTIONS(41),
    [sym_greater_than_2] = ACTIONS(39),
    [sym_lesser_than] = ACTIONS(41),
    [sym_lesser_than_2] = ACTIONS(39),
    [sym_greater_or_equal] = ACTIONS(39),
    [sym_greater_or_equal_2] = ACTIONS(39),
    [sym_lesser_or_equal] = ACTIONS(39),
    [sym_lesser_or_equal_2] = ACTIONS(39),
    [sym_equal] = ACTIONS(39),
    [sym_not_equal] = ACTIONS(39),
    [sym_equal_2] = ACTIONS(39),
    [sym_not_equal_2] = ACTIONS(39),
    [sym_and] = ACTIONS(39),
    [sym_or] = ACTIONS(39),
    [sym_add] = ACTIONS(39),
    [sym_substract] = ACTIONS(39),
    [sym_multiply] = ACTIONS(39),
    [sym_divide] = ACTIONS(39),
    [sym_modulo] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_true_literal] = ACTIONS(43),
    [sym_false_literal] = ACTIONS(43),
    [sym_null_literal] = ACTIONS(43),
    [sym_number_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_NULL] = ACTIONS(43),
    [sym_greater_than] = ACTIONS(45),
    [sym_greater_than_2] = ACTIONS(43),
    [sym_lesser_than] = ACTIONS(45),
    [sym_lesser_than_2] = ACTIONS(43),
    [sym_greater_or_equal] = ACTIONS(43),
    [sym_greater_or_equal_2] = ACTIONS(43),
    [sym_lesser_or_equal] = ACTIONS(43),
    [sym_lesser_or_equal_2] = ACTIONS(43),
    [sym_equal] = ACTIONS(43),
    [sym_not_equal] = ACTIONS(43),
    [sym_equal_2] = ACTIONS(43),
    [sym_not_equal_2] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_or] = ACTIONS(43),
    [sym_add] = ACTIONS(43),
    [sym_substract] = ACTIONS(43),
    [sym_multiply] = ACTIONS(43),
    [sym_divide] = ACTIONS(43),
    [sym_modulo] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_greater_than_2] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(37),
    [sym_lesser_than_2] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_greater_or_equal_2] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal_2] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal_2] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(35),
    [sym_substract] = ACTIONS(35),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(19),
    [sym_greater_than_2] = ACTIONS(21),
    [sym_lesser_than] = ACTIONS(19),
    [sym_lesser_than_2] = ACTIONS(21),
    [sym_greater_or_equal] = ACTIONS(21),
    [sym_greater_or_equal_2] = ACTIONS(21),
    [sym_lesser_or_equal] = ACTIONS(21),
    [sym_lesser_or_equal_2] = ACTIONS(21),
    [sym_equal] = ACTIONS(23),
    [sym_not_equal] = ACTIONS(23),
    [sym_equal_2] = ACTIONS(23),
    [sym_not_equal_2] = ACTIONS(23),
    [sym_and] = ACTIONS(25),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(19),
    [sym_greater_than_2] = ACTIONS(21),
    [sym_lesser_than] = ACTIONS(19),
    [sym_lesser_than_2] = ACTIONS(21),
    [sym_greater_or_equal] = ACTIONS(21),
    [sym_greater_or_equal_2] = ACTIONS(21),
    [sym_lesser_or_equal] = ACTIONS(21),
    [sym_lesser_or_equal_2] = ACTIONS(21),
    [sym_equal] = ACTIONS(23),
    [sym_not_equal] = ACTIONS(23),
    [sym_equal_2] = ACTIONS(23),
    [sym_not_equal_2] = ACTIONS(23),
    [sym_and] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(19),
    [sym_greater_than_2] = ACTIONS(21),
    [sym_lesser_than] = ACTIONS(19),
    [sym_lesser_than_2] = ACTIONS(21),
    [sym_greater_or_equal] = ACTIONS(21),
    [sym_greater_or_equal_2] = ACTIONS(21),
    [sym_lesser_or_equal] = ACTIONS(21),
    [sym_lesser_or_equal_2] = ACTIONS(21),
    [sym_equal] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal_2] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_true_literal] = ACTIONS(35),
    [sym_false_literal] = ACTIONS(35),
    [sym_null_literal] = ACTIONS(35),
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_NULL] = ACTIONS(35),
    [sym_greater_than] = ACTIONS(37),
    [sym_greater_than_2] = ACTIONS(35),
    [sym_lesser_than] = ACTIONS(37),
    [sym_lesser_than_2] = ACTIONS(35),
    [sym_greater_or_equal] = ACTIONS(35),
    [sym_greater_or_equal_2] = ACTIONS(35),
    [sym_lesser_or_equal] = ACTIONS(35),
    [sym_lesser_or_equal_2] = ACTIONS(35),
    [sym_equal] = ACTIONS(35),
    [sym_not_equal] = ACTIONS(35),
    [sym_equal_2] = ACTIONS(35),
    [sym_not_equal_2] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(47),
    [sym_false_literal] = ACTIONS(47),
    [sym_null_literal] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_NULL] = ACTIONS(47),
    [sym_greater_than] = ACTIONS(49),
    [sym_greater_than_2] = ACTIONS(47),
    [sym_lesser_than] = ACTIONS(49),
    [sym_lesser_than_2] = ACTIONS(47),
    [sym_greater_or_equal] = ACTIONS(47),
    [sym_greater_or_equal_2] = ACTIONS(47),
    [sym_lesser_or_equal] = ACTIONS(47),
    [sym_lesser_or_equal_2] = ACTIONS(47),
    [sym_equal] = ACTIONS(47),
    [sym_not_equal] = ACTIONS(47),
    [sym_equal_2] = ACTIONS(47),
    [sym_not_equal_2] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_or] = ACTIONS(47),
    [sym_add] = ACTIONS(47),
    [sym_substract] = ACTIONS(47),
    [sym_multiply] = ACTIONS(47),
    [sym_divide] = ACTIONS(47),
    [sym_modulo] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_true_literal] = ACTIONS(51),
    [sym_false_literal] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(51),
    [sym_number_literal] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_NULL] = ACTIONS(51),
    [sym_greater_than] = ACTIONS(19),
    [sym_greater_than_2] = ACTIONS(21),
    [sym_lesser_than] = ACTIONS(19),
    [sym_lesser_than_2] = ACTIONS(21),
    [sym_greater_or_equal] = ACTIONS(21),
    [sym_greater_or_equal_2] = ACTIONS(21),
    [sym_lesser_or_equal] = ACTIONS(21),
    [sym_lesser_or_equal_2] = ACTIONS(21),
    [sym_equal] = ACTIONS(23),
    [sym_not_equal] = ACTIONS(23),
    [sym_equal_2] = ACTIONS(23),
    [sym_not_equal_2] = ACTIONS(23),
    [sym_and] = ACTIONS(25),
    [sym_or] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [sym_substract] = ACTIONS(29),
    [sym_multiply] = ACTIONS(31),
    [sym_divide] = ACTIONS(31),
    [sym_modulo] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(25), 1,
      sym_and,
    ACTIONS(27), 1,
      sym_or,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(19), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(29), 2,
      sym_add,
      sym_substract,
    ACTIONS(31), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(23), 4,
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
  [40] = 9,
    ACTIONS(25), 1,
      sym_and,
    ACTIONS(27), 1,
      sym_or,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      sym_greater_than,
      sym_lesser_than,
    ACTIONS(29), 2,
      sym_add,
      sym_substract,
    ACTIONS(31), 3,
      sym_multiply,
      sym_divide,
      sym_modulo,
    ACTIONS(23), 4,
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
  [80] = 8,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_NULL,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(17), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(13), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [114] = 8,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_NULL,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    STATE(17), 2,
      sym__node,
      aux_sym_source_file_repeat1,
    ACTIONS(63), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(13), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [148] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(75), 4,
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
  [172] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(77), 4,
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
  [196] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(79), 4,
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
  [220] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(81), 4,
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
  [244] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(83), 4,
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
  [268] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(85), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(10), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [292] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(87), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(11), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [316] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(89), 4,
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
  [340] = 5,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__interpreted_string_literal,
    ACTIONS(91), 4,
      sym_true_literal,
      sym_false_literal,
      sym_null_literal,
      sym_number_literal,
    STATE(15), 6,
      sym__literal,
      sym_string_literal,
      sym__expression,
      sym_ternary_expression,
      sym_parenthesized_expression,
      sym_binary_expression,
  [364] = 3,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(95), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [375] = 3,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(100), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [386] = 3,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(104), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [397] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 40,
  [SMALL_STATE(16)] = 80,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 292,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 364,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(27),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
