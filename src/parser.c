#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_plan = 1,
  anon_sym_workout = 2,
  anon_sym_group = 3,
  anon_sym_DOTsuperset = 4,
  anon_sym_DOTsets = 5,
  anon_sym_DOTreps = 6,
  anon_sym_DOTpause = 7,
  anon_sym_DOTrest = 8,
  anon_sym_exercise = 9,
  anon_sym_DOTmeta = 10,
  anon_sym_DOTdescription = 11,
  sym_integerNumber = 12,
  sym_stringParam = 13,
  sym_floatNumber = 14,
  sym_timeUnit = 15,
  sym__contextStart = 16,
  sym__contextEnd = 17,
  sym__valueStart = 18,
  sym__valueEnd = 19,
  sym__metaDivider = 20,
  sym_source_file = 21,
  sym_workoutPlan = 22,
  sym_workout = 23,
  sym_exerciseGroup = 24,
  sym_superset = 25,
  sym_sets = 26,
  sym_reps = 27,
  sym_pause = 28,
  sym_rest = 29,
  sym_exercise = 30,
  sym_meta = 31,
  sym_description = 32,
  sym_title = 33,
  aux_sym_workoutPlan_repeat1 = 34,
  aux_sym_workoutPlan_repeat2 = 35,
  aux_sym_workout_repeat1 = 36,
  aux_sym_exerciseGroup_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_plan] = "plan",
  [anon_sym_workout] = "workout",
  [anon_sym_group] = "group",
  [anon_sym_DOTsuperset] = ".superset",
  [anon_sym_DOTsets] = ".sets",
  [anon_sym_DOTreps] = ".reps",
  [anon_sym_DOTpause] = ".pause",
  [anon_sym_DOTrest] = ".rest",
  [anon_sym_exercise] = "exercise",
  [anon_sym_DOTmeta] = ".meta",
  [anon_sym_DOTdescription] = ".description",
  [sym_integerNumber] = "integerNumber",
  [sym_stringParam] = "stringParam",
  [sym_floatNumber] = "floatNumber",
  [sym_timeUnit] = "timeUnit",
  [sym__contextStart] = "_contextStart",
  [sym__contextEnd] = "_contextEnd",
  [sym__valueStart] = "_valueStart",
  [sym__valueEnd] = "_valueEnd",
  [sym__metaDivider] = "_metaDivider",
  [sym_source_file] = "source_file",
  [sym_workoutPlan] = "workoutPlan",
  [sym_workout] = "workout",
  [sym_exerciseGroup] = "exerciseGroup",
  [sym_superset] = "superset",
  [sym_sets] = "sets",
  [sym_reps] = "reps",
  [sym_pause] = "pause",
  [sym_rest] = "rest",
  [sym_exercise] = "exercise",
  [sym_meta] = "meta",
  [sym_description] = "description",
  [sym_title] = "title",
  [aux_sym_workoutPlan_repeat1] = "workoutPlan_repeat1",
  [aux_sym_workoutPlan_repeat2] = "workoutPlan_repeat2",
  [aux_sym_workout_repeat1] = "workout_repeat1",
  [aux_sym_exerciseGroup_repeat1] = "exerciseGroup_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_plan] = anon_sym_plan,
  [anon_sym_workout] = anon_sym_workout,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_DOTsuperset] = anon_sym_DOTsuperset,
  [anon_sym_DOTsets] = anon_sym_DOTsets,
  [anon_sym_DOTreps] = anon_sym_DOTreps,
  [anon_sym_DOTpause] = anon_sym_DOTpause,
  [anon_sym_DOTrest] = anon_sym_DOTrest,
  [anon_sym_exercise] = anon_sym_exercise,
  [anon_sym_DOTmeta] = anon_sym_DOTmeta,
  [anon_sym_DOTdescription] = anon_sym_DOTdescription,
  [sym_integerNumber] = sym_integerNumber,
  [sym_stringParam] = sym_stringParam,
  [sym_floatNumber] = sym_floatNumber,
  [sym_timeUnit] = sym_timeUnit,
  [sym__contextStart] = sym__contextStart,
  [sym__contextEnd] = sym__contextEnd,
  [sym__valueStart] = sym__valueStart,
  [sym__valueEnd] = sym__valueEnd,
  [sym__metaDivider] = sym__metaDivider,
  [sym_source_file] = sym_source_file,
  [sym_workoutPlan] = sym_workoutPlan,
  [sym_workout] = sym_workout,
  [sym_exerciseGroup] = sym_exerciseGroup,
  [sym_superset] = sym_superset,
  [sym_sets] = sym_sets,
  [sym_reps] = sym_reps,
  [sym_pause] = sym_pause,
  [sym_rest] = sym_rest,
  [sym_exercise] = sym_exercise,
  [sym_meta] = sym_meta,
  [sym_description] = sym_description,
  [sym_title] = sym_title,
  [aux_sym_workoutPlan_repeat1] = aux_sym_workoutPlan_repeat1,
  [aux_sym_workoutPlan_repeat2] = aux_sym_workoutPlan_repeat2,
  [aux_sym_workout_repeat1] = aux_sym_workout_repeat1,
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
  [anon_sym_DOTdescription] = {
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
  [sym__contextStart] = {
    .visible = false,
    .named = true,
  },
  [sym__contextEnd] = {
    .visible = false,
    .named = true,
  },
  [sym__valueStart] = {
    .visible = false,
    .named = true,
  },
  [sym__valueEnd] = {
    .visible = false,
    .named = true,
  },
  [sym__metaDivider] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_workoutPlan] = {
    .visible = true,
    .named = true,
  },
  [sym_workout] = {
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
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_workoutPlan_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workoutPlan_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exerciseGroup_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_metaKey = 1,
  field_metaValue = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_metaKey] = "metaKey",
  [field_metaValue] = "metaValue",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_metaKey, 2},
    {field_metaValue, 4},
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
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
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
      if (lookahead == 'a') ADVANCE(64);
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
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(63);
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
      if (lookahead == 'n') ADVANCE(65);
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
      if (lookahead == 'p') ADVANCE(57);
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
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(59);
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
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(58);
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
      ACCEPT_TOKEN(anon_sym_workout);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOTsuperset);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTsets);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTreps);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOTpause);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOTrest);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_exercise);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOTmeta);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOTdescription);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integerNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_stringParam);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_floatNumber);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '0') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_floatNumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_timeUnit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__contextStart);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__contextEnd);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__valueStart);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__valueEnd);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__metaDivider);
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
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 69},
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
  [91] = {.lex_state = 69},
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
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_plan] = ACTIONS(1),
    [anon_sym_workout] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_DOTsuperset] = ACTIONS(1),
    [anon_sym_DOTsets] = ACTIONS(1),
    [anon_sym_DOTreps] = ACTIONS(1),
    [anon_sym_DOTpause] = ACTIONS(1),
    [anon_sym_DOTrest] = ACTIONS(1),
    [anon_sym_exercise] = ACTIONS(1),
    [anon_sym_DOTmeta] = ACTIONS(1),
    [anon_sym_DOTdescription] = ACTIONS(1),
    [sym_integerNumber] = ACTIONS(1),
    [sym_stringParam] = ACTIONS(1),
    [sym_timeUnit] = ACTIONS(1),
    [sym__contextStart] = ACTIONS(1),
    [sym__contextEnd] = ACTIONS(1),
    [sym__valueStart] = ACTIONS(1),
    [sym__valueEnd] = ACTIONS(1),
    [sym__metaDivider] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym_workoutPlan] = STATE(104),
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
    STATE(27), 1,
      sym_pause,
    STATE(64), 1,
      sym_rest,
    ACTIONS(7), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
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
    STATE(12), 1,
      sym_reps,
    STATE(26), 1,
      sym_pause,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [66] = 1,
    ACTIONS(21), 10,
      anon_sym_group,
      anon_sym_DOTsuperset,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      anon_sym_DOTdescription,
      sym__contextStart,
      sym__contextEnd,
  [79] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(10), 1,
      sym_reps,
    STATE(25), 1,
      sym_pause,
    STATE(51), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [103] = 7,
    ACTIONS(11), 1,
      anon_sym_DOTreps,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(12), 1,
      sym_reps,
    STATE(26), 1,
      sym_pause,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [127] = 1,
    ACTIONS(25), 9,
      anon_sym_group,
      anon_sym_DOTsuperset,
      anon_sym_DOTsets,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      sym__contextStart,
      sym__contextEnd,
  [139] = 1,
    ACTIONS(27), 8,
      anon_sym_group,
      anon_sym_DOTreps,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      anon_sym_DOTdescription,
      sym__contextStart,
      sym__contextEnd,
  [150] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(26), 1,
      sym_pause,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [168] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(22), 1,
      sym_pause,
    STATE(57), 1,
      sym_rest,
    ACTIONS(29), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [186] = 7,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(33), 1,
      sym__contextStart,
    ACTIONS(35), 1,
      sym__valueStart,
    STATE(23), 1,
      sym_title,
    STATE(55), 1,
      sym_description,
    STATE(106), 1,
      sym_superset,
  [208] = 5,
    ACTIONS(13), 1,
      anon_sym_DOTpause,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(25), 1,
      sym_pause,
    STATE(51), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [226] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(41), 1,
      sym__contextEnd,
    STATE(19), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [241] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(43), 1,
      sym__contextEnd,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [256] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(45), 1,
      sym__contextEnd,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [271] = 4,
    ACTIONS(47), 1,
      anon_sym_group,
    ACTIONS(50), 1,
      anon_sym_exercise,
    ACTIONS(53), 1,
      sym__contextEnd,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [286] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(45), 1,
      sym__contextEnd,
    STATE(14), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [301] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(55), 1,
      sym__contextEnd,
    STATE(15), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [316] = 4,
    ACTIONS(37), 1,
      anon_sym_group,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(55), 1,
      sym__contextEnd,
    STATE(16), 3,
      sym_exerciseGroup,
      sym_exercise,
      aux_sym_workout_repeat1,
  [331] = 1,
    ACTIONS(57), 5,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      sym__contextEnd,
  [339] = 5,
    ACTIONS(9), 1,
      anon_sym_DOTsets,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(59), 1,
      sym__contextStart,
    STATE(63), 1,
      sym_sets,
    STATE(79), 1,
      sym_description,
  [355] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(52), 1,
      sym_rest,
    ACTIONS(61), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [367] = 5,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(63), 1,
      sym__contextStart,
    STATE(58), 1,
      sym_description,
    STATE(103), 1,
      sym_superset,
  [383] = 1,
    ACTIONS(65), 5,
      anon_sym_group,
      anon_sym_DOTpause,
      anon_sym_DOTrest,
      anon_sym_exercise,
      sym__contextEnd,
  [391] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(57), 1,
      sym_rest,
    ACTIONS(29), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [403] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(51), 1,
      sym_rest,
    ACTIONS(23), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [415] = 3,
    ACTIONS(15), 1,
      anon_sym_DOTrest,
    STATE(54), 1,
      sym_rest,
    ACTIONS(19), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [427] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(67), 1,
      sym__contextEnd,
    STATE(40), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [438] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    STATE(35), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [449] = 3,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [460] = 3,
    ACTIONS(75), 1,
      anon_sym_exercise,
    ACTIONS(78), 1,
      sym__contextEnd,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [471] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(67), 1,
      sym__contextEnd,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [482] = 3,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [493] = 3,
    ACTIONS(82), 1,
      anon_sym_workout,
    ACTIONS(84), 1,
      sym__contextEnd,
    STATE(49), 2,
      sym_workout,
      aux_sym_workoutPlan_repeat1,
  [504] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_DOTmeta,
    STATE(35), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [515] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(91), 1,
      sym__contextEnd,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [526] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(91), 1,
      sym__contextEnd,
    STATE(32), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [537] = 1,
    ACTIONS(93), 4,
      anon_sym_group,
      anon_sym_DOTrest,
      anon_sym_exercise,
      sym__contextEnd,
  [544] = 3,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [555] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(95), 1,
      sym__contextEnd,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [566] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(97), 1,
      sym__contextEnd,
    STATE(36), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [577] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(99), 1,
      sym__contextEnd,
    STATE(43), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [588] = 3,
    ACTIONS(39), 1,
      anon_sym_exercise,
    ACTIONS(97), 1,
      sym__contextEnd,
    STATE(31), 2,
      sym_exercise,
      aux_sym_exerciseGroup_repeat1,
  [599] = 3,
    ACTIONS(82), 1,
      anon_sym_workout,
    ACTIONS(101), 1,
      sym__contextEnd,
    STATE(45), 2,
      sym_workout,
      aux_sym_workoutPlan_repeat1,
  [610] = 3,
    ACTIONS(103), 1,
      anon_sym_workout,
    ACTIONS(106), 1,
      sym__contextEnd,
    STATE(45), 2,
      sym_workout,
      aux_sym_workoutPlan_repeat1,
  [621] = 3,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [632] = 3,
    ACTIONS(71), 1,
      anon_sym_DOTmeta,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_meta,
      aux_sym_workoutPlan_repeat2,
  [643] = 3,
    ACTIONS(82), 1,
      anon_sym_workout,
    ACTIONS(110), 1,
      sym__contextEnd,
    STATE(44), 2,
      sym_workout,
      aux_sym_workoutPlan_repeat1,
  [654] = 3,
    ACTIONS(82), 1,
      anon_sym_workout,
    ACTIONS(110), 1,
      sym__contextEnd,
    STATE(45), 2,
      sym_workout,
      aux_sym_workoutPlan_repeat1,
  [665] = 1,
    ACTIONS(112), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [671] = 1,
    ACTIONS(29), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [677] = 1,
    ACTIONS(114), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [683] = 1,
    ACTIONS(116), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [689] = 1,
    ACTIONS(23), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [695] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(63), 1,
      sym__contextStart,
    STATE(103), 1,
      sym_superset,
  [705] = 1,
    ACTIONS(118), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [711] = 1,
    ACTIONS(61), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [717] = 3,
    ACTIONS(31), 1,
      anon_sym_DOTsuperset,
    ACTIONS(120), 1,
      sym__contextStart,
    STATE(83), 1,
      sym_superset,
  [727] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(122), 1,
      sym__contextStart,
    STATE(92), 1,
      sym_description,
  [737] = 1,
    ACTIONS(124), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [743] = 1,
    ACTIONS(126), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [749] = 1,
    ACTIONS(128), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [755] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTdescription,
    ACTIONS(130), 1,
      sym__contextStart,
    STATE(93), 1,
      sym_description,
  [765] = 1,
    ACTIONS(19), 3,
      anon_sym_group,
      anon_sym_exercise,
      sym__contextEnd,
  [771] = 1,
    ACTIONS(132), 2,
      anon_sym_workout,
      sym__contextEnd,
  [776] = 2,
    ACTIONS(134), 1,
      sym_timeUnit,
    ACTIONS(136), 1,
      sym__valueEnd,
  [783] = 1,
    ACTIONS(138), 2,
      anon_sym_workout,
      sym__contextEnd,
  [788] = 1,
    ACTIONS(140), 2,
      anon_sym_workout,
      sym__contextEnd,
  [793] = 2,
    ACTIONS(35), 1,
      sym__valueStart,
    STATE(21), 1,
      sym_title,
  [800] = 2,
    ACTIONS(142), 1,
      sym__contextStart,
    ACTIONS(144), 1,
      sym__valueStart,
  [807] = 2,
    ACTIONS(35), 1,
      sym__valueStart,
    STATE(7), 1,
      sym_title,
  [814] = 2,
    ACTIONS(35), 1,
      sym__valueStart,
    STATE(2), 1,
      sym_title,
  [821] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmeta,
  [826] = 1,
    ACTIONS(148), 2,
      anon_sym_workout,
      sym__contextEnd,
  [831] = 2,
    ACTIONS(35), 1,
      sym__valueStart,
    STATE(59), 1,
      sym_title,
  [838] = 1,
    ACTIONS(150), 1,
      sym__metaDivider,
  [842] = 1,
    ACTIONS(152), 1,
      sym_timeUnit,
  [846] = 1,
    ACTIONS(154), 1,
      sym_floatNumber,
  [850] = 1,
    ACTIONS(130), 1,
      sym__contextStart,
  [854] = 1,
    ACTIONS(156), 1,
      sym_stringParam,
  [858] = 1,
    ACTIONS(158), 1,
      sym_integerNumber,
  [862] = 1,
    ACTIONS(160), 1,
      sym__valueStart,
  [866] = 1,
    ACTIONS(162), 1,
      sym__contextStart,
  [870] = 1,
    ACTIONS(164), 1,
      sym_stringParam,
  [874] = 1,
    ACTIONS(166), 1,
      sym__contextStart,
  [878] = 1,
    ACTIONS(168), 1,
      sym_integerNumber,
  [882] = 1,
    ACTIONS(170), 1,
      sym__valueStart,
  [886] = 1,
    ACTIONS(172), 1,
      sym__valueEnd,
  [890] = 1,
    ACTIONS(174), 1,
      sym__valueEnd,
  [894] = 1,
    ACTIONS(176), 1,
      sym_timeUnit,
  [898] = 1,
    ACTIONS(178), 1,
      sym_floatNumber,
  [902] = 1,
    ACTIONS(180), 1,
      sym__contextStart,
  [906] = 1,
    ACTIONS(182), 1,
      sym__contextStart,
  [910] = 1,
    ACTIONS(184), 1,
      sym__valueEnd,
  [914] = 1,
    ACTIONS(186), 1,
      sym__valueStart,
  [918] = 1,
    ACTIONS(188), 1,
      sym__valueEnd,
  [922] = 1,
    ACTIONS(190), 1,
      sym__valueEnd,
  [926] = 1,
    ACTIONS(192), 1,
      sym__valueStart,
  [930] = 1,
    ACTIONS(194), 1,
      sym__valueEnd,
  [934] = 1,
    ACTIONS(196), 1,
      sym__valueEnd,
  [938] = 1,
    ACTIONS(198), 1,
      sym__valueStart,
  [942] = 1,
    ACTIONS(200), 1,
      sym_stringParam,
  [946] = 1,
    ACTIONS(120), 1,
      sym__contextStart,
  [950] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [954] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [958] = 1,
    ACTIONS(63), 1,
      sym__contextStart,
  [962] = 1,
    ACTIONS(206), 1,
      sym_integerNumber,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 355,
  [SMALL_STATE(23)] = 367,
  [SMALL_STATE(24)] = 383,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 415,
  [SMALL_STATE(28)] = 427,
  [SMALL_STATE(29)] = 438,
  [SMALL_STATE(30)] = 449,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 471,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 493,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 515,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 537,
  [SMALL_STATE(39)] = 544,
  [SMALL_STATE(40)] = 555,
  [SMALL_STATE(41)] = 566,
  [SMALL_STATE(42)] = 577,
  [SMALL_STATE(43)] = 588,
  [SMALL_STATE(44)] = 599,
  [SMALL_STATE(45)] = 610,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 632,
  [SMALL_STATE(48)] = 643,
  [SMALL_STATE(49)] = 654,
  [SMALL_STATE(50)] = 665,
  [SMALL_STATE(51)] = 671,
  [SMALL_STATE(52)] = 677,
  [SMALL_STATE(53)] = 683,
  [SMALL_STATE(54)] = 689,
  [SMALL_STATE(55)] = 695,
  [SMALL_STATE(56)] = 705,
  [SMALL_STATE(57)] = 711,
  [SMALL_STATE(58)] = 717,
  [SMALL_STATE(59)] = 727,
  [SMALL_STATE(60)] = 737,
  [SMALL_STATE(61)] = 743,
  [SMALL_STATE(62)] = 749,
  [SMALL_STATE(63)] = 755,
  [SMALL_STATE(64)] = 765,
  [SMALL_STATE(65)] = 771,
  [SMALL_STATE(66)] = 776,
  [SMALL_STATE(67)] = 783,
  [SMALL_STATE(68)] = 788,
  [SMALL_STATE(69)] = 793,
  [SMALL_STATE(70)] = 800,
  [SMALL_STATE(71)] = 807,
  [SMALL_STATE(72)] = 814,
  [SMALL_STATE(73)] = 821,
  [SMALL_STATE(74)] = 826,
  [SMALL_STATE(75)] = 831,
  [SMALL_STATE(76)] = 838,
  [SMALL_STATE(77)] = 842,
  [SMALL_STATE(78)] = 846,
  [SMALL_STATE(79)] = 850,
  [SMALL_STATE(80)] = 854,
  [SMALL_STATE(81)] = 858,
  [SMALL_STATE(82)] = 862,
  [SMALL_STATE(83)] = 866,
  [SMALL_STATE(84)] = 870,
  [SMALL_STATE(85)] = 874,
  [SMALL_STATE(86)] = 878,
  [SMALL_STATE(87)] = 882,
  [SMALL_STATE(88)] = 886,
  [SMALL_STATE(89)] = 890,
  [SMALL_STATE(90)] = 894,
  [SMALL_STATE(91)] = 898,
  [SMALL_STATE(92)] = 902,
  [SMALL_STATE(93)] = 906,
  [SMALL_STATE(94)] = 910,
  [SMALL_STATE(95)] = 914,
  [SMALL_STATE(96)] = 918,
  [SMALL_STATE(97)] = 922,
  [SMALL_STATE(98)] = 926,
  [SMALL_STATE(99)] = 930,
  [SMALL_STATE(100)] = 934,
  [SMALL_STATE(101)] = 938,
  [SMALL_STATE(102)] = 942,
  [SMALL_STATE(103)] = 946,
  [SMALL_STATE(104)] = 950,
  [SMALL_STATE(105)] = 954,
  [SMALL_STATE(106)] = 958,
  [SMALL_STATE(107)] = 962,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workout_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workout_repeat1, 2), SHIFT_REPEAT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workout_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlan, 7),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlan, 6),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exerciseGroup_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlan, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlan_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlan_repeat2, 2), SHIFT_REPEAT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pause, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workoutPlan_repeat1, 2), SHIFT_REPEAT(69),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workoutPlan_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workoutPlan, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exerciseGroup, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 6, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout, 7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superset, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
