#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
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
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 14,
  [29] = 29,
  [30] = 10,
  [31] = 12,
  [32] = 15,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 36,
  [46] = 40,
  [47] = 42,
  [48] = 20,
  [49] = 17,
  [50] = 50,
  [51] = 22,
  [52] = 16,
  [53] = 21,
  [54] = 19,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 69,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 79,
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
  [96] = 75,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 94,
  [103] = 103,
  [104] = 92,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 80,
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
  [123] = 123,
  [124] = 10,
  [125] = 12,
  [126] = 126,
  [127] = 106,
  [128] = 107,
  [129] = 129,
  [130] = 113,
  [131] = 131,
  [132] = 132,
  [133] = 84,
  [134] = 100,
  [135] = 135,
  [136] = 81,
  [137] = 108,
  [138] = 138,
  [139] = 86,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 123,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 112,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 115,
  [154] = 118,
  [155] = 121,
  [156] = 142,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 151,
  [162] = 162,
  [163] = 114,
  [164] = 164,
  [165] = 116,
  [166] = 117,
  [167] = 141,
  [168] = 119,
  [169] = 120,
  [170] = 122,
  [171] = 126,
  [172] = 157,
  [173] = 110,
  [174] = 131,
  [175] = 144,
  [176] = 14,
  [177] = 15,
  [178] = 145,
  [179] = 149,
  [180] = 142,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 181,
  [187] = 187,
  [188] = 184,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 192,
  [193] = 183,
  [194] = 187,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 191,
  [203] = 203,
  [204] = 196,
  [205] = 205,
  [206] = 206,
  [207] = 201,
  [208] = 200,
  [209] = 206,
  [210] = 210,
  [211] = 211,
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
        '"', 2,
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
      ADVANCE_MAP(
        '!', 58,
        '#', 65,
        '$', 20,
        '(', 34,
        ',', 32,
        '-', 7,
        '/', 10,
        '0', 87,
        ';', 162,
        'p', 16,
        'r', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(2);
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
        '"', 2,
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
        '"', 2,
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
        '"', 2,
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
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
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
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 159},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {(TSStateId)(-1)},
  [211] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(205),
    [sym__item] = STATE(93),
    [sym_meta] = STATE(150),
    [sym_label] = STATE(150),
    [sym_const] = STATE(150),
    [sym_instruction] = STATE(150),
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
    [sym__expr] = STATE(108),
    [sym_list] = STATE(123),
    [sym_ptr] = STATE(123),
    [sym__tc_expr] = STATE(23),
    [sym_tc_infix] = STATE(16),
    [sym_int] = STATE(11),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(13),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(26),
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
  [0] = 22,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_string,
    STATE(3), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(16), 1,
      sym_tc_infix,
    STATE(18), 1,
      sym_int,
    STATE(23), 1,
      sym__tc_expr,
    STATE(24), 1,
      sym_ident,
    STATE(34), 1,
      aux_sym_instruction_repeat2,
    STATE(137), 1,
      sym__expr,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    STATE(143), 2,
      sym_list,
      sym_ptr,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(51), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [74] = 19,
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
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(69), 1,
      sym_string,
    STATE(4), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_reg,
    STATE(84), 1,
      sym_int,
    STATE(121), 1,
      sym__expr,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(123), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [141] = 19,
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
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(69), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_reg,
    STATE(84), 1,
      sym_int,
    STATE(121), 1,
      sym__expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(123), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [208] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      aux_sym_int_token2,
    ACTIONS(81), 1,
      sym_string,
    STATE(6), 1,
      sym_line_comment,
    STATE(133), 1,
      sym_int,
    STATE(155), 1,
      sym__expr,
    STATE(177), 1,
      sym_reg,
    ACTIONS(85), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(83), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(143), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(51), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [271] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(87), 1,
      aux_sym_int_token2,
    STATE(7), 1,
      sym_line_comment,
    STATE(133), 1,
      sym_int,
    STATE(155), 1,
      sym__expr,
    STATE(177), 1,
      sym_reg,
    ACTIONS(85), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(83), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(143), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(51), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [334] = 18,
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
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(69), 1,
      sym_string,
    STATE(8), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_reg,
    STATE(84), 1,
      sym_int,
    STATE(121), 1,
      sym__expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(123), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [397] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(89), 1,
      aux_sym_int_token2,
    STATE(9), 1,
      sym_line_comment,
    STATE(133), 1,
      sym_int,
    STATE(155), 1,
      sym__expr,
    STATE(177), 1,
      sym_reg,
    ACTIONS(85), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(83), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(143), 3,
      sym_list,
      sym_ptr,
      sym_ident,
    ACTIONS(51), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [460] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(93), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(91), 11,
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
  [494] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(102), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [534] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(108), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(106), 11,
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
  [568] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(102), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [605] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(112), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(110), 10,
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
  [638] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(116), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(114), 10,
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
  [671] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(102), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [703] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(124), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(120), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [745] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym_int_token2,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(104), 6,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      sym_string,
    ACTIONS(102), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [785] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(120), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [823] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(128), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(120), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [859] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(130), 1,
      anon_sym_AMP,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(120), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [893] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(120), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [925] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(124), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(143), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [971] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(104), 6,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      sym_string,
    ACTIONS(102), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [1008] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(147), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      aux_sym_int_token2,
    ACTIONS(153), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(23), 1,
      sym__tc_expr,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(159), 2,
      sym_meta_ident,
      sym__ident,
    STATE(25), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(156), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1052] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(23), 1,
      sym__tc_expr,
    STATE(25), 1,
      aux_sym_instruction_repeat2,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1098] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      sym_float,
    ACTIONS(172), 1,
      sym_string,
    STATE(27), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_reg,
    STATE(89), 1,
      sym_int,
    STATE(160), 1,
      sym_ident,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1145] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(110), 13,
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
  [1176] = 14,
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
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_line_comment,
    STATE(59), 1,
      aux_sym_program_repeat1,
    STATE(164), 1,
      sym__item,
    STATE(150), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1222] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(91), 12,
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
  [1252] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(106), 12,
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
  [1282] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(114), 12,
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
  [1312] = 14,
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
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_line_comment,
    STATE(59), 1,
      aux_sym_program_repeat1,
    STATE(164), 1,
      sym__item,
    STATE(150), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1358] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      sym_string,
    ACTIONS(180), 1,
      aux_sym_int_token2,
    STATE(15), 1,
      sym_reg,
    STATE(23), 1,
      sym__tc_expr,
    STATE(25), 1,
      aux_sym_instruction_repeat2,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1400] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(170), 1,
      sym_float,
    ACTIONS(172), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(89), 1,
      sym_int,
    STATE(160), 1,
      sym_ident,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1444] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(36), 1,
      sym_line_comment,
    STATE(54), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1483] = 13,
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
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_line_comment,
    STATE(59), 1,
      aux_sym_program_repeat1,
    STATE(164), 1,
      sym__item,
    STATE(150), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1526] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(22), 1,
      sym__tc_expr,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1565] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(39), 1,
      sym_line_comment,
    STATE(51), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1604] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(40), 1,
      sym_line_comment,
    STATE(48), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1643] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(41), 1,
      sym_line_comment,
    STATE(49), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1682] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(42), 1,
      sym_line_comment,
    STATE(53), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1721] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    ACTIONS(182), 1,
      sym_string,
    STATE(32), 1,
      sym_reg,
    STATE(43), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__tc_expr,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(52), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1760] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1799] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(19), 1,
      sym__tc_expr,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1838] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(20), 1,
      sym__tc_expr,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1877] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(164), 1,
      sym_string,
    STATE(15), 1,
      sym_reg,
    STATE(21), 1,
      sym__tc_expr,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1916] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_AMP,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1947] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(184), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1982] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(184), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2019] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [2046] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(102), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [2073] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(186), 1,
      anon_sym_AMP,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [2102] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_AMP,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [2135] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(32), 1,
      sym_reg,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    STATE(202), 2,
      sym_int,
      sym_ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2167] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(32), 1,
      sym_reg,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    STATE(193), 2,
      sym_int,
      sym_ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2199] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(32), 1,
      sym_reg,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    STATE(191), 2,
      sym_int,
      sym_ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2231] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(32), 1,
      sym_reg,
    STATE(58), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
    STATE(183), 2,
      sym_int,
      sym_ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2263] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(59), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(203), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2290] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      sym_address,
    STATE(32), 1,
      sym_reg,
    STATE(60), 1,
      sym_line_comment,
    STATE(182), 1,
      sym_ident,
    ACTIONS(71), 2,
      sym_word,
      sym__reg,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
  [2320] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      sym_address,
    STATE(32), 1,
      sym_reg,
    STATE(61), 1,
      sym_line_comment,
    STATE(185), 1,
      sym_ident,
    ACTIONS(71), 2,
      sym_word,
      sym__reg,
    ACTIONS(73), 2,
      sym_meta_ident,
      sym__ident,
  [2350] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(209), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2374] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(63), 1,
      sym_line_comment,
    STATE(167), 1,
      sym_reg,
    STATE(190), 1,
      sym_int,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2401] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(64), 1,
      sym_line_comment,
    STATE(119), 1,
      sym_int,
    STATE(120), 1,
      sym_reg,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2428] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      aux_sym_int_token2,
    STATE(65), 1,
      sym_line_comment,
    STATE(168), 1,
      sym_int,
    STATE(169), 1,
      sym_reg,
    ACTIONS(83), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2455] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_int_token2,
    STATE(66), 1,
      sym_line_comment,
    STATE(141), 1,
      sym_reg,
    STATE(189), 1,
      sym_int,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
  [2482] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_meta_ident,
    STATE(67), 1,
      sym_line_comment,
    STATE(158), 1,
      sym_meta,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2508] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2534] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_line_comment,
    STATE(82), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2560] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_meta_ident,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_line_comment,
    STATE(152), 1,
      sym_meta,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2586] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2612] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_line_comment,
    STATE(78), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2638] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2664] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2690] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(75), 1,
      sym_line_comment,
    STATE(196), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2713] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_line_comment,
    STATE(95), 1,
      aux_sym_meta_repeat2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2736] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(77), 1,
      sym_line_comment,
    STATE(135), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2759] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_line_comment,
    STATE(85), 1,
      aux_sym_list_repeat1,
  [2784] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_line_comment,
    STATE(105), 1,
      aux_sym_list_repeat1,
  [2809] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(80), 1,
      sym_line_comment,
    STATE(130), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [2832] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_BANG,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2855] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_list_repeat1,
    STATE(82), 1,
      sym_line_comment,
  [2880] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_program_repeat1,
    STATE(83), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2903] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2924] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_line_comment,
    STATE(105), 1,
      aux_sym_list_repeat1,
  [2949] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(86), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2970] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_line_comment,
    STATE(99), 1,
      aux_sym_meta_repeat1,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2993] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      sym_line_comment,
    STATE(97), 1,
      aux_sym_meta_repeat3,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3016] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_meta_repeat1,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3039] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_meta_repeat3,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3062] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_meta_repeat2,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3085] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3108] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_program_repeat1,
    STATE(93), 1,
      sym_line_comment,
    STATE(103), 1,
      aux_sym_program_repeat2,
  [3133] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(92), 1,
      sym_reg,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3156] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(95), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [3177] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(96), 1,
      sym_line_comment,
    STATE(204), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3200] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(97), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [3221] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(98), 1,
      sym_line_comment,
    STATE(181), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3244] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(99), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [3265] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_instruction_repeat1,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3288] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(101), 1,
      sym_line_comment,
    STATE(186), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3311] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(102), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3334] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_program_repeat1,
    STATE(83), 1,
      aux_sym_program_repeat2,
    STATE(103), 1,
      sym_line_comment,
  [3359] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3382] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    STATE(105), 2,
      sym_line_comment,
      aux_sym_list_repeat1,
  [3403] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(311), 1,
      anon_sym_BANG,
    STATE(106), 1,
      sym_line_comment,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3424] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      anon_sym_BANG,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3445] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_instruction_repeat1,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3468] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__reg,
    STATE(109), 1,
      sym_line_comment,
    STATE(113), 1,
      sym_reg,
    ACTIONS(205), 2,
      sym_word,
      sym_address,
  [3491] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3509] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3527] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3545] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3583] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(115), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3601] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3619] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3637] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3673] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_line_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3693] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3711] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_line_comment,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3729] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(123), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3747] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(124), 1,
      sym_line_comment,
    ACTIONS(91), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3763] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_line_comment,
    ACTIONS(106), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3779] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(126), 1,
      sym_line_comment,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3797] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      anon_sym_BANG,
    STATE(127), 1,
      sym_line_comment,
    ACTIONS(309), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3815] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      anon_sym_BANG,
    STATE(128), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3833] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(129), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3851] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_line_comment,
    ACTIONS(341), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(131), 1,
      sym_line_comment,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3889] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(132), 1,
      sym_line_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3907] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3925] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_line_comment,
    STATE(139), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(63), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3945] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(135), 1,
      sym_line_comment,
    ACTIONS(307), 3,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_RBRACE,
  [3963] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_BANG,
    STATE(136), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [3983] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_instruction_repeat1,
    STATE(137), 1,
      sym_line_comment,
    ACTIONS(162), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(138), 1,
      sym_line_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [4021] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(262), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
    STATE(139), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [4039] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(140), 1,
      sym_line_comment,
    ACTIONS(355), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4054] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_line_comment,
  [4073] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      aux_sym_int_token1,
    ACTIONS(366), 1,
      aux_sym_int_token2,
    STATE(142), 1,
      sym_line_comment,
  [4092] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(143), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4107] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      sym_word,
    STATE(144), 1,
      sym_line_comment,
    STATE(149), 1,
      sym_instruction,
  [4126] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      sym_word,
    STATE(145), 1,
      sym_line_comment,
    STATE(157), 1,
      sym_instruction,
  [4145] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(146), 1,
      sym_line_comment,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4162] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(147), 1,
      sym_line_comment,
    ACTIONS(319), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_line_comment,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4194] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(149), 1,
      sym_line_comment,
    STATE(194), 1,
      sym_int,
  [4213] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_line_comment,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4230] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(151), 1,
      sym_line_comment,
    STATE(191), 1,
      sym_int,
  [4249] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(152), 1,
      sym_line_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4266] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(153), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4281] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(154), 1,
      sym_line_comment,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4296] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(155), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4311] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      aux_sym_int_token1,
    ACTIONS(382), 1,
      aux_sym_int_token2,
    STATE(156), 1,
      sym_line_comment,
  [4330] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_int_token2,
    STATE(157), 1,
      sym_line_comment,
    STATE(173), 1,
      sym_int,
  [4349] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(158), 1,
      sym_line_comment,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4366] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(111), 1,
      sym_int,
    STATE(159), 1,
      sym_line_comment,
  [4385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(160), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4402] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(161), 1,
      sym_line_comment,
    STATE(202), 1,
      sym_int,
  [4421] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_line_comment,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4438] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(163), 1,
      sym_line_comment,
    ACTIONS(325), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4453] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_line_comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4470] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_line_comment,
    ACTIONS(327), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4485] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(166), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4500] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_line_comment,
  [4519] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4534] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4551] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(170), 1,
      sym_line_comment,
    ACTIONS(333), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4566] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_line_comment,
    ACTIONS(335), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4581] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(110), 1,
      sym_int,
    STATE(172), 1,
      sym_line_comment,
  [4600] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_line_comment,
    ACTIONS(309), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4615] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(174), 1,
      sym_line_comment,
    ACTIONS(345), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4630] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      sym_word,
    STATE(175), 1,
      sym_line_comment,
    STATE(179), 1,
      sym_instruction,
  [4649] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(176), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4664] = 4,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(177), 1,
      sym_line_comment,
    ACTIONS(114), 3,
      anon_sym_COMMA,
      anon_sym_POUND,
      aux_sym_int_token2,
  [4679] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      sym_word,
    STATE(172), 1,
      sym_instruction,
    STATE(178), 1,
      sym_line_comment,
  [4698] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      aux_sym_int_token2,
    STATE(179), 1,
      sym_line_comment,
    STATE(187), 1,
      sym_int,
  [4717] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      aux_sym_int_token1,
    ACTIONS(398), 1,
      aux_sym_int_token2,
    STATE(180), 1,
      sym_line_comment,
  [4736] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_line_comment,
  [4752] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_line_comment,
  [4768] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_line_comment,
  [4784] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(404), 1,
      anon_sym_rel,
    STATE(184), 1,
      sym_line_comment,
  [4800] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_line_comment,
  [4816] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_line_comment,
  [4832] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_line_comment,
  [4848] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      anon_sym_rel,
    STATE(188), 1,
      sym_line_comment,
  [4864] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_line_comment,
  [4880] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_line_comment,
  [4896] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_line_comment,
  [4912] = 5,
    ACTIONS(412), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      aux_sym_line_comment_token1,
    ACTIONS(416), 1,
      aux_sym_line_comment_token2,
    ACTIONS(418), 1,
      sym_block_comment,
    STATE(192), 1,
      sym_line_comment,
  [4928] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_line_comment,
  [4944] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_line_comment,
  [4960] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(424), 1,
      sym_word,
    STATE(195), 1,
      sym_line_comment,
  [4976] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_line_comment,
  [4992] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      sym_string,
    STATE(197), 1,
      sym_line_comment,
  [5008] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(430), 1,
      sym_float,
    STATE(198), 1,
      sym_line_comment,
  [5024] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(432), 1,
      sym_word,
    STATE(199), 1,
      sym_line_comment,
  [5040] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_line_comment,
  [5056] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    STATE(201), 1,
      sym_line_comment,
  [5072] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym_line_comment,
  [5088] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_line_comment,
  [5104] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_line_comment,
  [5120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_line_comment,
  [5136] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      anon_sym_ptr,
    STATE(206), 1,
      sym_line_comment,
  [5152] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_line_comment,
  [5168] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(208), 1,
      sym_line_comment,
  [5184] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(448), 1,
      anon_sym_ptr,
    STATE(209), 1,
      sym_line_comment,
  [5200] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [5204] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 271,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 397,
  [SMALL_STATE(10)] = 460,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 568,
  [SMALL_STATE(14)] = 605,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 671,
  [SMALL_STATE(17)] = 703,
  [SMALL_STATE(18)] = 745,
  [SMALL_STATE(19)] = 785,
  [SMALL_STATE(20)] = 823,
  [SMALL_STATE(21)] = 859,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 971,
  [SMALL_STATE(25)] = 1008,
  [SMALL_STATE(26)] = 1052,
  [SMALL_STATE(27)] = 1098,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1176,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1252,
  [SMALL_STATE(32)] = 1282,
  [SMALL_STATE(33)] = 1312,
  [SMALL_STATE(34)] = 1358,
  [SMALL_STATE(35)] = 1400,
  [SMALL_STATE(36)] = 1444,
  [SMALL_STATE(37)] = 1483,
  [SMALL_STATE(38)] = 1526,
  [SMALL_STATE(39)] = 1565,
  [SMALL_STATE(40)] = 1604,
  [SMALL_STATE(41)] = 1643,
  [SMALL_STATE(42)] = 1682,
  [SMALL_STATE(43)] = 1721,
  [SMALL_STATE(44)] = 1760,
  [SMALL_STATE(45)] = 1799,
  [SMALL_STATE(46)] = 1838,
  [SMALL_STATE(47)] = 1877,
  [SMALL_STATE(48)] = 1916,
  [SMALL_STATE(49)] = 1947,
  [SMALL_STATE(50)] = 1982,
  [SMALL_STATE(51)] = 2019,
  [SMALL_STATE(52)] = 2046,
  [SMALL_STATE(53)] = 2073,
  [SMALL_STATE(54)] = 2102,
  [SMALL_STATE(55)] = 2135,
  [SMALL_STATE(56)] = 2167,
  [SMALL_STATE(57)] = 2199,
  [SMALL_STATE(58)] = 2231,
  [SMALL_STATE(59)] = 2263,
  [SMALL_STATE(60)] = 2290,
  [SMALL_STATE(61)] = 2320,
  [SMALL_STATE(62)] = 2350,
  [SMALL_STATE(63)] = 2374,
  [SMALL_STATE(64)] = 2401,
  [SMALL_STATE(65)] = 2428,
  [SMALL_STATE(66)] = 2455,
  [SMALL_STATE(67)] = 2482,
  [SMALL_STATE(68)] = 2508,
  [SMALL_STATE(69)] = 2534,
  [SMALL_STATE(70)] = 2560,
  [SMALL_STATE(71)] = 2586,
  [SMALL_STATE(72)] = 2612,
  [SMALL_STATE(73)] = 2638,
  [SMALL_STATE(74)] = 2664,
  [SMALL_STATE(75)] = 2690,
  [SMALL_STATE(76)] = 2713,
  [SMALL_STATE(77)] = 2736,
  [SMALL_STATE(78)] = 2759,
  [SMALL_STATE(79)] = 2784,
  [SMALL_STATE(80)] = 2809,
  [SMALL_STATE(81)] = 2832,
  [SMALL_STATE(82)] = 2855,
  [SMALL_STATE(83)] = 2880,
  [SMALL_STATE(84)] = 2903,
  [SMALL_STATE(85)] = 2924,
  [SMALL_STATE(86)] = 2949,
  [SMALL_STATE(87)] = 2970,
  [SMALL_STATE(88)] = 2993,
  [SMALL_STATE(89)] = 3016,
  [SMALL_STATE(90)] = 3039,
  [SMALL_STATE(91)] = 3062,
  [SMALL_STATE(92)] = 3085,
  [SMALL_STATE(93)] = 3108,
  [SMALL_STATE(94)] = 3133,
  [SMALL_STATE(95)] = 3156,
  [SMALL_STATE(96)] = 3177,
  [SMALL_STATE(97)] = 3200,
  [SMALL_STATE(98)] = 3221,
  [SMALL_STATE(99)] = 3244,
  [SMALL_STATE(100)] = 3265,
  [SMALL_STATE(101)] = 3288,
  [SMALL_STATE(102)] = 3311,
  [SMALL_STATE(103)] = 3334,
  [SMALL_STATE(104)] = 3359,
  [SMALL_STATE(105)] = 3382,
  [SMALL_STATE(106)] = 3403,
  [SMALL_STATE(107)] = 3424,
  [SMALL_STATE(108)] = 3445,
  [SMALL_STATE(109)] = 3468,
  [SMALL_STATE(110)] = 3491,
  [SMALL_STATE(111)] = 3509,
  [SMALL_STATE(112)] = 3527,
  [SMALL_STATE(113)] = 3545,
  [SMALL_STATE(114)] = 3565,
  [SMALL_STATE(115)] = 3583,
  [SMALL_STATE(116)] = 3601,
  [SMALL_STATE(117)] = 3619,
  [SMALL_STATE(118)] = 3637,
  [SMALL_STATE(119)] = 3655,
  [SMALL_STATE(120)] = 3673,
  [SMALL_STATE(121)] = 3693,
  [SMALL_STATE(122)] = 3711,
  [SMALL_STATE(123)] = 3729,
  [SMALL_STATE(124)] = 3747,
  [SMALL_STATE(125)] = 3763,
  [SMALL_STATE(126)] = 3779,
  [SMALL_STATE(127)] = 3797,
  [SMALL_STATE(128)] = 3815,
  [SMALL_STATE(129)] = 3833,
  [SMALL_STATE(130)] = 3851,
  [SMALL_STATE(131)] = 3871,
  [SMALL_STATE(132)] = 3889,
  [SMALL_STATE(133)] = 3907,
  [SMALL_STATE(134)] = 3925,
  [SMALL_STATE(135)] = 3945,
  [SMALL_STATE(136)] = 3963,
  [SMALL_STATE(137)] = 3983,
  [SMALL_STATE(138)] = 4003,
  [SMALL_STATE(139)] = 4021,
  [SMALL_STATE(140)] = 4039,
  [SMALL_STATE(141)] = 4054,
  [SMALL_STATE(142)] = 4073,
  [SMALL_STATE(143)] = 4092,
  [SMALL_STATE(144)] = 4107,
  [SMALL_STATE(145)] = 4126,
  [SMALL_STATE(146)] = 4145,
  [SMALL_STATE(147)] = 4162,
  [SMALL_STATE(148)] = 4177,
  [SMALL_STATE(149)] = 4194,
  [SMALL_STATE(150)] = 4213,
  [SMALL_STATE(151)] = 4230,
  [SMALL_STATE(152)] = 4249,
  [SMALL_STATE(153)] = 4266,
  [SMALL_STATE(154)] = 4281,
  [SMALL_STATE(155)] = 4296,
  [SMALL_STATE(156)] = 4311,
  [SMALL_STATE(157)] = 4330,
  [SMALL_STATE(158)] = 4349,
  [SMALL_STATE(159)] = 4366,
  [SMALL_STATE(160)] = 4385,
  [SMALL_STATE(161)] = 4402,
  [SMALL_STATE(162)] = 4421,
  [SMALL_STATE(163)] = 4438,
  [SMALL_STATE(164)] = 4453,
  [SMALL_STATE(165)] = 4470,
  [SMALL_STATE(166)] = 4485,
  [SMALL_STATE(167)] = 4500,
  [SMALL_STATE(168)] = 4519,
  [SMALL_STATE(169)] = 4534,
  [SMALL_STATE(170)] = 4551,
  [SMALL_STATE(171)] = 4566,
  [SMALL_STATE(172)] = 4581,
  [SMALL_STATE(173)] = 4600,
  [SMALL_STATE(174)] = 4615,
  [SMALL_STATE(175)] = 4630,
  [SMALL_STATE(176)] = 4649,
  [SMALL_STATE(177)] = 4664,
  [SMALL_STATE(178)] = 4679,
  [SMALL_STATE(179)] = 4698,
  [SMALL_STATE(180)] = 4717,
  [SMALL_STATE(181)] = 4736,
  [SMALL_STATE(182)] = 4752,
  [SMALL_STATE(183)] = 4768,
  [SMALL_STATE(184)] = 4784,
  [SMALL_STATE(185)] = 4800,
  [SMALL_STATE(186)] = 4816,
  [SMALL_STATE(187)] = 4832,
  [SMALL_STATE(188)] = 4848,
  [SMALL_STATE(189)] = 4864,
  [SMALL_STATE(190)] = 4880,
  [SMALL_STATE(191)] = 4896,
  [SMALL_STATE(192)] = 4912,
  [SMALL_STATE(193)] = 4928,
  [SMALL_STATE(194)] = 4944,
  [SMALL_STATE(195)] = 4960,
  [SMALL_STATE(196)] = 4976,
  [SMALL_STATE(197)] = 4992,
  [SMALL_STATE(198)] = 5008,
  [SMALL_STATE(199)] = 5024,
  [SMALL_STATE(200)] = 5040,
  [SMALL_STATE(201)] = 5056,
  [SMALL_STATE(202)] = 5072,
  [SMALL_STATE(203)] = 5088,
  [SMALL_STATE(204)] = 5104,
  [SMALL_STATE(205)] = 5120,
  [SMALL_STATE(206)] = 5136,
  [SMALL_STATE(207)] = 5152,
  [SMALL_STATE(208)] = 5168,
  [SMALL_STATE(209)] = 5184,
  [SMALL_STATE(210)] = 5200,
  [SMALL_STATE(211)] = 5204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(62),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(197),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 8, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 9, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [440] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
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
