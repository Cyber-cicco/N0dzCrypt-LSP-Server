#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  anon_sym_SQUOTE = 2,
  sym__interpreted_string_literal_basic_content = 3,
  sym_escape_sequence = 4,
  sym_source_file = 5,
  sym__node = 6,
  sym__expression = 7,
  sym_string_literal = 8,
  sym__interpreted_string_literal = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym__interpreted_string_literal_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [anon_sym_SQUOTE] = "'",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym__expression] = "_expression",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym__expression] = sym__expression,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (!eof && lookahead == 0) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (!eof && lookahead == 0) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_escape_sequence);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__node] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_string_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NULL] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
  },
  [2] = {
    [sym__node] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_NULL] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(7),
  },
  [3] = {
    [sym__node] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_NULL] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(23), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [11] = 3,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(27), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [22] = 3,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(31), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [33] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SQUOTE,
  [39] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SQUOTE,
  [45] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_SQUOTE,
  [51] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 51,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
