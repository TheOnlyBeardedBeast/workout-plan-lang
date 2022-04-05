#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_DOTmeta = 14,
  anon_sym_COLON = 15,
  sym_integerNumber = 16,
  sym_stringParam = 17,
  sym_floatNumber = 18,
  sym_timeUnit = 19,
  anon_sym_DOTdescription = 20,
  sym_source_file = 21,
  sym_workoutPlanDefinition = 22,
  sym_workoutDefinition = 23,
  sym_exerciseGroup = 24,
  sym_superset = 25,
  sym_sets = 26,
  sym_reps = 27,
  sym_pause = 28,
  sym_rest = 29,
  sym_exercise = 30,
  sym_meta = 31,
  sym_title = 32,
  sym_description = 33,
  aux_sym_workoutPlanDefinition_repeat1 = 34,
  aux_sym_workoutPlanDefinition_repeat2 = 35,
  aux_sym_workoutDefinition_repeat1 = 36,
  aux_sym_exerciseGroup_repeat1 = 37,
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
  [anon_sym_DOTmeta] = ".meta",
  [anon_sym_COLON] = ":",
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
  [sym_meta] = "meta",
  [sym_title] = "title",
  [sym_description] = "description",
  [aux_sym_workoutPlanDefinition_repeat1] = "workoutPlanDefinition_repeat1",
  [aux_sym_workoutPlanDefinition_repeat2] = "workoutPlanDefinition_repeat2",
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
  [anon_sym_DOTmeta] = anon_sym_DOTmeta,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_meta] = sym_meta,
  [sym_title] = sym_title,
  [sym_description] = sym_description,
  [aux_sym_workoutPlanDefinition_repeat1] = aux_sym_workoutPlanDefinition_repeat1,
  [aux_sym_workoutPlanDefinition_repeat2] = aux_sym_workoutPlanDefinition_repeat2,
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
  [anon_sym_DOTmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_meta] = {
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
  [aux_sym_workoutPlanDefinition_repeat2] = {
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
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(71);
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
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_plan);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_workout);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTsuperset);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOTsets);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOTreps);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOTpause);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOTrest);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_exercise);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOTmeta);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integerNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_stringParam);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_floatNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_timeUnit);
      END_STATE();
    case 76:
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
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 73},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 73},
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
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
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
    [anon_sym_DOTmeta] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integerNumber] = ACTIONS(1),
    [sym_stringParam] = ACTIONS(1),
    [sym_timeUnit] = ACTIONS(1),
    [anon_sym_DOTdescription] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym_workoutPlanDefinition] = STATE(97),
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
    STATE(10), 1,
      sym_reps,
    STATE(20), 1,
      sym_pause,
    STATE(60), 1,
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
    STATE(9), 1,
      sym_reps,
    STATE(19), 1,
      sym_pause,
    STATE(54), 1,
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
    STATE(8), 1,
      sym_reps,
    STATE(18), 1,
      sym_pause,
    STATE(48), 1,
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
    STATE(9), 1,
      sym_reps,
    STATE(19), 1,
      sym_pause,
    STATE(54), 1,
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
    STATE(24), 1,
      sym_pause,
    STATE(57), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [157] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(18), 1,
      sym_pause,
    STATE(48), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [175] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(19), 1,
      sym_pause,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
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
    STATE(22), 1,
      sym_title,
    STATE(47), 1,
      sym_description,
    STATE(90), 1,
      sym_superset,
  [215] = 4,
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
  [230] = 1,
    ACTIONS(41), 6,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [239] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [254] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [269] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(17), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [284] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_group,
    ACTIONS(52), 1,
      anon_sym_exercise,
    STATE(17), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workoutDefinition_repeat1,
  [299] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(57), 1,
      sym_rest,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [311] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(48), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [323] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [335] = 1,
    ACTIONS(55), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [343] = 5,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_description,
    STATE(81), 1,
      sym_superset,
  [359] = 1,
    ACTIONS(59), 5,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [367] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(61), 1,
      sym_rest,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [379] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_DOTmeta,
    STATE(25), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [390] = 1,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_DOTrest,
      anon_sym_exercise,
  [397] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    STATE(25), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [408] = 3,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_exercise,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [419] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    STATE(34), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [430] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      anon_sym_workout,
    STATE(30), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [441] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_workout,
    STATE(30), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [452] = 3,
    ACTIONS(86), 1,
      anon_sym_workout,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [463] = 3,
    ACTIONS(86), 1,
      anon_sym_workout,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [474] = 3,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [485] = 3,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [496] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [507] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [518] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [529] = 3,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [540] = 3,
    ACTIONS(72), 1,
      anon_sym_DOTmeta,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_meta,
      aux_sym_workoutPlanDefinition_repeat2,
  [551] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [562] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [573] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [584] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(37), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [595] = 3,
    ACTIONS(86), 1,
      anon_sym_workout,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_workoutDefinition,
      aux_sym_workoutPlanDefinition_repeat1,
  [606] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [617] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_superset,
  [627] = 1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [633] = 1,
    ACTIONS(108), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [639] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_description,
  [649] = 1,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [655] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_superset,
  [665] = 1,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [671] = 1,
    ACTIONS(23), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [677] = 1,
    ACTIONS(118), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [683] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_description,
  [693] = 1,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [699] = 1,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [705] = 1,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [711] = 1,
    ACTIONS(19), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [717] = 1,
    ACTIONS(126), 3,
      anon_sym_RBRACE,
      anon_sym_group,
      anon_sym_exercise,
  [723] = 1,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [728] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_title,
  [735] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [740] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmeta,
  [745] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_workout,
  [750] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_title,
  [757] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_title,
  [764] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
  [771] = 2,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      sym_timeUnit,
  [778] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_title,
  [785] = 1,
    ACTIONS(144), 1,
      sym_floatNumber,
  [789] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [793] = 1,
    ACTIONS(148), 1,
      sym_floatNumber,
  [797] = 1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
  [801] = 1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [805] = 1,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [809] = 1,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
  [813] = 1,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
  [817] = 1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
  [821] = 1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
  [825] = 1,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [829] = 1,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [833] = 1,
    ACTIONS(166), 1,
      sym_timeUnit,
  [837] = 1,
    ACTIONS(168), 1,
      sym_timeUnit,
  [841] = 1,
    ACTIONS(170), 1,
      sym_integerNumber,
  [845] = 1,
    ACTIONS(172), 1,
      sym_integerNumber,
  [849] = 1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [853] = 1,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
  [857] = 1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
  [861] = 1,
    ACTIONS(178), 1,
      sym_integerNumber,
  [865] = 1,
    ACTIONS(180), 1,
      sym_stringParam,
  [869] = 1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
  [873] = 1,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
  [877] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [881] = 1,
    ACTIONS(188), 1,
      sym_stringParam,
  [885] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [889] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [893] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [897] = 1,
    ACTIONS(196), 1,
      sym_stringParam,
  [901] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [905] = 1,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 379,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 408,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 452,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 518,
  [SMALL_STATE(39)] = 529,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 551,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 584,
  [SMALL_STATE(45)] = 595,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 617,
  [SMALL_STATE(48)] = 627,
  [SMALL_STATE(49)] = 633,
  [SMALL_STATE(50)] = 639,
  [SMALL_STATE(51)] = 649,
  [SMALL_STATE(52)] = 655,
  [SMALL_STATE(53)] = 665,
  [SMALL_STATE(54)] = 671,
  [SMALL_STATE(55)] = 677,
  [SMALL_STATE(56)] = 683,
  [SMALL_STATE(57)] = 693,
  [SMALL_STATE(58)] = 699,
  [SMALL_STATE(59)] = 705,
  [SMALL_STATE(60)] = 711,
  [SMALL_STATE(61)] = 717,
  [SMALL_STATE(62)] = 723,
  [SMALL_STATE(63)] = 728,
  [SMALL_STATE(64)] = 735,
  [SMALL_STATE(65)] = 740,
  [SMALL_STATE(66)] = 745,
  [SMALL_STATE(67)] = 750,
  [SMALL_STATE(68)] = 757,
  [SMALL_STATE(69)] = 764,
  [SMALL_STATE(70)] = 771,
  [SMALL_STATE(71)] = 778,
  [SMALL_STATE(72)] = 785,
  [SMALL_STATE(73)] = 789,
  [SMALL_STATE(74)] = 793,
  [SMALL_STATE(75)] = 797,
  [SMALL_STATE(76)] = 801,
  [SMALL_STATE(77)] = 805,
  [SMALL_STATE(78)] = 809,
  [SMALL_STATE(79)] = 813,
  [SMALL_STATE(80)] = 817,
  [SMALL_STATE(81)] = 821,
  [SMALL_STATE(82)] = 825,
  [SMALL_STATE(83)] = 829,
  [SMALL_STATE(84)] = 833,
  [SMALL_STATE(85)] = 837,
  [SMALL_STATE(86)] = 841,
  [SMALL_STATE(87)] = 845,
  [SMALL_STATE(88)] = 849,
  [SMALL_STATE(89)] = 853,
  [SMALL_STATE(90)] = 857,
  [SMALL_STATE(91)] = 861,
  [SMALL_STATE(92)] = 865,
  [SMALL_STATE(93)] = 869,
  [SMALL_STATE(94)] = 873,
  [SMALL_STATE(95)] = 877,
  [SMALL_STATE(96)] = 881,
  [SMALL_STATE(97)] = 885,
  [SMALL_STATE(98)] = 889,
  [SMALL_STATE(99)] = 893,
  [SMALL_STATE(100)] = 897,
  [SMALL_STATE(101)] = 901,
  [SMALL_STATE(102)] = 905,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutDefinition_repeat1, 2), SHIFT_REPEAT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat2, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat2, 2), SHIFT_REPEAT(89),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pause, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2), SHIFT_REPEAT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlanDefinition_repeat1, 2), SHIFT_REPEAT(71),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlanDefinition, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutDefinition, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
