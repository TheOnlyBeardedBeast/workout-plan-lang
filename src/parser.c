#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_plan = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_workout = 4,
  anon_sym_group = 5,
  anon_sym_DOTsets = 6,
  anon_sym_LPAREN = 7,
  aux_sym_sets_token1 = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOTreps = 10,
  anon_sym_DOTpause = 11,
  anon_sym_DOTrest = 12,
  anon_sym_exercise = 13,
  sym_stringParam = 14,
  sym_floatNumber = 15,
  sym_timeUnit = 16,
  anon_sym_DOTdescription = 17,
  sym_source_file = 18,
  sym_workoutPlanDefinition = 19,
  sym_workoutDefinition = 20,
  sym_exerciseGroup = 21,
  sym_sets = 22,
  sym_reps = 23,
  sym_pause = 24,
  sym_rest = 25,
  sym_exercise = 26,
  sym_title = 27,
  sym_description = 28,
  aux_sym_workoutPlanDefinition_repeat1 = 29,
  aux_sym_workoutDefinition_repeat1 = 30,
  aux_sym_exerciseGroup_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_plan] = "plan",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_workout] = "workout",
  [anon_sym_group] = "group",
  [anon_sym_DOTsets] = ".sets",
  [anon_sym_LPAREN] = "(",
  [aux_sym_sets_token1] = "sets_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTreps] = ".reps",
  [anon_sym_DOTpause] = ".pause",
  [anon_sym_DOTrest] = ".rest",
  [anon_sym_exercise] = "exercise",
  [sym_stringParam] = "stringParam",
  [sym_floatNumber] = "floatNumber",
  [sym_timeUnit] = "timeUnit",
  [anon_sym_DOTdescription] = ".description",
  [sym_source_file] = "source_file",
  [sym_workoutPlanDefinition] = "workoutPlanDefinition",
  [sym_workoutDefinition] = "workoutDefinition",
  [sym_exerciseGroup] = "exerciseGroup",
  [sym_sets] = "sets",
  [sym_reps] = "reps",
  [sym_pause] = "pause",
  [sym_rest] = "rest",
  [sym_exercise] = "exercise",
  [sym_title] = "title",
  [sym_description] = "description",
  [aux_sym_workoutPlanDefinition_repeat1] = "workoutPlanDefinition_repeat1",
  [aux_sym_workoutDefinition_repeat1] = "workoutDefinition_repeat1",
  [aux_sym_exerciseGroup_repeat1] = "exerciseGroup_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_plan] = anon_sym_plan,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_workout] = anon_sym_workout,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_DOTsets] = anon_sym_DOTsets,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_sets_token1] = aux_sym_sets_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTreps] = anon_sym_DOTreps,
  [anon_sym_DOTpause] = anon_sym_DOTpause,
  [anon_sym_DOTrest] = anon_sym_DOTrest,
  [anon_sym_exercise] = anon_sym_exercise,
  [sym_stringParam] = sym_stringParam,
  [sym_floatNumber] = sym_floatNumber,
  [sym_timeUnit] = sym_timeUnit,
  [anon_sym_DOTdescription] = anon_sym_DOTdescription,
  [sym_source_file] = sym_source_file,
  [sym_workoutPlanDefinition] = sym_workoutPlanDefinition,
  [sym_workoutDefinition] = sym_workoutDefinition,
  [sym_exerciseGroup] = sym_exerciseGroup,
  [sym_sets] = sym_sets,
  [sym_reps] = sym_reps,
  [sym_pause] = sym_pause,
  [sym_rest] = sym_rest,
  [sym_exercise] = sym_exercise,
  [sym_title] = sym_title,
  [sym_description] = sym_description,
  [aux_sym_workoutPlanDefinition_repeat1] = aux_sym_workoutPlanDefinition_repeat1,
  [aux_sym_workoutDefinition_repeat1] = aux_sym_workoutDefinition_repeat1,
  [aux_sym_exerciseGroup_repeat1] = aux_sym_exerciseGroup_repeat1,
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
  [anon_sym_group] = {
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
  [anon_sym_exercise] = {
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
  [anon_sym_DOTdescription] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
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
  [sym_exerciseGroup] = {
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
  [sym_exercise] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_workoutPlanDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workoutDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exerciseGroup_repeat1] = {
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
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(59);
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
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_plan);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_workout);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOTsets);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_sets_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOTreps);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOTpause);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOTrest);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_exercise);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_stringParam);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_floatNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_timeUnit);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOTdescription);
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_plan] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_workout] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_DOTsets] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_sets_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTreps] = ACTIONS(1),
    [anon_sym_DOTpause] = ACTIONS(1),
    [anon_sym_DOTrest] = ACTIONS(1),
    [anon_sym_exercise] = ACTIONS(1),
    [sym_stringParam] = ACTIONS(1),
    [sym_timeUnit] = ACTIONS(1),
    [anon_sym_DOTdescription] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_workoutPlanDefinition] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_plan] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_DOTsets,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    STATE(3), 1,
      sym_description,
    STATE(5), 1,
      sym_sets,
    STATE(8), 1,
      sym_reps,
    STATE(19), 1,
      sym_pause,
    STATE(43), 1,
      sym_rest,
    ACTIONS(7), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [36] = 9,
    ACTIONS(9), 1,
      anon_sym_DOTsets,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(6), 1,
      sym_sets,
    STATE(10), 1,
      sym_reps,
    STATE(18), 1,
      sym_pause,
    STATE(34), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [66] = 1,
    ACTIONS(21), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      anon_sym_DOTdescription,
  [78] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(10), 1,
      sym_reps,
    STATE(18), 1,
      sym_pause,
    STATE(34), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [102] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(9), 1,
      sym_reps,
    STATE(20), 1,
      sym_pause,
    STATE(39), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [126] = 1,
    ACTIONS(25), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [137] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(18), 1,
      sym_pause,
    STATE(34), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [155] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(22), 1,
      sym_pause,
    STATE(36), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [173] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(20), 1,
      sym_pause,
    STATE(39), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [191] = 1,
    ACTIONS(29), 6,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [200] = 4,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_group,
    ACTIONS(35), 1,
      anon_sym_exercise,
    STATE(14), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [215] = 4,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_group,
    ACTIONS(42), 1,
      anon_sym_exercise,
    STATE(13), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [230] = 4,
    ACTIONS(33), 1,
      anon_sym_group,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [245] = 4,
    ACTIONS(33), 1,
      anon_sym_group,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [260] = 4,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_group,
    ACTIONS(35), 1,
      anon_sym_exercise,
    STATE(13), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [275] = 1,
    ACTIONS(49), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [283] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(39), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [295] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(34), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [307] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(36), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [319] = 1,
    ACTIONS(51), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [327] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(40), 1,
      sym_rest,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [339] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_exercise,
    STATE(23), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [350] = 3,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [361] = 3,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_workout,
    STATE(25), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [372] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_workout,
    STATE(25), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [383] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [394] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [405] = 3,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [416] = 3,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [427] = 3,
    ACTIONS(35), 1,
      anon_sym_exercise,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [438] = 1,
    ACTIONS(77), 4,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [445] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [456] = 1,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [462] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_description,
  [472] = 1,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [478] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_description,
  [488] = 1,
    ACTIONS(85), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [494] = 1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [500] = 1,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [506] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_description,
  [516] = 1,
    ACTIONS(91), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [522] = 1,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [528] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [534] = 1,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [540] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_title,
  [547] = 1,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [552] = 1,
    ACTIONS(101), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [557] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_title,
  [564] = 2,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_timeUnit,
  [571] = 1,
    ACTIONS(107), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [576] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_title,
  [583] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_title,
  [590] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_title,
  [597] = 1,
    ACTIONS(109), 1,
      aux_sym_sets_token1,
  [601] = 1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
  [605] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [609] = 1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
  [613] = 1,
    ACTIONS(117), 1,
      sym_floatNumber,
  [617] = 1,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [621] = 1,
    ACTIONS(121), 1,
      sym_floatNumber,
  [625] = 1,
    ACTIONS(123), 1,
      sym_timeUnit,
  [629] = 1,
    ACTIONS(125), 1,
      sym_timeUnit,
  [633] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [637] = 1,
    ACTIONS(129), 1,
      aux_sym_sets_token1,
  [641] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [645] = 1,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
  [649] = 1,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
  [653] = 1,
    ACTIONS(137), 1,
      sym_stringParam,
  [657] = 1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
  [661] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [665] = 1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [669] = 1,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
  [673] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [677] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [681] = 1,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
  [685] = 1,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
  [689] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 350,
  [SMALL_STATE(25)] = 361,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 445,
  [SMALL_STATE(34)] = 456,
  [SMALL_STATE(35)] = 462,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 488,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 500,
  [SMALL_STATE(41)] = 506,
  [SMALL_STATE(42)] = 516,
  [SMALL_STATE(43)] = 522,
  [SMALL_STATE(44)] = 528,
  [SMALL_STATE(45)] = 534,
  [SMALL_STATE(46)] = 540,
  [SMALL_STATE(47)] = 547,
  [SMALL_STATE(48)] = 552,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 564,
  [SMALL_STATE(51)] = 571,
  [SMALL_STATE(52)] = 576,
  [SMALL_STATE(53)] = 583,
  [SMALL_STATE(54)] = 590,
  [SMALL_STATE(55)] = 597,
  [SMALL_STATE(56)] = 601,
  [SMALL_STATE(57)] = 605,
  [SMALL_STATE(58)] = 609,
  [SMALL_STATE(59)] = 613,
  [SMALL_STATE(60)] = 617,
  [SMALL_STATE(61)] = 621,
  [SMALL_STATE(62)] = 625,
  [SMALL_STATE(63)] = 629,
  [SMALL_STATE(64)] = 633,
  [SMALL_STATE(65)] = 637,
  [SMALL_STATE(66)] = 641,
  [SMALL_STATE(67)] = 645,
  [SMALL_STATE(68)] = 649,
  [SMALL_STATE(69)] = 653,
  [SMALL_STATE(70)] = 657,
  [SMALL_STATE(71)] = 661,
  [SMALL_STATE(72)] = 665,
  [SMALL_STATE(73)] = 669,
  [SMALL_STATE(74)] = 673,
  [SMALL_STATE(75)] = 677,
  [SMALL_STATE(76)] = 681,
  [SMALL_STATE(77)] = 685,
  [SMALL_STATE(78)] = 689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(54),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2), SHIFT_REPEAT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pause, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_workoutLang(void) {
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
