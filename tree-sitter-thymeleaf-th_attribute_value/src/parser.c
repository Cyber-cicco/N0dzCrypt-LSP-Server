#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_true = 1,
  sym_false_literal = 2,
  sym_null_literal = 3,
  sym_number_literal = 4,
  anon_sym_SQUOTE = 5,
  sym__escape_sequence = 6,
  anon_sym_NULL = 7,
  sym_greater_than = 8,
  sym_greater_than_2 = 9,
  sym_lesser_than = 10,
  sym_lesser_than_2 = 11,
  sym_greater_or_equal = 12,
  sym_greater_or_equal_2 = 13,
  sym_lesser_or_equal = 14,
  sym_lesser_or_equal_2 = 15,
  sym_equal = 16,
  sym_not_equal = 17,
  sym_equal_2 = 18,
  sym_not_equal_2 = 19,
  sym_and = 20,
  sym_or = 21,
  sym_add = 22,
  sym_substract = 23,
  sym_multiply = 24,
  sym_divide = 25,
  sym_modulo = 26,
  anon_sym_QMARK = 27,
  anon_sym_COLON = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  sym_true_literal = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [sym_false_literal] = "false_literal",
  [sym_null_literal] = "null_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_SQUOTE] = "'",
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
  [sym_true_literal] = "true_literal",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [sym_false_literal] = sym_false_literal,
  [sym_null_literal] = sym_null_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_true_literal] = sym_true_literal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
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
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (!eof && lookahead == 0) ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'q') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (!eof && lookahead == 0) ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_greater_than_2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_lesser_than);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_lesser_than_2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_greater_or_equal);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_greater_or_equal_2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_lesser_or_equal);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_lesser_or_equal_2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_equal_2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_not_equal_2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_substract);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
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
    [sym_true_literal] = STATE(3),
    [anon_sym_true] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_literal, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
