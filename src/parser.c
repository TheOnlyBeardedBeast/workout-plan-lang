#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_plan = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_workout = 4,
  anon_sym_exercise = 5,
  anon_sym_DOTsets = 6,
  anon_sym_LPAREN = 7,
  aux_sym_sets_token1 = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOTreps = 10,
  anon_sym_DOTpause = 11,
  anon_sym_DOTrest = 12,
  sym_stringParam = 13,
  sym_floatNumber = 14,
  sym_timeUnit = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_workoutPlanDefinition = 18,
  sym_workoutDefinition = 19,
  sym_exercise = 20,
  sym_sets = 21,
  sym_reps = 22,
  sym_pause = 23,
  sym_rest = 24,
  sym_title = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_workoutPlanDefinition_repeat1 = 27,
  aux_sym_workoutDefinition_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_plan] = "plan",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_workout] = "workout",
  [anon_sym_exercise] = "exercise",
  [anon_sym_DOTsets] = ".sets",
  [anon_sym_LPAREN] = "(",
  [aux_sym_sets_token1] = "sets_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTreps] = ".reps",
  [anon_sym_DOTpause] = ".pause",
  [anon_sym_DOTrest] = ".rest",
  [sym_stringParam] = "stringParam",
  [sym_floatNumber] = "floatNumber",
  [sym_timeUnit] = "timeUnit",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_workoutPlanDefinition] = "workoutPlanDefinition",
  [sym_workoutDefinition] = "workoutDefinition",
  [sym_exercise] = "exercise",
  [sym_sets] = "sets",
  [sym_reps] = "reps",
  [sym_pause] = "pause",
  [sym_rest] = "rest",
  [sym_title] = "title",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_workoutPlanDefinition_repeat1] = "workoutPlanDefinition_repeat1",
  [aux_sym_workoutDefinition_repeat1] = "workoutDefinition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_plan] = anon_sym_plan,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_workout] = anon_sym_workout,
  [anon_sym_exercise] = anon_sym_exercise,
  [anon_sym_DOTsets] = anon_sym_DOTsets,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_sets_token1] = aux_sym_sets_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTreps] = anon_sym_DOTreps,
  [anon_sym_DOTpause] = anon_sym_DOTpause,
  [anon_sym_DOTrest] = anon_sym_DOTrest,
  [sym_stringParam] = sym_stringParam,
  [sym_floatNumber] = sym_floatNumber,
  [sym_timeUnit] = sym_timeUnit,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_workoutPlanDefinition] = sym_workoutPlanDefinition,
  [sym_workoutDefinition] = sym_workoutDefinition,
  [sym_exercise] = sym_exercise,
  [sym_sets] = sym_sets,
  [sym_reps] = sym_reps,
  [sym_pause] = sym_pause,
  [sym_rest] = sym_rest,
  [sym_title] = sym_title,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_workoutPlanDefinition_repeat1] = aux_sym_workoutPlanDefinition_repeat1,
  [aux_sym_workoutDefinition_repeat1] = aux_sym_workoutDefinition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_plan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exercise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sets_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTreps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTpause] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTrest] = {
    .visible = true,
    .named = false,
  },
  [sym_stringParam] = {
    .visible = true,
    .named = true,
  },
  [sym_floatNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_timeUnit] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_workoutPlanDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_workoutDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_exercise] = {
    .visible = true,
    .named = true,
  },
  [sym_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_reps] = {
    .visible = true,
    .named = true,
  },
  [sym_pause] = {
    .visible = true,
    .named = true,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workoutPlanDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workoutDefinition_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_plan);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_workout);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_exercise);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOTsets);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_sets_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOTreps);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTpause);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOTrest);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_stringParam);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_floatNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_timeUnit);
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_plan] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_workout] = ACTIONS(1),
    [anon_sym_exercise] = ACTIONS(1),
    [anon_sym_DOTsets] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_sets_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTreps] = ACTIONS(1),
    [anon_sym_DOTpause] = ACTIONS(1),
    [anon_sym_DOTrest] = ACTIONS(1),
    [sym_stringParam] = ACTIONS(1),
    [sym_timeUnit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__definition] = STATE(7),
    [sym_workoutPlanDefinition] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_plan] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_DOTsets,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(3), 1,
      sym_sets,
    STATE(6), 1,
      sym_reps,
    STATE(13), 1,
      sym_pause,
    STATE(30), 1,
      sym_rest,
    ACTIONS(7), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [29] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(5), 1,
      sym_reps,
    STATE(12), 1,
      sym_pause,
    STATE(21), 1,
      sym_rest,
    ACTIONS(17), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [52] = 1,
    ACTIONS(19), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_exercise,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
  [62] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(18), 1,
      sym_pause,
    STATE(24), 1,
      sym_rest,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [79] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(12), 1,
      sym_pause,
    STATE(21), 1,
      sym_rest,
    ACTIONS(17), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [96] = 3,
    ACTIONS(5), 1,
      anon_sym_plan,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym__definition,
      sym_workoutPlanDefinition,
      aux_sym_source_file_repeat1,
  [108] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_plan,
    STATE(8), 3,
      sym__definition,
      sym_workoutPlanDefinition,
      aux_sym_source_file_repeat1,
  [120] = 1,
    ACTIONS(30), 5,
      anon_sym_RBRACE,
      anon_sym_exercise,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
  [128] = 3,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      anon_sym_workout,
    STATE(10), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [139] = 3,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_exercise,
    STATE(11), 2,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [150] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(24), 1,
      sym_rest,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [161] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(21), 1,
      sym_rest,
    ACTIONS(17), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [172] = 3,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_workout,
    STATE(10), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [183] = 3,
    ACTIONS(44), 1,
      anon_sym_workout,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [194] = 3,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_exercise,
    STATE(19), 2,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [205] = 1,
    ACTIONS(52), 4,
      anon_sym_RBRACE,
      anon_sym_exercise,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
  [212] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(27), 1,
      sym_rest,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [223] = 3,
    ACTIONS(50), 1,
      anon_sym_exercise,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [234] = 1,
    ACTIONS(58), 3,
      anon_sym_RBRACE,
      anon_sym_exercise,
      anon_sym_DOTrest,
  [240] = 1,
    ACTIONS(21), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [245] = 1,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [250] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_plan,
  [255] = 1,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [260] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_title,
  [267] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_title,
  [274] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [279] = 1,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [284] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_plan,
  [289] = 1,
    ACTIONS(17), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [294] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_exercise,
  [299] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_title,
  [306] = 1,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
  [310] = 1,
    ACTIONS(76), 1,
      sym_floatNumber,
  [314] = 1,
    ACTIONS(78), 1,
      sym_floatNumber,
  [318] = 1,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
  [322] = 1,
    ACTIONS(82), 1,
      aux_sym_sets_token1,
  [326] = 1,
    ACTIONS(84), 1,
      aux_sym_sets_token1,
  [330] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [338] = 1,
    ACTIONS(90), 1,
      sym_timeUnit,
  [342] = 1,
    ACTIONS(92), 1,
      sym_timeUnit,
  [346] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [350] = 1,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
  [354] = 1,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
  [358] = 1,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
  [362] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [366] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [370] = 1,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [374] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
  [378] = 1,
    ACTIONS(110), 1,
      sym_stringParam,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 267,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 279,
  [SMALL_STATE(29)] = 284,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 294,
  [SMALL_STATE(32)] = 299,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 318,
  [SMALL_STATE(37)] = 322,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 330,
  [SMALL_STATE(40)] = 334,
  [SMALL_STATE(41)] = 338,
  [SMALL_STATE(42)] = 342,
  [SMALL_STATE(43)] = 346,
  [SMALL_STATE(44)] = 350,
  [SMALL_STATE(45)] = 354,
  [SMALL_STATE(46)] = 358,
  [SMALL_STATE(47)] = 362,
  [SMALL_STATE(48)] = 366,
  [SMALL_STATE(49)] = 370,
  [SMALL_STATE(50)] = 374,
  [SMALL_STATE(51)] = 378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2), SHIFT_REPEAT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pause, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_workout(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
