#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_DOTsuperset = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOTsets = 9,
  anon_sym_DOTreps = 10,
  anon_sym_DOTpause = 11,
  anon_sym_DOTrest = 12,
  anon_sym_exercise = 13,
  sym_integerNumber = 14,
  sym_stringParam = 15,
  sym_floatNumber = 16,
  sym_timeUnit = 17,
  anon_sym_DOTdescription = 18,
  sym_source_file = 19,
  sym_workoutPlanDefinition = 20,
  sym_workoutDefinition = 21,
  sym_exerciseGroup = 22,
  sym_superset = 23,
  sym_sets = 24,
  sym_reps = 25,
  sym_pause = 26,
  sym_rest = 27,
  sym_exercise = 28,
  sym_title = 29,
  sym_description = 30,
  aux_sym_workoutPlanDefinition_repeat1 = 31,
  aux_sym_workoutDefinition_repeat1 = 32,
  aux_sym_exerciseGroup_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_plan] = "plan",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_workout] = "workout",
  [anon_sym_group] = "group",
  [anon_sym_DOTsuperset] = ".superset",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTsets] = ".sets",
  [anon_sym_DOTreps] = ".reps",
  [anon_sym_DOTpause] = ".pause",
  [anon_sym_DOTrest] = ".rest",
  [anon_sym_exercise] = "exercise",
  [sym_integerNumber] = "integerNumber",
  [sym_stringParam] = "stringParam",
  [sym_floatNumber] = "floatNumber",
  [sym_timeUnit] = "timeUnit",
  [anon_sym_DOTdescription] = ".description",
  [sym_source_file] = "source_file",
  [sym_workoutPlanDefinition] = "workoutPlanDefinition",
  [sym_workoutDefinition] = "workoutDefinition",
  [sym_exerciseGroup] = "exerciseGroup",
  [sym_superset] = "superset",
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
  [anon_sym_DOTsuperset] = anon_sym_DOTsuperset,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTsets] = anon_sym_DOTsets,
  [anon_sym_DOTreps] = anon_sym_DOTreps,
  [anon_sym_DOTpause] = anon_sym_DOTpause,
  [anon_sym_DOTrest] = anon_sym_DOTrest,
  [anon_sym_exercise] = anon_sym_exercise,
  [sym_integerNumber] = sym_integerNumber,
  [sym_stringParam] = sym_stringParam,
  [sym_floatNumber] = sym_floatNumber,
  [sym_timeUnit] = sym_timeUnit,
  [anon_sym_DOTdescription] = anon_sym_DOTdescription,
  [sym_source_file] = sym_source_file,
  [sym_workoutPlanDefinition] = sym_workoutPlanDefinition,
  [sym_workoutDefinition] = sym_workoutDefinition,
  [sym_exerciseGroup] = sym_exerciseGroup,
  [sym_superset] = sym_superset,
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
  [anon_sym_DOTsuperset] = {
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
  [anon_sym_DOTsets] = {
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
  [sym_integerNumber] = {
    .visible = true,
    .named = true,
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
  [sym_superset] = {
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
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(66);
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
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_plan);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_workout);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOTsuperset);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTsets);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOTreps);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOTpause);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOTrest);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_exercise);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integerNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_stringParam);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_floatNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_timeUnit);
      END_STATE();
    case 71:
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
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 68},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_plan] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_workout] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_DOTsuperset] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTsets] = ACTIONS(1),
    [anon_sym_DOTreps] = ACTIONS(1),
    [anon_sym_DOTpause] = ACTIONS(1),
    [anon_sym_DOTrest] = ACTIONS(1),
    [anon_sym_exercise] = ACTIONS(1),
    [sym_integerNumber] = ACTIONS(1),
    [sym_stringParam] = ACTIONS(1),
    [sym_timeUnit] = ACTIONS(1),
    [anon_sym_DOTdescription] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_workoutPlanDefinition] = STATE(92),
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
    STATE(6), 1,
      sym_sets,
    STATE(9), 1,
      sym_reps,
    STATE(21), 1,
      sym_pause,
    STATE(50), 1,
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
    STATE(5), 1,
      sym_sets,
    STATE(8), 1,
      sym_reps,
    STATE(20), 1,
      sym_pause,
    STATE(53), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [66] = 1,
    ACTIONS(21), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTsuperset,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      anon_sym_DOTdescription,
  [79] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(10), 1,
      sym_reps,
    STATE(23), 1,
      sym_pause,
    STATE(45), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [103] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(8), 1,
      sym_reps,
    STATE(20), 1,
      sym_pause,
    STATE(53), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [127] = 1,
    ACTIONS(25), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTsuperset,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [139] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(23), 1,
      sym_pause,
    STATE(45), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [157] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(20), 1,
      sym_pause,
    STATE(53), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [175] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(24), 1,
      sym_pause,
    STATE(46), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [193] = 7,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_title,
    STATE(40), 1,
      sym_description,
    STATE(82), 1,
      sym_superset,
  [215] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    STATE(13), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [230] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(14), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [245] = 4,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_group,
    ACTIONS(48), 1,
      anon_sym_exercise,
    STATE(14), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [260] = 1,
    ACTIONS(51), 6,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [269] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [284] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    STATE(14), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [299] = 5,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_description,
    STATE(80), 1,
      sym_superset,
  [315] = 1,
    ACTIONS(57), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [323] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(45), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [335] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(53), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [347] = 1,
    ACTIONS(59), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [355] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(46), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [367] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(54), 1,
      sym_rest,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [379] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [390] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [401] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_workout,
    STATE(35), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [412] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [423] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [434] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [445] = 3,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_exercise,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [456] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [467] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [478] = 1,
    ACTIONS(82), 4,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [485] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_workout,
    STATE(35), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [496] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [507] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [518] = 3,
    ACTIONS(69), 1,
      anon_sym_workout,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(37), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [529] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [540] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_superset,
  [550] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [556] = 1,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [562] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_superset,
  [572] = 1,
    ACTIONS(99), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [578] = 1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [584] = 1,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [590] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_description,
  [600] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_description,
  [610] = 1,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [616] = 1,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [622] = 1,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [628] = 1,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [634] = 1,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [640] = 1,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [646] = 1,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [651] = 2,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym_timeUnit,
  [658] = 1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [663] = 1,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [668] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_title,
  [675] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_title,
  [682] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_title,
  [689] = 2,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
  [696] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_title,
  [703] = 1,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
  [707] = 1,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
  [711] = 1,
    ACTIONS(131), 1,
      sym_integerNumber,
  [715] = 1,
    ACTIONS(133), 1,
      sym_integerNumber,
  [719] = 1,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
  [723] = 1,
    ACTIONS(137), 1,
      sym_floatNumber,
  [727] = 1,
    ACTIONS(139), 1,
      sym_floatNumber,
  [731] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [735] = 1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [739] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [743] = 1,
    ACTIONS(147), 1,
      sym_timeUnit,
  [747] = 1,
    ACTIONS(149), 1,
      sym_timeUnit,
  [751] = 1,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
  [755] = 1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [759] = 1,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
  [763] = 1,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [767] = 1,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
  [771] = 1,
    ACTIONS(159), 1,
      sym_integerNumber,
  [775] = 1,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
  [779] = 1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [783] = 1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [787] = 1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [791] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [795] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [799] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [803] = 1,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
  [807] = 1,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [811] = 1,
    ACTIONS(177), 1,
      sym_stringParam,
  [815] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 193,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 315,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 347,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 379,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 412,
  [SMALL_STATE(29)] = 423,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 518,
  [SMALL_STATE(39)] = 529,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 550,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 578,
  [SMALL_STATE(46)] = 584,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 600,
  [SMALL_STATE(49)] = 610,
  [SMALL_STATE(50)] = 616,
  [SMALL_STATE(51)] = 622,
  [SMALL_STATE(52)] = 628,
  [SMALL_STATE(53)] = 634,
  [SMALL_STATE(54)] = 640,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 651,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 663,
  [SMALL_STATE(59)] = 668,
  [SMALL_STATE(60)] = 675,
  [SMALL_STATE(61)] = 682,
  [SMALL_STATE(62)] = 689,
  [SMALL_STATE(63)] = 696,
  [SMALL_STATE(64)] = 703,
  [SMALL_STATE(65)] = 707,
  [SMALL_STATE(66)] = 711,
  [SMALL_STATE(67)] = 715,
  [SMALL_STATE(68)] = 719,
  [SMALL_STATE(69)] = 723,
  [SMALL_STATE(70)] = 727,
  [SMALL_STATE(71)] = 731,
  [SMALL_STATE(72)] = 735,
  [SMALL_STATE(73)] = 739,
  [SMALL_STATE(74)] = 743,
  [SMALL_STATE(75)] = 747,
  [SMALL_STATE(76)] = 751,
  [SMALL_STATE(77)] = 755,
  [SMALL_STATE(78)] = 759,
  [SMALL_STATE(79)] = 763,
  [SMALL_STATE(80)] = 767,
  [SMALL_STATE(81)] = 771,
  [SMALL_STATE(82)] = 775,
  [SMALL_STATE(83)] = 779,
  [SMALL_STATE(84)] = 783,
  [SMALL_STATE(85)] = 787,
  [SMALL_STATE(86)] = 791,
  [SMALL_STATE(87)] = 795,
  [SMALL_STATE(88)] = 799,
  [SMALL_STATE(89)] = 803,
  [SMALL_STATE(90)] = 807,
  [SMALL_STATE(91)] = 811,
  [SMALL_STATE(92)] = 815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(63),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2), SHIFT_REPEAT(63),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pause, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2), SHIFT_REPEAT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
