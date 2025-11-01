#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_label = 6,
  anon_sym_const = 7,
  anon_sym_LBRACE = 8,
  anon_sym_DASH = 9,
  anon_sym_RBRACE = 10,
  anon_sym_byte = 11,
  anon_sym_word = 12,
  anon_sym_dword = 13,
  anon_sym_qword = 14,
  anon_sym_ptr = 15,
  anon_sym_LBRACK = 16,
  anon_sym_PLUS = 17,
  anon_sym_RBRACK = 18,
  anon_sym_STAR = 19,
  anon_sym_rel = 20,
  anon_sym_BANG = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_PIPE = 24,
  anon_sym_CARET = 25,
  anon_sym_AMP = 26,
  anon_sym_POUND = 27,
  aux_sym_int_token1 = 28,
  aux_sym_int_token2 = 29,
  sym_float = 30,
  sym_string = 31,
  sym_word = 32,
  sym__reg = 33,
  sym_address = 34,
  sym_meta_ident = 35,
  sym__ident = 36,
  aux_sym_line_comment_token1 = 37,
  aux_sym_line_comment_token2 = 38,
  sym_block_comment = 39,
  sym_program = 40,
  sym__item = 41,
  sym_meta = 42,
  sym_label = 43,
  sym_const = 44,
  sym_instruction = 45,
  sym__expr = 46,
  sym_list = 47,
  sym_ptr = 48,
  sym__tc_expr = 49,
  sym_tc_infix = 50,
  sym_int = 51,
  sym_reg = 52,
  sym_ident = 53,
  sym_line_comment = 54,
  aux_sym_program_repeat1 = 55,
  aux_sym_program_repeat2 = 56,
  aux_sym_meta_repeat1 = 57,
  aux_sym_meta_repeat2 = 58,
  aux_sym_meta_repeat3 = 59,
  aux_sym_instruction_repeat1 = 60,
  aux_sym_instruction_repeat2 = 61,
  aux_sym_list_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_label] = "label",
  [anon_sym_const] = "const",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACE] = "}",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_const] = "const",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_list] = "list",
  [sym_ptr] = "ptr",
  [sym__tc_expr] = "_tc_expr",
  [sym_tc_infix] = "tc_infix",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_const] = sym_const,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_list] = sym_list,
  [sym_ptr] = sym_ptr,
  [sym__tc_expr] = sym__tc_expr,
  [sym_tc_infix] = sym_tc_infix,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym__tc_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tc_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_lhs = 2,
  field_name = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_ident,
  },
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
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 10,
  [25] = 8,
  [26] = 26,
  [27] = 6,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 32,
  [40] = 40,
  [41] = 13,
  [42] = 14,
  [43] = 15,
  [44] = 18,
  [45] = 12,
  [46] = 16,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '!', 56,
        '"', 1,
        '#', 63,
        '$', 19,
        '%', 58,
        '&', 62,
        '(', 32,
        ')', 33,
        '*', 53,
        '+', 51,
        ',', 30,
        '-', 38,
        '.', 143,
        '/', 57,
        '0', 72,
        ':', 31,
        ';', 150,
        '[', 50,
        ']', 52,
        '^', 61,
        'b', 131,
        'c', 107,
        'd', 126,
        'l', 92,
        'p', 122,
        'q', 127,
        'r', 100,
        'w', 109,
        '{', 36,
        '|', 60,
        '}', 39,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 63,
        '$', 20,
        '-', 7,
        '/', 10,
        '0', 82,
        ';', 150,
        'p', 16,
        'r', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(150);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 63,
        '$', 19,
        '%', 22,
        '(', 32,
        '*', 53,
        '-', 8,
        '.', 143,
        '/', 10,
        '0', 77,
        ':', 31,
        ';', 150,
        '[', 50,
        'b', 130,
        'd', 128,
        'q', 129,
        'w', 108,
        '{', 36,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 63,
        '$', 19,
        '%', 22,
        '-', 8,
        '.', 143,
        '/', 10,
        '0', 77,
        ':', 31,
        ';', 150,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 63,
        '$', 19,
        '%', 59,
        '&', 62,
        '(', 32,
        '*', 53,
        '+', 51,
        ',', 30,
        '-', 38,
        '.', 143,
        '/', 57,
        '0', 69,
        ';', 150,
        '^', 61,
        '|', 60,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '#', 63,
        '%', 58,
        '&', 62,
        '(', 32,
        ')', 33,
        '*', 53,
        '+', 51,
        ',', 30,
        '-', 37,
        '.', 143,
        '/', 57,
        ';', 150,
        ']', 52,
        '^', 61,
        'c', 107,
        'l', 92,
        '|', 60,
        '}', 39,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(150);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 27},
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
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 147},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {(TSStateId)(-1)},
  [131] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(126),
    [sym__item] = STATE(59),
    [sym_meta] = STATE(103),
    [sym_label] = STATE(103),
    [sym_const] = STATE(103),
    [sym_instruction] = STATE(103),
    [sym_line_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_word] = ACTIONS(15),
    [sym_meta_ident] = ACTIONS(17),
    [sym__ident] = ACTIONS(19),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__expr] = STATE(66),
    [sym_list] = STATE(85),
    [sym_ptr] = STATE(85),
    [sym__tc_expr] = STATE(17),
    [sym_tc_infix] = STATE(18),
    [sym_int] = STATE(7),
    [sym_reg] = STATE(10),
    [sym_ident] = STATE(9),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(29),
    [anon_sym_word] = ACTIONS(29),
    [anon_sym_dword] = ACTIONS(29),
    [anon_sym_qword] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [aux_sym_int_token2] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_string] = ACTIONS(41),
    [sym_word] = ACTIONS(43),
    [sym__reg] = ACTIONS(43),
    [sym_address] = ACTIONS(43),
    [sym_meta_ident] = ACTIONS(45),
    [sym__ident] = ACTIONS(45),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(53), 1,
      sym_string,
    STATE(3), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(81), 1,
      sym_int,
    STATE(88), 1,
      sym__expr,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(85), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [67] = 19,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(53), 1,
      sym_string,
    STATE(4), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(81), 1,
      sym_int,
    STATE(88), 1,
      sym__expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(85), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [134] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(53), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(81), 1,
      sym_int,
    STATE(88), 1,
      sym__expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(85), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [197] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(63), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [231] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(74), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(72), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [271] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(78), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [305] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(74), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(72), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [342] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(82), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(80), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [375] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(86), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(84), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [408] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(100), 1,
      anon_sym_AMP,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(94), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(90), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [450] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(100), 1,
      anon_sym_AMP,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(90), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [488] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(100), 1,
      anon_sym_AMP,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(90), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [524] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      anon_sym_AMP,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(90), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [558] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(90), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [590] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(100), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_PLUS,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(94), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(108), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [636] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(72), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [668] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(19), 1,
      sym_line_comment,
    STATE(20), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [714] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      aux_sym_int_token2,
    ACTIONS(122), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 2,
      sym_meta_ident,
      sym__ident,
    STATE(20), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(125), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [758] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(84), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [789] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      sym_float,
    ACTIONS(137), 1,
      sym_string,
    STATE(22), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(77), 1,
      sym_int,
    STATE(108), 1,
      sym_ident,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
  [836] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(104), 1,
      sym__item,
    STATE(103), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [882] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [912] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [942] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(104), 1,
      sym__item,
    STATE(103), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [988] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(61), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1018] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(28), 1,
      sym_line_comment,
    STATE(41), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1057] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(29), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1096] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1135] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(15), 1,
      sym__tc_expr,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1174] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(14), 1,
      sym__tc_expr,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1213] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(13), 1,
      sym__tc_expr,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1252] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(104), 1,
      sym__item,
    STATE(103), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1295] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1334] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(112), 1,
      sym_string,
    STATE(10), 1,
      sym_reg,
    STATE(12), 1,
      sym__tc_expr,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1373] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(37), 1,
      sym_line_comment,
    STATE(40), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1412] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(38), 1,
      sym_line_comment,
    STATE(45), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1451] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(145), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(39), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(44), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1490] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_AMP,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1527] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_AMP,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1560] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1591] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_AMP,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1620] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1647] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_AMP,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1682] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1709] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_reg,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    STATE(121), 2,
      sym_int,
      sym_ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1741] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_reg,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    STATE(113), 2,
      sym_int,
      sym_ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1773] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(49), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(166), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1800] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      sym_address,
    STATE(24), 1,
      sym_reg,
    STATE(50), 1,
      sym_line_comment,
    STATE(118), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_word,
      sym__reg,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
  [1830] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      sym_address,
    STATE(24), 1,
      sym_reg,
    STATE(51), 1,
      sym_line_comment,
    STATE(111), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_word,
      sym__reg,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
  [1860] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(172), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1884] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [1910] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_line_comment,
    STATE(82), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [1936] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [1962] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_line_comment,
    STATE(62), 1,
      aux_sym_meta_repeat3,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1985] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(57), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2006] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(58), 1,
      sym_line_comment,
    STATE(122), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2029] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_program_repeat1,
    STATE(59), 1,
      sym_line_comment,
    STATE(79), 1,
      aux_sym_program_repeat2,
  [2054] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_line_comment,
    STATE(76), 1,
      aux_sym_meta_repeat2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2077] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(61), 1,
      sym_line_comment,
    STATE(112), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2100] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_meta_repeat3,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2123] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(63), 1,
      sym_line_comment,
    STATE(71), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2146] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      sym_line_comment,
    STATE(70), 1,
      aux_sym_meta_repeat1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2169] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(65), 1,
      sym_line_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2190] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym_line_comment,
    STATE(73), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2213] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    STATE(67), 2,
      sym_line_comment,
      aux_sym_list_repeat1,
  [2234] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_program_repeat1,
    STATE(68), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2257] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_meta_repeat2,
    STATE(69), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2280] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(70), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2301] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2324] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(72), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2347] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym_line_comment,
    STATE(80), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2370] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_DASH,
    STATE(67), 1,
      aux_sym_list_repeat1,
    STATE(74), 1,
      sym_line_comment,
  [2395] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(75), 1,
      sym_line_comment,
    STATE(96), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2418] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(76), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2439] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_meta_repeat1,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2462] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      anon_sym_BANG,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2483] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(68), 1,
      aux_sym_program_repeat2,
    STATE(79), 1,
      sym_line_comment,
  [2508] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(80), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2529] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2550] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_list_repeat1,
    STATE(82), 1,
      sym_line_comment,
  [2575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2593] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2611] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2629] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2665] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2683] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2721] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2739] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2757] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2775] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2793] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2811] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2849] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_line_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2867] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(206), 3,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_RBRACE,
  [2885] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2905] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      aux_sym_int_token2,
    STATE(83), 1,
      sym_int,
    STATE(101), 1,
      sym_line_comment,
  [2924] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2941] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2975] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2992] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      aux_sym_int_token2,
    STATE(106), 1,
      sym_line_comment,
    STATE(114), 1,
      sym_int,
  [3011] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3045] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      aux_sym_int_token2,
    STATE(109), 1,
      sym_line_comment,
    STATE(121), 1,
      sym_int,
  [3064] = 5,
    ACTIONS(284), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_line_comment_token1,
    ACTIONS(288), 1,
      aux_sym_line_comment_token2,
    ACTIONS(290), 1,
      sym_block_comment,
    STATE(110), 1,
      sym_line_comment,
  [3080] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_line_comment,
  [3096] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_line_comment,
  [3112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_line_comment,
  [3128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym_line_comment,
  [3144] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      sym_line_comment,
  [3160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      aux_sym_int_token1,
    STATE(116), 1,
      sym_line_comment,
  [3176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      anon_sym_rel,
    STATE(117), 1,
      sym_line_comment,
  [3192] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_line_comment,
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      anon_sym_ptr,
    STATE(119), 1,
      sym_line_comment,
  [3224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      sym_string,
    STATE(120), 1,
      sym_line_comment,
  [3240] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_line_comment,
  [3256] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_line_comment,
  [3272] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      aux_sym_int_token1,
    STATE(123), 1,
      sym_line_comment,
  [3288] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      sym_line_comment,
  [3304] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      sym_float,
    STATE(125), 1,
      sym_line_comment,
  [3320] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_line_comment,
  [3336] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_line_comment,
  [3352] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(320), 1,
      sym_word,
    STATE(128), 1,
      sym_line_comment,
  [3368] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(322), 1,
      sym_word,
    STATE(129), 1,
      sym_line_comment,
  [3384] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
  [3388] = 1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 271,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 488,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 636,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 789,
  [SMALL_STATE(23)] = 836,
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 912,
  [SMALL_STATE(26)] = 942,
  [SMALL_STATE(27)] = 988,
  [SMALL_STATE(28)] = 1018,
  [SMALL_STATE(29)] = 1057,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1135,
  [SMALL_STATE(32)] = 1174,
  [SMALL_STATE(33)] = 1213,
  [SMALL_STATE(34)] = 1252,
  [SMALL_STATE(35)] = 1295,
  [SMALL_STATE(36)] = 1334,
  [SMALL_STATE(37)] = 1373,
  [SMALL_STATE(38)] = 1412,
  [SMALL_STATE(39)] = 1451,
  [SMALL_STATE(40)] = 1490,
  [SMALL_STATE(41)] = 1527,
  [SMALL_STATE(42)] = 1560,
  [SMALL_STATE(43)] = 1591,
  [SMALL_STATE(44)] = 1620,
  [SMALL_STATE(45)] = 1647,
  [SMALL_STATE(46)] = 1682,
  [SMALL_STATE(47)] = 1709,
  [SMALL_STATE(48)] = 1741,
  [SMALL_STATE(49)] = 1773,
  [SMALL_STATE(50)] = 1800,
  [SMALL_STATE(51)] = 1830,
  [SMALL_STATE(52)] = 1860,
  [SMALL_STATE(53)] = 1884,
  [SMALL_STATE(54)] = 1910,
  [SMALL_STATE(55)] = 1936,
  [SMALL_STATE(56)] = 1962,
  [SMALL_STATE(57)] = 1985,
  [SMALL_STATE(58)] = 2006,
  [SMALL_STATE(59)] = 2029,
  [SMALL_STATE(60)] = 2054,
  [SMALL_STATE(61)] = 2077,
  [SMALL_STATE(62)] = 2100,
  [SMALL_STATE(63)] = 2123,
  [SMALL_STATE(64)] = 2146,
  [SMALL_STATE(65)] = 2169,
  [SMALL_STATE(66)] = 2190,
  [SMALL_STATE(67)] = 2213,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2257,
  [SMALL_STATE(70)] = 2280,
  [SMALL_STATE(71)] = 2301,
  [SMALL_STATE(72)] = 2324,
  [SMALL_STATE(73)] = 2347,
  [SMALL_STATE(74)] = 2370,
  [SMALL_STATE(75)] = 2395,
  [SMALL_STATE(76)] = 2418,
  [SMALL_STATE(77)] = 2439,
  [SMALL_STATE(78)] = 2462,
  [SMALL_STATE(79)] = 2483,
  [SMALL_STATE(80)] = 2508,
  [SMALL_STATE(81)] = 2529,
  [SMALL_STATE(82)] = 2550,
  [SMALL_STATE(83)] = 2575,
  [SMALL_STATE(84)] = 2593,
  [SMALL_STATE(85)] = 2611,
  [SMALL_STATE(86)] = 2629,
  [SMALL_STATE(87)] = 2647,
  [SMALL_STATE(88)] = 2665,
  [SMALL_STATE(89)] = 2683,
  [SMALL_STATE(90)] = 2703,
  [SMALL_STATE(91)] = 2721,
  [SMALL_STATE(92)] = 2739,
  [SMALL_STATE(93)] = 2757,
  [SMALL_STATE(94)] = 2775,
  [SMALL_STATE(95)] = 2793,
  [SMALL_STATE(96)] = 2811,
  [SMALL_STATE(97)] = 2831,
  [SMALL_STATE(98)] = 2849,
  [SMALL_STATE(99)] = 2867,
  [SMALL_STATE(100)] = 2885,
  [SMALL_STATE(101)] = 2905,
  [SMALL_STATE(102)] = 2924,
  [SMALL_STATE(103)] = 2941,
  [SMALL_STATE(104)] = 2958,
  [SMALL_STATE(105)] = 2975,
  [SMALL_STATE(106)] = 2992,
  [SMALL_STATE(107)] = 3011,
  [SMALL_STATE(108)] = 3028,
  [SMALL_STATE(109)] = 3045,
  [SMALL_STATE(110)] = 3064,
  [SMALL_STATE(111)] = 3080,
  [SMALL_STATE(112)] = 3096,
  [SMALL_STATE(113)] = 3112,
  [SMALL_STATE(114)] = 3128,
  [SMALL_STATE(115)] = 3144,
  [SMALL_STATE(116)] = 3160,
  [SMALL_STATE(117)] = 3176,
  [SMALL_STATE(118)] = 3192,
  [SMALL_STATE(119)] = 3208,
  [SMALL_STATE(120)] = 3224,
  [SMALL_STATE(121)] = 3240,
  [SMALL_STATE(122)] = 3256,
  [SMALL_STATE(123)] = 3272,
  [SMALL_STATE(124)] = 3288,
  [SMALL_STATE(125)] = 3304,
  [SMALL_STATE(126)] = 3320,
  [SMALL_STATE(127)] = 3336,
  [SMALL_STATE(128)] = 3352,
  [SMALL_STATE(129)] = 3368,
  [SMALL_STATE(130)] = 3384,
  [SMALL_STATE(131)] = 3388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(116),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(120),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(125),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_asm(void) {
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
