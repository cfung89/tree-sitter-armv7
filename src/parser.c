#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  [21] = 21,
  [22] = 10,
  [23] = 23,
  [24] = 6,
  [25] = 25,
  [26] = 11,
  [27] = 8,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 30,
  [38] = 34,
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 12,
  [43] = 15,
  [44] = 16,
  [45] = 14,
  [46] = 17,
  [47] = 13,
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
  [115] = 107,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '!', 58,
        '"', 1,
        '#', 65,
        '$', 19,
        '%', 60,
        '&', 64,
        '(', 34,
        ')', 35,
        '*', 55,
        '+', 53,
        ',', 32,
        '-', 40,
        '.', 155,
        '/', 59,
        '0', 74,
        ':', 33,
        ';', 162,
        '=', 24,
        '[', 52,
        ']', 54,
        '^', 63,
        'b', 140,
        'c', 116,
        'd', 135,
        'l', 101,
        'p', 131,
        'q', 136,
        'r', 109,
        'w', 118,
        '{', 38,
        '|', 62,
        '}', 41,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 65,
        '$', 20,
        '-', 7,
        '/', 10,
        '0', 87,
        ';', 162,
        'p', 16,
        'r', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '=') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '=') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(163);
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
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(68);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 25:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '"', 1,
        '#', 65,
        '$', 19,
        '%', 23,
        '(', 34,
        '*', 55,
        '-', 8,
        '.', 155,
        '/', 10,
        '0', 79,
        ':', 33,
        ';', 162,
        '=', 24,
        '[', 52,
        'b', 139,
        'd', 137,
        'q', 138,
        'w', 117,
        '{', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 26:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '"', 1,
        '#', 65,
        '$', 19,
        '%', 23,
        '-', 8,
        '.', 155,
        '/', 10,
        '0', 79,
        ':', 33,
        ';', 162,
        '=', 24,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '"', 1,
        '#', 65,
        '$', 19,
        '%', 61,
        '&', 64,
        '(', 34,
        '*', 55,
        '+', 53,
        ',', 32,
        '-', 40,
        '.', 155,
        '/', 59,
        '0', 71,
        ';', 162,
        '=', 24,
        '^', 63,
        '|', 62,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '#', 65,
        '$', 19,
        '%', 23,
        '(', 34,
        '-', 7,
        '.', 22,
        '/', 10,
        '0', 84,
        ';', 162,
        '=', 24,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(150);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 31,
        '#', 65,
        '%', 60,
        '&', 64,
        '(', 34,
        ')', 35,
        '*', 55,
        '+', 53,
        ',', 32,
        '-', 39,
        '.', 155,
        '/', 59,
        ';', 162,
        ']', 54,
        '^', 63,
        'c', 116,
        'l', 101,
        '|', 62,
        '}', 41,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(75);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(89);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 't') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 159},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {(TSStateId)(-1)},
  [140] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(135),
    [sym__item] = STATE(63),
    [sym_meta] = STATE(109),
    [sym_label] = STATE(109),
    [sym_const] = STATE(109),
    [sym_instruction] = STATE(109),
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
    [sym__expr] = STATE(73),
    [sym_list] = STATE(91),
    [sym_ptr] = STATE(91),
    [sym__tc_expr] = STATE(18),
    [sym_tc_infix] = STATE(13),
    [sym_int] = STATE(7),
    [sym_reg] = STATE(11),
    [sym_ident] = STATE(9),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(20),
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
    STATE(26), 1,
      sym_reg,
    STATE(84), 1,
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
    STATE(91), 3,
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
    STATE(26), 1,
      sym_reg,
    STATE(84), 1,
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
    STATE(91), 3,
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
    STATE(26), 1,
      sym_reg,
    STATE(84), 1,
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
    STATE(91), 3,
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
  [408] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP,
    STATE(12), 1,
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
  [446] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(13), 1,
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
  [478] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(100), 2,
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
  [520] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP,
    STATE(15), 1,
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
  [556] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_AMP,
    STATE(16), 1,
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
  [590] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(17), 1,
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
  [622] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_PLUS,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(100), 2,
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
  [668] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_int_token2,
    ACTIONS(118), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(18), 1,
      sym__tc_expr,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 2,
      sym_meta_ident,
      sym__ident,
    STATE(19), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(121), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [712] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(18), 1,
      sym__tc_expr,
    STATE(19), 1,
      aux_sym_instruction_repeat2,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [758] = 14,
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
    STATE(21), 1,
      sym_line_comment,
    STATE(26), 1,
      sym_reg,
    STATE(60), 1,
      sym_int,
    STATE(105), 1,
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
  [805] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(80), 13,
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
  [836] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    ACTIONS(135), 1,
      sym_float,
    ACTIONS(137), 1,
      sym_string,
    STATE(23), 1,
      sym_line_comment,
    STATE(26), 1,
      sym_reg,
    STATE(60), 1,
      sym_int,
    STATE(105), 1,
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
  [880] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    STATE(24), 1,
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
  [910] = 14,
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
    STATE(25), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(116), 1,
      sym__item,
    STATE(109), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [956] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(84), 12,
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
  [986] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    STATE(27), 1,
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
  [1016] = 14,
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
    STATE(28), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(116), 1,
      sym__item,
    STATE(109), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1062] = 11,
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
    STATE(26), 1,
      sym_reg,
    STATE(29), 1,
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
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1101] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(17), 1,
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
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1140] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(16), 1,
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
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1179] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(15), 1,
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
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1218] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(12), 1,
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
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1257] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(129), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(14), 1,
      sym__tc_expr,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(13), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1296] = 11,
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
    STATE(26), 1,
      sym_reg,
    STATE(35), 1,
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
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1335] = 13,
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
    STATE(36), 1,
      sym_line_comment,
    STATE(50), 1,
      aux_sym_program_repeat1,
    STATE(116), 1,
      sym__item,
    STATE(109), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1378] = 11,
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
    STATE(26), 1,
      sym_reg,
    STATE(37), 1,
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
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1417] = 11,
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
    STATE(26), 1,
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
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1456] = 11,
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
    STATE(26), 1,
      sym_reg,
    STATE(39), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__tc_expr,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1495] = 11,
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
    STATE(26), 1,
      sym_reg,
    STATE(40), 1,
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
    STATE(47), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1534] = 11,
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
    STATE(41), 1,
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
  [1571] = 9,
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
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1604] = 8,
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
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1635] = 7,
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
    STATE(44), 1,
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
  [1664] = 10,
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
  [1699] = 6,
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
  [1726] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(47), 1,
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
  [1753] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    STATE(26), 1,
      sym_reg,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
    STATE(132), 2,
      sym_int,
      sym_ident,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1785] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    STATE(26), 1,
      sym_reg,
    STATE(49), 1,
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
  [1817] = 7,
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
    STATE(50), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(166), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1844] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      sym_address,
    STATE(26), 1,
      sym_reg,
    STATE(51), 1,
      sym_line_comment,
    STATE(124), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_word,
      sym__reg,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
  [1874] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      sym_address,
    STATE(26), 1,
      sym_reg,
    STATE(52), 1,
      sym_line_comment,
    STATE(133), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_word,
      sym__reg,
    ACTIONS(57), 2,
      sym_meta_ident,
      sym__ident,
  [1904] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(53), 1,
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
  [1928] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      aux_sym_int_token2,
    STATE(54), 1,
      sym_line_comment,
    STATE(108), 1,
      sym_reg,
    STATE(125), 1,
      sym_int,
    ACTIONS(55), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1955] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym_meta_ident,
    STATE(55), 1,
      sym_line_comment,
    STATE(114), 1,
      sym_meta,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1981] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_line_comment,
    STATE(102), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2007] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_line_comment,
    STATE(102), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2033] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_meta_ident,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_line_comment,
    STATE(110), 1,
      sym_meta,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2059] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_line_comment,
    STATE(87), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2085] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_line_comment,
    STATE(69), 1,
      aux_sym_meta_repeat1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2108] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      sym_line_comment,
    STATE(86), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2131] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(62), 1,
      sym_line_comment,
    STATE(131), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2154] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_program_repeat1,
    STATE(63), 1,
      sym_line_comment,
    STATE(85), 1,
      aux_sym_program_repeat2,
  [2179] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(64), 1,
      sym_line_comment,
    STATE(128), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2202] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      sym_line_comment,
    STATE(79), 1,
      aux_sym_meta_repeat2,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2225] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(66), 1,
      sym_line_comment,
    STATE(80), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2248] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_line_comment,
    STATE(76), 1,
      aux_sym_meta_repeat3,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2271] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    STATE(68), 2,
      sym_line_comment,
      aux_sym_list_repeat1,
  [2292] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym_line_comment,
    STATE(74), 1,
      aux_sym_meta_repeat1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2315] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_meta_repeat3,
    STATE(70), 1,
      sym_line_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2338] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym_program_repeat1,
    STATE(71), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2361] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2382] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_instruction_repeat1,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2405] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(74), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2426] = 7,
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
    STATE(102), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2449] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(76), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2470] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_DASH,
    STATE(68), 1,
      aux_sym_list_repeat1,
    STATE(77), 1,
      sym_line_comment,
  [2495] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      sym__reg,
    STATE(78), 1,
      sym_line_comment,
    STATE(95), 1,
      sym_reg,
    ACTIONS(168), 2,
      sym_word,
      sym_address,
  [2518] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2539] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(241), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2562] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      anon_sym_BANG,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2583] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      anon_sym_BANG,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2604] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_meta_repeat2,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2627] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2648] = 8,
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
    STATE(25), 1,
      aux_sym_program_repeat1,
    STATE(71), 1,
      aux_sym_program_repeat2,
    STATE(85), 1,
      sym_line_comment,
  [2673] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(86), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2694] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_DASH,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_list_repeat1,
    STATE(87), 1,
      sym_line_comment,
  [2719] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2737] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2773] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2809] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2827] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2845] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2865] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2883] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_line_comment,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2919] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2937] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_line_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2973] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_RBRACE,
  [2991] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3009] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3027] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3044] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      aux_sym_int_token2,
    STATE(106), 1,
      sym_line_comment,
    STATE(132), 1,
      sym_int,
  [3063] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      aux_sym_int_token1,
    ACTIONS(286), 1,
      aux_sym_int_token2,
    STATE(107), 1,
      sym_line_comment,
  [3082] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym_line_comment,
  [3101] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(109), 1,
      sym_line_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3152] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3169] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      aux_sym_int_token2,
    STATE(98), 1,
      sym_int,
    STATE(113), 1,
      sym_line_comment,
  [3188] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3205] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      aux_sym_int_token1,
    ACTIONS(304), 1,
      aux_sym_int_token2,
    STATE(115), 1,
      sym_line_comment,
  [3224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3241] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      aux_sym_int_token2,
    STATE(117), 1,
      sym_line_comment,
    STATE(119), 1,
      sym_int,
  [3260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3277] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_line_comment,
  [3293] = 5,
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
  [3309] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_line_comment,
  [3325] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym_line_comment,
  [3341] = 5,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      aux_sym_line_comment_token1,
    ACTIONS(320), 1,
      aux_sym_line_comment_token2,
    ACTIONS(322), 1,
      sym_block_comment,
    STATE(123), 1,
      sym_line_comment,
  [3357] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_line_comment,
  [3373] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      sym_line_comment,
  [3389] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_line_comment,
  [3405] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(328), 1,
      anon_sym_rel,
    STATE(127), 1,
      sym_line_comment,
  [3421] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_line_comment,
  [3437] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(332), 1,
      anon_sym_ptr,
    STATE(129), 1,
      sym_line_comment,
  [3453] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(334), 1,
      sym_word,
    STATE(130), 1,
      sym_line_comment,
  [3469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_line_comment,
  [3485] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym_line_comment,
  [3501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_line_comment,
  [3517] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      sym_float,
    STATE(134), 1,
      sym_line_comment,
  [3533] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_line_comment,
  [3549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_line_comment,
  [3565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(342), 1,
      sym_word,
    STATE(137), 1,
      sym_line_comment,
  [3581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      sym_word,
    STATE(138), 1,
      sym_line_comment,
  [3597] = 1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [3601] = 1,
    ACTIONS(348), 1,
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
  [SMALL_STATE(13)] = 446,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 520,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 805,
  [SMALL_STATE(23)] = 836,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 910,
  [SMALL_STATE(26)] = 956,
  [SMALL_STATE(27)] = 986,
  [SMALL_STATE(28)] = 1016,
  [SMALL_STATE(29)] = 1062,
  [SMALL_STATE(30)] = 1101,
  [SMALL_STATE(31)] = 1140,
  [SMALL_STATE(32)] = 1179,
  [SMALL_STATE(33)] = 1218,
  [SMALL_STATE(34)] = 1257,
  [SMALL_STATE(35)] = 1296,
  [SMALL_STATE(36)] = 1335,
  [SMALL_STATE(37)] = 1378,
  [SMALL_STATE(38)] = 1417,
  [SMALL_STATE(39)] = 1456,
  [SMALL_STATE(40)] = 1495,
  [SMALL_STATE(41)] = 1534,
  [SMALL_STATE(42)] = 1571,
  [SMALL_STATE(43)] = 1604,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1664,
  [SMALL_STATE(46)] = 1699,
  [SMALL_STATE(47)] = 1726,
  [SMALL_STATE(48)] = 1753,
  [SMALL_STATE(49)] = 1785,
  [SMALL_STATE(50)] = 1817,
  [SMALL_STATE(51)] = 1844,
  [SMALL_STATE(52)] = 1874,
  [SMALL_STATE(53)] = 1904,
  [SMALL_STATE(54)] = 1928,
  [SMALL_STATE(55)] = 1955,
  [SMALL_STATE(56)] = 1981,
  [SMALL_STATE(57)] = 2007,
  [SMALL_STATE(58)] = 2033,
  [SMALL_STATE(59)] = 2059,
  [SMALL_STATE(60)] = 2085,
  [SMALL_STATE(61)] = 2108,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2154,
  [SMALL_STATE(64)] = 2179,
  [SMALL_STATE(65)] = 2202,
  [SMALL_STATE(66)] = 2225,
  [SMALL_STATE(67)] = 2248,
  [SMALL_STATE(68)] = 2271,
  [SMALL_STATE(69)] = 2292,
  [SMALL_STATE(70)] = 2315,
  [SMALL_STATE(71)] = 2338,
  [SMALL_STATE(72)] = 2361,
  [SMALL_STATE(73)] = 2382,
  [SMALL_STATE(74)] = 2405,
  [SMALL_STATE(75)] = 2426,
  [SMALL_STATE(76)] = 2449,
  [SMALL_STATE(77)] = 2470,
  [SMALL_STATE(78)] = 2495,
  [SMALL_STATE(79)] = 2518,
  [SMALL_STATE(80)] = 2539,
  [SMALL_STATE(81)] = 2562,
  [SMALL_STATE(82)] = 2583,
  [SMALL_STATE(83)] = 2604,
  [SMALL_STATE(84)] = 2627,
  [SMALL_STATE(85)] = 2648,
  [SMALL_STATE(86)] = 2673,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2719,
  [SMALL_STATE(89)] = 2737,
  [SMALL_STATE(90)] = 2755,
  [SMALL_STATE(91)] = 2773,
  [SMALL_STATE(92)] = 2791,
  [SMALL_STATE(93)] = 2809,
  [SMALL_STATE(94)] = 2827,
  [SMALL_STATE(95)] = 2845,
  [SMALL_STATE(96)] = 2865,
  [SMALL_STATE(97)] = 2883,
  [SMALL_STATE(98)] = 2901,
  [SMALL_STATE(99)] = 2919,
  [SMALL_STATE(100)] = 2937,
  [SMALL_STATE(101)] = 2955,
  [SMALL_STATE(102)] = 2973,
  [SMALL_STATE(103)] = 2991,
  [SMALL_STATE(104)] = 3009,
  [SMALL_STATE(105)] = 3027,
  [SMALL_STATE(106)] = 3044,
  [SMALL_STATE(107)] = 3063,
  [SMALL_STATE(108)] = 3082,
  [SMALL_STATE(109)] = 3101,
  [SMALL_STATE(110)] = 3118,
  [SMALL_STATE(111)] = 3135,
  [SMALL_STATE(112)] = 3152,
  [SMALL_STATE(113)] = 3169,
  [SMALL_STATE(114)] = 3188,
  [SMALL_STATE(115)] = 3205,
  [SMALL_STATE(116)] = 3224,
  [SMALL_STATE(117)] = 3241,
  [SMALL_STATE(118)] = 3260,
  [SMALL_STATE(119)] = 3277,
  [SMALL_STATE(120)] = 3293,
  [SMALL_STATE(121)] = 3309,
  [SMALL_STATE(122)] = 3325,
  [SMALL_STATE(123)] = 3341,
  [SMALL_STATE(124)] = 3357,
  [SMALL_STATE(125)] = 3373,
  [SMALL_STATE(126)] = 3389,
  [SMALL_STATE(127)] = 3405,
  [SMALL_STATE(128)] = 3421,
  [SMALL_STATE(129)] = 3437,
  [SMALL_STATE(130)] = 3453,
  [SMALL_STATE(131)] = 3469,
  [SMALL_STATE(132)] = 3485,
  [SMALL_STATE(133)] = 3501,
  [SMALL_STATE(134)] = 3517,
  [SMALL_STATE(135)] = 3533,
  [SMALL_STATE(136)] = 3549,
  [SMALL_STATE(137)] = 3565,
  [SMALL_STATE(138)] = 3581,
  [SMALL_STATE(139)] = 3597,
  [SMALL_STATE(140)] = 3601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(115),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(13),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 8, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(120),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(134),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 9, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
