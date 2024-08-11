#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_keyword_token1 = 2,
  aux_sym_keyword_token2 = 3,
  aux_sym_keyword_token3 = 4,
  aux_sym_keyword_token4 = 5,
  aux_sym_keyword_token5 = 6,
  aux_sym_keyword_token6 = 7,
  aux_sym_keyword_token7 = 8,
  aux_sym_keyword_token8 = 9,
  aux_sym_keyword_token9 = 10,
  aux_sym_keyword_token10 = 11,
  aux_sym_keyword_token11 = 12,
  aux_sym_keyword_token12 = 13,
  aux_sym_keyword_token13 = 14,
  aux_sym_keyword_token14 = 15,
  aux_sym_keyword_token15 = 16,
  aux_sym_keyword_token16 = 17,
  aux_sym_keyword_token17 = 18,
  aux_sym_keyword_token18 = 19,
  aux_sym_keyword_token19 = 20,
  anon_sym_BANG = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  sym_variable = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_AMP = 36,
  anon_sym_PIPE = 37,
  anon_sym_GT_GT = 38,
  anon_sym_LT_LT = 39,
  anon_sym_PERCENT = 40,
  aux_sym_numeric_token1 = 41,
  aux_sym_numeric_token2 = 42,
  aux_sym_numeric_token3 = 43,
  sym_character = 44,
  sym_label = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym__line = 48,
  sym_instruction = 49,
  sym_keyword = 50,
  sym__arg = 51,
  sym_expression = 52,
  sym_logic_expression = 53,
  sym_constant = 54,
  sym_operator = 55,
  sym_numeric = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_source_file_repeat2 = 58,
  aux_sym_instruction_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_keyword_token2] = "keyword_token2",
  [aux_sym_keyword_token3] = "keyword_token3",
  [aux_sym_keyword_token4] = "keyword_token4",
  [aux_sym_keyword_token5] = "keyword_token5",
  [aux_sym_keyword_token6] = "keyword_token6",
  [aux_sym_keyword_token7] = "keyword_token7",
  [aux_sym_keyword_token8] = "keyword_token8",
  [aux_sym_keyword_token9] = "keyword_token9",
  [aux_sym_keyword_token10] = "keyword_token10",
  [aux_sym_keyword_token11] = "keyword_token11",
  [aux_sym_keyword_token12] = "keyword_token12",
  [aux_sym_keyword_token13] = "keyword_token13",
  [aux_sym_keyword_token14] = "keyword_token14",
  [aux_sym_keyword_token15] = "keyword_token15",
  [aux_sym_keyword_token16] = "keyword_token16",
  [aux_sym_keyword_token17] = "keyword_token17",
  [aux_sym_keyword_token18] = "keyword_token18",
  [aux_sym_keyword_token19] = "keyword_token19",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_variable] = "variable",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PERCENT] = "%",
  [aux_sym_numeric_token1] = "numeric_token1",
  [aux_sym_numeric_token2] = "numeric_token2",
  [aux_sym_numeric_token3] = "numeric_token3",
  [sym_character] = "character",
  [sym_label] = "label",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_instruction] = "instruction",
  [sym_keyword] = "keyword",
  [sym__arg] = "_arg",
  [sym_expression] = "expression",
  [sym_logic_expression] = "logic_expression",
  [sym_constant] = "constant",
  [sym_operator] = "operator",
  [sym_numeric] = "numeric",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_keyword_token2] = aux_sym_keyword_token2,
  [aux_sym_keyword_token3] = aux_sym_keyword_token3,
  [aux_sym_keyword_token4] = aux_sym_keyword_token4,
  [aux_sym_keyword_token5] = aux_sym_keyword_token5,
  [aux_sym_keyword_token6] = aux_sym_keyword_token6,
  [aux_sym_keyword_token7] = aux_sym_keyword_token7,
  [aux_sym_keyword_token8] = aux_sym_keyword_token8,
  [aux_sym_keyword_token9] = aux_sym_keyword_token9,
  [aux_sym_keyword_token10] = aux_sym_keyword_token10,
  [aux_sym_keyword_token11] = aux_sym_keyword_token11,
  [aux_sym_keyword_token12] = aux_sym_keyword_token12,
  [aux_sym_keyword_token13] = aux_sym_keyword_token13,
  [aux_sym_keyword_token14] = aux_sym_keyword_token14,
  [aux_sym_keyword_token15] = aux_sym_keyword_token15,
  [aux_sym_keyword_token16] = aux_sym_keyword_token16,
  [aux_sym_keyword_token17] = aux_sym_keyword_token17,
  [aux_sym_keyword_token18] = aux_sym_keyword_token18,
  [aux_sym_keyword_token19] = aux_sym_keyword_token19,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_variable] = sym_variable,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_numeric_token1] = aux_sym_numeric_token1,
  [aux_sym_numeric_token2] = aux_sym_numeric_token2,
  [aux_sym_numeric_token3] = aux_sym_numeric_token3,
  [sym_character] = sym_character,
  [sym_label] = sym_label,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_instruction] = sym_instruction,
  [sym_keyword] = sym_keyword,
  [sym__arg] = sym__arg,
  [sym_expression] = sym_expression,
  [sym_logic_expression] = sym_logic_expression,
  [sym_constant] = sym_constant,
  [sym_operator] = sym_operator,
  [sym_numeric] = sym_numeric,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token19] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_logic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 20,
  [26] = 23,
  [27] = 13,
  [28] = 12,
  [29] = 11,
  [30] = 30,
  [31] = 10,
  [32] = 14,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '!', 66,
        '#', 94,
        '%', 86,
        '&', 82,
        '\'', 37,
        '(', 67,
        ')', 68,
        '*', 80,
        '+', 78,
        '-', 79,
        '/', 81,
        '0', 90,
        '<', 76,
        '=', 5,
        '>', 74,
        '[', 69,
        ']', 70,
        '|', 83,
      );
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '[') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c') ||
          lookahead == '|') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '%', 86,
        '&', 82,
        ')', 68,
        '*', 80,
        '+', 78,
        '-', 79,
        '/', 81,
        '<', 76,
        '=', 5,
        '>', 74,
        ']', 70,
        '|', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '0') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '|', 48,
        'A', 14,
        'a', 14,
        'C', 62,
        'c', 62,
        'D', 22,
        'd', 22,
        'E', 34,
        'e', 34,
        'H', 16,
        'h', 16,
        'L', 35,
        'l', 35,
        'N', 21,
        'n', 21,
        'O', 12,
        'o', 12,
        'R', 47,
        'r', 47,
        'T', 27,
        't', 27,
        'X', 30,
        'x', 30,
      );
      END_STATE();
    case 7:
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(16);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '|', 44,
        'N', 23,
        'n', 23,
        'O', 33,
        'o', 33,
        'R', 49,
        'r', 49,
        'T', 43,
        't', 43,
      );
      END_STATE();
    case 11:
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '|', 43,
        'B', 59,
        'b', 59,
        'L', 52,
        'l', 52,
        'R', 49,
        'r', 49,
        'T', 43,
        't', 43,
        'V', 58,
        'v', 58,
      );
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '|', 54,
        'L', 54,
        'l', 54,
        'O', 60,
        'o', 60,
        'R', 55,
        'r', 55,
        'T', 57,
        't', 57,
      );
      END_STATE();
    case 16:
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'B' ||
          lookahead == 'b' ||
          lookahead == '|') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b' ||
          lookahead == '|') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c' ||
          lookahead == '|') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd' ||
          lookahead == '|') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd' ||
          lookahead == '|') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd' ||
          lookahead == '|') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l' ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'N' ||
          lookahead == 'n' ||
          lookahead == '|') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o' ||
          lookahead == '|') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'O' ||
          lookahead == 'o' ||
          lookahead == '|') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'O' ||
          lookahead == 'o' ||
          lookahead == '|') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'O' ||
          lookahead == 'o' ||
          lookahead == '|') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o' ||
          lookahead == '|') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'R' ||
          lookahead == 'r' ||
          lookahead == '|') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'R' ||
          lookahead == 'r' ||
          lookahead == '|') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r' ||
          lookahead == '|') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'T' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'V' ||
          lookahead == 'v' ||
          lookahead == '|') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 38:
      if (eof) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '[') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c') ||
          lookahead == '|') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '\n', 42,
        '#', 94,
        '|', 6,
        'A', 17,
        'a', 17,
        'H', 24,
        'h', 24,
        'L', 7,
        'l', 7,
        'M', 26,
        'm', 26,
        'N', 8,
        'n', 8,
        'O', 31,
        'o', 31,
        'P', 20,
        'p', 20,
        'R', 29,
        'r', 29,
        'S', 9,
        's', 9,
        'X', 28,
        'x', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '#', 94,
        '|', 6,
        'A', 17,
        'a', 17,
        'H', 24,
        'h', 24,
        'L', 7,
        'l', 7,
        'M', 26,
        'm', 26,
        'N', 8,
        'n', 8,
        'O', 31,
        'o', 31,
        'P', 20,
        'p', 20,
        'R', 29,
        'r', 29,
        'S', 9,
        's', 9,
        'X', 28,
        'x', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      ADVANCE_MAP(
        '|', 44,
        'B', 59,
        'b', 59,
        'D', 45,
        'd', 45,
        'L', 52,
        'l', 52,
        'N', 23,
        'n', 23,
        'O', 61,
        'o', 61,
        'R', 49,
        'r', 49,
        'T', 43,
        't', 43,
        'V', 58,
        'v', 58,
      );
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_keyword_token5);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_keyword_token6);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_keyword_token7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_keyword_token8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_keyword_token9);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_keyword_token10);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_keyword_token11);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_keyword_token12);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_keyword_token13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_keyword_token14);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_keyword_token15);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_keyword_token16);
      if (lookahead == 'R' ||
          lookahead == 'r' ||
          lookahead == '|') ADVANCE(51);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_keyword_token17);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_keyword_token18);
      if (lookahead == 'D' ||
          lookahead == 'd' ||
          lookahead == '|') ADVANCE(46);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_keyword_token19);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_variable);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_variable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_numeric_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '|') ADVANCE(87);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_numeric_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_numeric_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '|') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_numeric_token3);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(89);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_numeric_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_label);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_numeric_token1] = ACTIONS(1),
    [aux_sym_numeric_token2] = ACTIONS(1),
    [aux_sym_numeric_token3] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__line] = STATE(38),
    [sym_instruction] = STATE(38),
    [sym_keyword] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_keyword_token1] = ACTIONS(5),
    [aux_sym_keyword_token2] = ACTIONS(5),
    [aux_sym_keyword_token3] = ACTIONS(7),
    [aux_sym_keyword_token4] = ACTIONS(5),
    [aux_sym_keyword_token5] = ACTIONS(5),
    [aux_sym_keyword_token6] = ACTIONS(5),
    [aux_sym_keyword_token7] = ACTIONS(5),
    [aux_sym_keyword_token8] = ACTIONS(5),
    [aux_sym_keyword_token9] = ACTIONS(5),
    [aux_sym_keyword_token10] = ACTIONS(5),
    [aux_sym_keyword_token11] = ACTIONS(5),
    [aux_sym_keyword_token12] = ACTIONS(5),
    [aux_sym_keyword_token13] = ACTIONS(5),
    [aux_sym_keyword_token14] = ACTIONS(5),
    [aux_sym_keyword_token15] = ACTIONS(5),
    [aux_sym_keyword_token16] = ACTIONS(5),
    [aux_sym_keyword_token17] = ACTIONS(5),
    [aux_sym_keyword_token18] = ACTIONS(5),
    [aux_sym_keyword_token19] = ACTIONS(5),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_keyword,
    STATE(40), 2,
      sym__line,
      sym_instruction,
    ACTIONS(5), 19,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
  [41] = 7,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_keyword,
    STATE(40), 2,
      sym__line,
      sym_instruction,
    ACTIONS(5), 19,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
  [82] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_keyword,
    STATE(40), 2,
      sym__line,
      sym_instruction,
    ACTIONS(5), 19,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
  [120] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 20,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      sym_comment,
  [152] = 3,
    ACTIONS(28), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 20,
      aux_sym_keyword_token1,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      aux_sym_keyword_token4,
      aux_sym_keyword_token5,
      aux_sym_keyword_token6,
      aux_sym_keyword_token7,
      aux_sym_keyword_token8,
      aux_sym_keyword_token9,
      aux_sym_keyword_token10,
      aux_sym_keyword_token11,
      aux_sym_keyword_token12,
      aux_sym_keyword_token13,
      aux_sym_keyword_token14,
      aux_sym_keyword_token15,
      aux_sym_keyword_token16,
      aux_sym_keyword_token17,
      aux_sym_keyword_token18,
      aux_sym_keyword_token19,
      sym_comment,
  [181] = 10,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_variable,
    ACTIONS(51), 1,
      sym_comment,
    STATE(32), 1,
      sym_numeric,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(48), 2,
      sym_character,
      sym_label,
    ACTIONS(45), 3,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(7), 5,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
      aux_sym_instruction_repeat1,
  [220] = 10,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_variable,
    ACTIONS(67), 1,
      sym_comment,
    STATE(32), 1,
      sym_numeric,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 2,
      sym_character,
      sym_label,
    ACTIONS(63), 3,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(9), 5,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
      aux_sym_instruction_repeat1,
  [259] = 10,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_variable,
    ACTIONS(73), 1,
      sym_comment,
    STATE(32), 1,
      sym_numeric,
    ACTIONS(65), 2,
      sym_character,
      sym_label,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 3,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(7), 5,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
      aux_sym_instruction_repeat1,
  [298] = 2,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [319] = 2,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [340] = 2,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [361] = 2,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [382] = 2,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 14,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [403] = 3,
    STATE(20), 1,
      sym_operator,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [425] = 3,
    STATE(25), 1,
      sym_operator,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [447] = 3,
    STATE(26), 1,
      sym_operator,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [469] = 3,
    STATE(23), 1,
      sym_operator,
    ACTIONS(97), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
  [491] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_variable,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(17), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [526] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(115), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(44), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [561] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(117), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(18), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [596] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(119), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(16), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [631] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(121), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(45), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [666] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(123), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(15), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [701] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(125), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(42), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [736] = 10,
    ACTIONS(99), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    ACTIONS(111), 1,
      sym_character,
    ACTIONS(113), 1,
      sym_label,
    ACTIONS(127), 1,
      sym_variable,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    STATE(43), 4,
      sym__arg,
      sym_expression,
      sym_logic_expression,
      sym_constant,
  [771] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [788] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [805] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [822] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [839] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [856] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 10,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_variable,
      aux_sym_numeric_token1,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_character,
      sym_label,
      sym_comment,
  [873] = 2,
    ACTIONS(135), 4,
      sym_variable,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
      sym_label,
    ACTIONS(133), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_numeric_token1,
      sym_character,
  [887] = 5,
    ACTIONS(107), 1,
      aux_sym_numeric_token1,
    STATE(10), 1,
      sym_constant,
    STATE(14), 1,
      sym_numeric,
    ACTIONS(109), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    ACTIONS(111), 2,
      sym_character,
      sym_label,
  [905] = 5,
    ACTIONS(137), 1,
      aux_sym_numeric_token1,
    STATE(31), 1,
      sym_constant,
    STATE(32), 1,
      sym_numeric,
    ACTIONS(63), 2,
      aux_sym_numeric_token2,
      aux_sym_numeric_token3,
    ACTIONS(139), 2,
      sym_character,
      sym_label,
  [923] = 4,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
  [936] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
  [949] = 4,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
  [962] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [967] = 1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [972] = 1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [977] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [981] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
  [985] = 1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
  [989] = 1,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
  [993] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 469,
  [SMALL_STATE(19)] = 491,
  [SMALL_STATE(20)] = 526,
  [SMALL_STATE(21)] = 561,
  [SMALL_STATE(22)] = 596,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 701,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 771,
  [SMALL_STATE(28)] = 788,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 822,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 887,
  [SMALL_STATE(35)] = 905,
  [SMALL_STATE(36)] = 923,
  [SMALL_STATE(37)] = 936,
  [SMALL_STATE(38)] = 949,
  [SMALL_STATE(39)] = 962,
  [SMALL_STATE(40)] = 967,
  [SMALL_STATE(41)] = 972,
  [SMALL_STATE(42)] = 977,
  [SMALL_STATE(43)] = 981,
  [SMALL_STATE(44)] = 985,
  [SMALL_STATE(45)] = 989,
  [SMALL_STATE(46)] = 993,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_expression, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic_expression, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_DianaCompiledLanguage(void) {
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
