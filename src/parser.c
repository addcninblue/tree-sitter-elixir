#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_number = 1,
  sym_atom = 2,
  sym_string = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_defmodule = 11,
  anon_sym_do = 12,
  anon_sym_end = 13,
  sym_source_file = 14,
  sym_boolean = 15,
  sym_list = 16,
  sym_tuple = 17,
  sym_defmodule = 18,
  sym_do = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_list_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [sym_source_file] = "source_file",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_defmodule] = "defmodule",
  [sym_do] = "do",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_defmodule] = anon_sym_defmodule,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [sym_source_file] = sym_source_file,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_defmodule] = sym_defmodule,
  [sym_do] = sym_do,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(28);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '~') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '^') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(51);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(9);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(51);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '~') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_defmodule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_defmodule] = ACTIONS(13),
  },
  [2] = {
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_defmodule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_atom] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(20),
    [anon_sym_false] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(26),
    [anon_sym_defmodule] = ACTIONS(29),
  },
  [3] = {
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_defmodule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_number] = ACTIONS(34),
    [sym_atom] = ACTIONS(34),
    [sym_string] = ACTIONS(34),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_defmodule] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_number] = ACTIONS(36),
    [sym_atom] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [anon_sym_true] = ACTIONS(36),
    [anon_sym_false] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_RBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_defmodule] = ACTIONS(36),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_number] = ACTIONS(38),
    [sym_atom] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(38),
    [anon_sym_false] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_defmodule] = ACTIONS(38),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_atom] = ACTIONS(40),
    [sym_string] = ACTIONS(40),
    [anon_sym_true] = ACTIONS(40),
    [anon_sym_false] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_defmodule] = ACTIONS(40),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_number] = ACTIONS(42),
    [sym_atom] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_defmodule] = ACTIONS(42),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
  [12] = 1,
    ACTIONS(46), 9,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
  [24] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_boolean,
      sym_list,
    ACTIONS(48), 3,
      sym_number,
      sym_atom,
      sym_string,
  [44] = 1,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
  [56] = 1,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
  [68] = 1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
  [80] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_boolean,
      sym_list,
    ACTIONS(58), 3,
      sym_number,
      sym_atom,
      sym_string,
  [100] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_boolean,
      sym_list,
    ACTIONS(62), 3,
      sym_number,
      sym_atom,
      sym_string,
  [117] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_list_repeat1,
    ACTIONS(67), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [128] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_list_repeat1,
  [138] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_list_repeat1,
  [148] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_list_repeat1,
  [158] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_list_repeat1,
  [168] = 1,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [174] = 2,
    ACTIONS(79), 1,
      anon_sym_do,
    STATE(13), 1,
      sym_do,
  [181] = 1,
    ACTIONS(81), 1,
      anon_sym_end,
  [185] = 1,
    ACTIONS(83), 1,
      sym_atom,
  [189] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 12,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 100,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 128,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 148,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 168,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 185,
  [SMALL_STATE(25)] = 189,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
