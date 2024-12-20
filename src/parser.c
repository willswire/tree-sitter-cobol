#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_IDENTIFICATIONDIVISION_DOT = 1,
  anon_sym_PROGRAM_DASHID_DOT = 2,
  anon_sym_AUTHOR_DOT = 3,
  anon_sym_ENVIRONMENTDIVISION_DOT = 4,
  anon_sym_CONFIGURATIONSECTION_DOT = 5,
  anon_sym_SOURCE_DASHCOMPUTER_DOT = 6,
  anon_sym_DATADIVISION_DOT = 7,
  anon_sym_WORKING_DASHSTORAGESECTION_DOT = 8,
  anon_sym_FILESECTION_DOT = 9,
  anon_sym_PIC = 10,
  anon_sym_VALUE = 11,
  anon_sym_PROCEDUREDIVISION_DOT = 12,
  anon_sym_DOT = 13,
  anon_sym_MOVE = 14,
  anon_sym_TO = 15,
  anon_sym_DISPLAY = 16,
  anon_sym_PERFORM = 17,
  anon_sym_VARYING = 18,
  anon_sym_FROM = 19,
  anon_sym_BY = 20,
  anon_sym_UNTIL = 21,
  anon_sym_EQ = 22,
  anon_sym_IF = 23,
  anon_sym_EQUAL = 24,
  anon_sym_STOP = 25,
  anon_sym_RUN = 26,
  anon_sym_BEGIN = 27,
  sym_comment = 28,
  sym_identifier = 29,
  sym_level_number = 30,
  sym_picture_string = 31,
  sym_string_literal = 32,
  sym_number_literal = 33,
  sym_source_file = 34,
  sym_statement = 35,
  sym_identification_division = 36,
  sym_identification_clause = 37,
  sym_environment_division = 38,
  sym_configuration_section = 39,
  sym_source_computer_clause = 40,
  sym_data_division = 41,
  sym_data_section = 42,
  sym_working_storage_section = 43,
  sym_file_section = 44,
  sym_file_description = 45,
  sym_data_description = 46,
  sym_picture_clause = 47,
  sym_value_clause = 48,
  sym_procedure_division = 49,
  sym_paragraph = 50,
  sym_paragraph_label = 51,
  sym_sentence = 52,
  sym_statement_line = 53,
  sym_move_statement = 54,
  sym_display_statement = 55,
  sym_perform_statement = 56,
  sym_varying_clause = 57,
  sym_if_statement = 58,
  sym_stop_statement = 59,
  sym_begin_statement = 60,
  sym_index_line = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_identification_division_repeat1 = 63,
  aux_sym_configuration_section_repeat1 = 64,
  aux_sym_data_division_repeat1 = 65,
  aux_sym_working_storage_section_repeat1 = 66,
  aux_sym_file_section_repeat1 = 67,
  aux_sym_procedure_division_repeat1 = 68,
  aux_sym_paragraph_repeat1 = 69,
  aux_sym_sentence_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = "IDENTIFICATION DIVISION.",
  [anon_sym_PROGRAM_DASHID_DOT] = "PROGRAM-ID.",
  [anon_sym_AUTHOR_DOT] = "AUTHOR.",
  [anon_sym_ENVIRONMENTDIVISION_DOT] = "ENVIRONMENT DIVISION.",
  [anon_sym_CONFIGURATIONSECTION_DOT] = "CONFIGURATION SECTION.",
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = "SOURCE-COMPUTER.",
  [anon_sym_DATADIVISION_DOT] = "DATA DIVISION.",
  [anon_sym_WORKING_DASHSTORAGESECTION_DOT] = "WORKING-STORAGE SECTION.",
  [anon_sym_FILESECTION_DOT] = "FILE SECTION.",
  [anon_sym_PIC] = "PIC",
  [anon_sym_VALUE] = "VALUE",
  [anon_sym_PROCEDUREDIVISION_DOT] = "PROCEDURE DIVISION.",
  [anon_sym_DOT] = ".",
  [anon_sym_MOVE] = "MOVE",
  [anon_sym_TO] = "TO",
  [anon_sym_DISPLAY] = "DISPLAY",
  [anon_sym_PERFORM] = "PERFORM",
  [anon_sym_VARYING] = "VARYING",
  [anon_sym_FROM] = "FROM",
  [anon_sym_BY] = "BY",
  [anon_sym_UNTIL] = "UNTIL",
  [anon_sym_EQ] = "=",
  [anon_sym_IF] = "IF",
  [anon_sym_EQUAL] = "EQUAL",
  [anon_sym_STOP] = "STOP",
  [anon_sym_RUN] = "RUN",
  [anon_sym_BEGIN] = "BEGIN",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_level_number] = "level_number",
  [sym_picture_string] = "picture_string",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_identification_division] = "identification_division",
  [sym_identification_clause] = "identification_clause",
  [sym_environment_division] = "environment_division",
  [sym_configuration_section] = "configuration_section",
  [sym_source_computer_clause] = "source_computer_clause",
  [sym_data_division] = "data_division",
  [sym_data_section] = "data_section",
  [sym_working_storage_section] = "working_storage_section",
  [sym_file_section] = "file_section",
  [sym_file_description] = "file_description",
  [sym_data_description] = "data_description",
  [sym_picture_clause] = "picture_clause",
  [sym_value_clause] = "value_clause",
  [sym_procedure_division] = "procedure_division",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_label] = "paragraph_label",
  [sym_sentence] = "sentence",
  [sym_statement_line] = "statement_line",
  [sym_move_statement] = "move_statement",
  [sym_display_statement] = "display_statement",
  [sym_perform_statement] = "perform_statement",
  [sym_varying_clause] = "varying_clause",
  [sym_if_statement] = "if_statement",
  [sym_stop_statement] = "stop_statement",
  [sym_begin_statement] = "begin_statement",
  [sym_index_line] = "index_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_identification_division_repeat1] = "identification_division_repeat1",
  [aux_sym_configuration_section_repeat1] = "configuration_section_repeat1",
  [aux_sym_data_division_repeat1] = "data_division_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_file_section_repeat1] = "file_section_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_sentence_repeat1] = "sentence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = anon_sym_IDENTIFICATIONDIVISION_DOT,
  [anon_sym_PROGRAM_DASHID_DOT] = anon_sym_PROGRAM_DASHID_DOT,
  [anon_sym_AUTHOR_DOT] = anon_sym_AUTHOR_DOT,
  [anon_sym_ENVIRONMENTDIVISION_DOT] = anon_sym_ENVIRONMENTDIVISION_DOT,
  [anon_sym_CONFIGURATIONSECTION_DOT] = anon_sym_CONFIGURATIONSECTION_DOT,
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = anon_sym_SOURCE_DASHCOMPUTER_DOT,
  [anon_sym_DATADIVISION_DOT] = anon_sym_DATADIVISION_DOT,
  [anon_sym_WORKING_DASHSTORAGESECTION_DOT] = anon_sym_WORKING_DASHSTORAGESECTION_DOT,
  [anon_sym_FILESECTION_DOT] = anon_sym_FILESECTION_DOT,
  [anon_sym_PIC] = anon_sym_PIC,
  [anon_sym_VALUE] = anon_sym_VALUE,
  [anon_sym_PROCEDUREDIVISION_DOT] = anon_sym_PROCEDUREDIVISION_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_MOVE] = anon_sym_MOVE,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_DISPLAY] = anon_sym_DISPLAY,
  [anon_sym_PERFORM] = anon_sym_PERFORM,
  [anon_sym_VARYING] = anon_sym_VARYING,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_BY] = anon_sym_BY,
  [anon_sym_UNTIL] = anon_sym_UNTIL,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_EQUAL] = anon_sym_EQUAL,
  [anon_sym_STOP] = anon_sym_STOP,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_level_number] = sym_level_number,
  [sym_picture_string] = sym_picture_string,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_identification_division] = sym_identification_division,
  [sym_identification_clause] = sym_identification_clause,
  [sym_environment_division] = sym_environment_division,
  [sym_configuration_section] = sym_configuration_section,
  [sym_source_computer_clause] = sym_source_computer_clause,
  [sym_data_division] = sym_data_division,
  [sym_data_section] = sym_data_section,
  [sym_working_storage_section] = sym_working_storage_section,
  [sym_file_section] = sym_file_section,
  [sym_file_description] = sym_file_description,
  [sym_data_description] = sym_data_description,
  [sym_picture_clause] = sym_picture_clause,
  [sym_value_clause] = sym_value_clause,
  [sym_procedure_division] = sym_procedure_division,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_label] = sym_paragraph_label,
  [sym_sentence] = sym_sentence,
  [sym_statement_line] = sym_statement_line,
  [sym_move_statement] = sym_move_statement,
  [sym_display_statement] = sym_display_statement,
  [sym_perform_statement] = sym_perform_statement,
  [sym_varying_clause] = sym_varying_clause,
  [sym_if_statement] = sym_if_statement,
  [sym_stop_statement] = sym_stop_statement,
  [sym_begin_statement] = sym_begin_statement,
  [sym_index_line] = sym_index_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_identification_division_repeat1] = aux_sym_identification_division_repeat1,
  [aux_sym_configuration_section_repeat1] = aux_sym_configuration_section_repeat1,
  [aux_sym_data_division_repeat1] = aux_sym_data_division_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_file_section_repeat1] = aux_sym_file_section_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_sentence_repeat1] = aux_sym_sentence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_IDENTIFICATIONDIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROGRAM_DASHID_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AUTHOR_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENVIRONMENTDIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONFIGURATIONSECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOURCE_DASHCOMPUTER_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATADIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORKING_DASHSTORAGESECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILESECTION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROCEDUREDIVISION_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISPLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERFORM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARYING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNTIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_level_number] = {
    .visible = true,
    .named = true,
  },
  [sym_picture_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_identification_division] = {
    .visible = true,
    .named = true,
  },
  [sym_identification_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_division] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_section] = {
    .visible = true,
    .named = true,
  },
  [sym_source_computer_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_data_division] = {
    .visible = true,
    .named = true,
  },
  [sym_data_section] = {
    .visible = true,
    .named = true,
  },
  [sym_working_storage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_file_section] = {
    .visible = true,
    .named = true,
  },
  [sym_file_description] = {
    .visible = true,
    .named = true,
  },
  [sym_data_description] = {
    .visible = true,
    .named = true,
  },
  [sym_picture_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_value_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_division] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_label] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_line] = {
    .visible = true,
    .named = true,
  },
  [sym_move_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_display_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_perform_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_varying_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_stop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_index_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identification_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_working_storage_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sentence_repeat1] = {
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '"', 8,
        '\'', 9,
        '*', 253,
        '.', 231,
        '0', 213,
        '7', 27,
        '8', 28,
        '=', 244,
        'A', 327,
        'B', 55,
        'C', 141,
        'D', 31,
        'E', 119,
        'F', 80,
        'I', 47,
        'M', 142,
        'P', 56,
        'R', 198,
        'S', 145,
        'T', 138,
        'U', 123,
        'V', 29,
        'W', 143,
        '9', 328,
        'X', 328,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '*', 253,
        '.', 231,
        'B', 269,
        'D', 282,
        'I', 277,
        'M', 300,
        'P', 271,
        'S', 315,
        'V', 262,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '9' ||
          lookahead == 'A' ||
          lookahead == 'X') ADVANCE(328);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(221);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(220);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(227);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(225);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(230);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(222);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(219);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(226);
      END_STATE();
    case 27:
      if (lookahead == '7') ADVANCE(325);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(325);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(1);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'I') ADVANCE(175);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(228);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'G') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(190);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(194);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'Y') ADVANCE(242);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(239);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(14);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(203);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(207);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(179);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(208);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(181);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(210);
      END_STATE();
    case 107:
      if (lookahead == 'K') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(247);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(241);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(237);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == 'Q') ADVANCE(199);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(250);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(251);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(3);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(234);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(206);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(168);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 160:
      if (lookahead == 'P') ADVANCE(248);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(112);
      END_STATE();
    case 162:
      if (lookahead == 'P') ADVANCE(202);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 175:
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(191);
      END_STATE();
    case 177:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 178:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(96);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 197:
      if (lookahead == 'U') ADVANCE(184);
      END_STATE();
    case 198:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 199:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 200:
      if (lookahead == 'U') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'U') ADVANCE(189);
      END_STATE();
    case 203:
      if (lookahead == 'U') ADVANCE(171);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'V') ADVANCE(86);
      END_STATE();
    case 206:
      if (lookahead == 'V') ADVANCE(58);
      END_STATE();
    case 207:
      if (lookahead == 'V') ADVANCE(84);
      END_STATE();
    case 208:
      if (lookahead == 'V') ADVANCE(101);
      END_STATE();
    case 209:
      if (lookahead == 'V') ADVANCE(103);
      END_STATE();
    case 210:
      if (lookahead == 'V') ADVANCE(105);
      END_STATE();
    case 211:
      if (lookahead == 'Y') ADVANCE(235);
      END_STATE();
    case 212:
      if (lookahead == 'Y') ADVANCE(87);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 215:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '"', 8,
        '\'', 9,
        '*', 253,
        'B', 269,
        'D', 260,
        'E', 292,
        'I', 267,
        'M', 300,
        'P', 270,
        'S', 315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 216:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '*', 253,
        '.', 231,
        'A', 197,
        'B', 54,
        'D', 31,
        'E', 118,
        'I', 47,
        'M', 142,
        'P', 57,
        'S', 188,
        'V', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 217:
      if (eof) ADVANCE(218);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'P') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_IDENTIFICATIONDIVISION_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PROGRAM_DASHID_DOT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AUTHOR_DOT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ENVIRONMENTDIVISION_DOT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_CONFIGURATIONSECTION_DOT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SOURCE_DASHCOMPUTER_DOT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DATADIVISION_DOT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_WORKING_DASHSTORAGESECTION_DOT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_FILESECTION_DOT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIC);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_VALUE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PROCEDUREDIVISION_DOT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DISPLAY);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DISPLAY);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PERFORM);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PERFORM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_VARYING);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_VARYING);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BY);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_UNTIL);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_STOP);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_STOP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead == 'R') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_picture_string);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_picture_string);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == 'U') ADVANCE(184);
      if (lookahead == '9' ||
          lookahead == 'A' ||
          lookahead == 'X') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_picture_string);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == '9' ||
          lookahead == 'A' ||
          lookahead == 'X') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 215},
  [4] = {.lex_state = 215},
  [5] = {.lex_state = 216},
  [6] = {.lex_state = 216},
  [7] = {.lex_state = 215},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 216},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 216},
  [27] = {.lex_state = 217},
  [28] = {.lex_state = 216},
  [29] = {.lex_state = 217},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 216},
  [32] = {.lex_state = 216},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 216},
  [35] = {.lex_state = 216},
  [36] = {.lex_state = 216},
  [37] = {.lex_state = 216},
  [38] = {.lex_state = 216},
  [39] = {.lex_state = 216},
  [40] = {.lex_state = 216},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 216},
  [47] = {.lex_state = 216},
  [48] = {.lex_state = 216},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 216},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 215},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 215},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 215},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 215},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 215},
  [84] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_IDENTIFICATIONDIVISION_DOT] = ACTIONS(1),
    [anon_sym_PROGRAM_DASHID_DOT] = ACTIONS(1),
    [anon_sym_AUTHOR_DOT] = ACTIONS(1),
    [anon_sym_ENVIRONMENTDIVISION_DOT] = ACTIONS(1),
    [anon_sym_CONFIGURATIONSECTION_DOT] = ACTIONS(1),
    [anon_sym_SOURCE_DASHCOMPUTER_DOT] = ACTIONS(1),
    [anon_sym_DATADIVISION_DOT] = ACTIONS(1),
    [anon_sym_WORKING_DASHSTORAGESECTION_DOT] = ACTIONS(1),
    [anon_sym_FILESECTION_DOT] = ACTIONS(1),
    [anon_sym_PIC] = ACTIONS(1),
    [anon_sym_VALUE] = ACTIONS(1),
    [anon_sym_PROCEDUREDIVISION_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_MOVE] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_DISPLAY] = ACTIONS(1),
    [anon_sym_PERFORM] = ACTIONS(1),
    [anon_sym_VARYING] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_BY] = ACTIONS(1),
    [anon_sym_UNTIL] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_EQUAL] = ACTIONS(1),
    [anon_sym_STOP] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_level_number] = ACTIONS(1),
    [sym_picture_string] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym_statement] = STATE(12),
    [sym_identification_division] = STATE(55),
    [sym_environment_division] = STATE(55),
    [sym_data_division] = STATE(55),
    [sym_procedure_division] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_IDENTIFICATIONDIVISION_DOT] = ACTIONS(7),
    [anon_sym_ENVIRONMENTDIVISION_DOT] = ACTIONS(9),
    [anon_sym_DATADIVISION_DOT] = ACTIONS(11),
    [anon_sym_PROCEDUREDIVISION_DOT] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_MOVE,
    ACTIONS(19), 1,
      anon_sym_DISPLAY,
    ACTIONS(21), 1,
      anon_sym_PERFORM,
    ACTIONS(23), 1,
      anon_sym_IF,
    ACTIONS(25), 1,
      anon_sym_STOP,
    ACTIONS(27), 1,
      anon_sym_BEGIN,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number_literal,
    STATE(3), 2,
      sym_sentence,
      aux_sym_paragraph_repeat1,
    STATE(5), 2,
      sym_statement_line,
      aux_sym_sentence_repeat1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
    STATE(40), 7,
      sym_move_statement,
      sym_display_statement,
      sym_perform_statement,
      sym_if_statement,
      sym_stop_statement,
      sym_begin_statement,
      sym_index_line,
  [52] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_MOVE,
    ACTIONS(19), 1,
      anon_sym_DISPLAY,
    ACTIONS(21), 1,
      anon_sym_PERFORM,
    ACTIONS(23), 1,
      anon_sym_IF,
    ACTIONS(25), 1,
      anon_sym_STOP,
    ACTIONS(27), 1,
      anon_sym_BEGIN,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(4), 2,
      sym_sentence,
      aux_sym_paragraph_repeat1,
    STATE(5), 2,
      sym_statement_line,
      aux_sym_sentence_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
    STATE(40), 7,
      sym_move_statement,
      sym_display_statement,
      sym_perform_statement,
      sym_if_statement,
      sym_stop_statement,
      sym_begin_statement,
      sym_index_line,
  [104] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_MOVE,
    ACTIONS(42), 1,
      anon_sym_DISPLAY,
    ACTIONS(45), 1,
      anon_sym_PERFORM,
    ACTIONS(48), 1,
      anon_sym_IF,
    ACTIONS(51), 1,
      anon_sym_STOP,
    ACTIONS(54), 1,
      anon_sym_BEGIN,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_number_literal,
    STATE(4), 2,
      sym_sentence,
      aux_sym_paragraph_repeat1,
    STATE(5), 2,
      sym_statement_line,
      aux_sym_sentence_repeat1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
    STATE(40), 7,
      sym_move_statement,
      sym_display_statement,
      sym_perform_statement,
      sym_if_statement,
      sym_stop_statement,
      sym_begin_statement,
      sym_index_line,
  [156] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_number_literal,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_MOVE,
    ACTIONS(66), 1,
      anon_sym_DISPLAY,
    ACTIONS(68), 1,
      anon_sym_PERFORM,
    ACTIONS(70), 1,
      anon_sym_IF,
    ACTIONS(72), 1,
      anon_sym_STOP,
    ACTIONS(74), 1,
      anon_sym_BEGIN,
    STATE(6), 2,
      sym_statement_line,
      aux_sym_sentence_repeat1,
    STATE(40), 7,
      sym_move_statement,
      sym_display_statement,
      sym_perform_statement,
      sym_if_statement,
      sym_stop_statement,
      sym_begin_statement,
      sym_index_line,
  [197] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_MOVE,
    ACTIONS(81), 1,
      anon_sym_DISPLAY,
    ACTIONS(84), 1,
      anon_sym_PERFORM,
    ACTIONS(87), 1,
      anon_sym_IF,
    ACTIONS(90), 1,
      anon_sym_STOP,
    ACTIONS(93), 1,
      anon_sym_BEGIN,
    ACTIONS(96), 1,
      sym_number_literal,
    STATE(6), 2,
      sym_statement_line,
      aux_sym_sentence_repeat1,
    STATE(40), 7,
      sym_move_statement,
      sym_display_statement,
      sym_perform_statement,
      sym_if_statement,
      sym_stop_statement,
      sym_begin_statement,
      sym_index_line,
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_number_literal,
    ACTIONS(101), 7,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_identifier,
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_number_literal,
    ACTIONS(105), 7,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_identifier,
  [280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_PIC,
    ACTIONS(111), 1,
      anon_sym_VALUE,
    STATE(17), 1,
      sym_picture_clause,
    STATE(41), 1,
      sym_value_clause,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
    ACTIONS(118), 1,
      anon_sym_FILESECTION_DOT,
    STATE(10), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(52), 2,
      sym_working_storage_section,
      sym_file_section,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
    ACTIONS(125), 1,
      anon_sym_FILESECTION_DOT,
    STATE(10), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(52), 2,
      sym_working_storage_section,
      sym_file_section,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
    ACTIONS(9), 1,
      anon_sym_ENVIRONMENTDIVISION_DOT,
    ACTIONS(11), 1,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(13), 1,
      anon_sym_PROCEDUREDIVISION_DOT,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(55), 4,
      sym_identification_division,
      sym_environment_division,
      sym_data_division,
      sym_procedure_division,
  [385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
    ACTIONS(125), 1,
      anon_sym_FILESECTION_DOT,
    STATE(11), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(52), 2,
      sym_working_storage_section,
      sym_file_section,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_VARYING,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(38), 1,
      sym_varying_clause,
    ACTIONS(131), 2,
      anon_sym_DOT,
      sym_number_literal,
    ACTIONS(133), 6,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
  [435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
    ACTIONS(144), 1,
      anon_sym_ENVIRONMENTDIVISION_DOT,
    ACTIONS(147), 1,
      anon_sym_DATADIVISION_DOT,
    ACTIONS(150), 1,
      anon_sym_PROCEDUREDIVISION_DOT,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(55), 4,
      sym_identification_division,
      sym_environment_division,
      sym_data_division,
      sym_procedure_division,
  [464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_PIC,
    STATE(45), 1,
      sym_picture_clause,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_VALUE,
    STATE(44), 1,
      sym_value_clause,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_level_number,
    STATE(20), 2,
      sym_data_description,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_VARYING,
    STATE(46), 1,
      sym_varying_clause,
    ACTIONS(161), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_level_number,
    STATE(24), 2,
      sym_data_description,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_level_number,
    STATE(23), 2,
      sym_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_level_number,
    STATE(21), 2,
      sym_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_level_number,
    STATE(23), 2,
      sym_file_description,
      aux_sym_file_section_repeat1,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_level_number,
    STATE(24), 2,
      sym_data_description,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(2), 1,
      sym_paragraph_label,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_procedure_division_repeat1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PROGRAM_DASHID_DOT,
    ACTIONS(193), 1,
      anon_sym_AUTHOR_DOT,
    STATE(26), 2,
      sym_identification_clause,
      aux_sym_identification_division_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(2), 1,
      sym_paragraph_label,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_procedure_division_repeat1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_PROGRAM_DASHID_DOT,
    ACTIONS(204), 1,
      anon_sym_AUTHOR_DOT,
    STATE(26), 2,
      sym_identification_clause,
      aux_sym_identification_division_repeat1,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(2), 1,
      sym_paragraph_label,
    STATE(27), 2,
      sym_paragraph,
      aux_sym_procedure_division_repeat1,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_VALUE,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_PROGRAM_DASHID_DOT,
    ACTIONS(204), 1,
      anon_sym_AUTHOR_DOT,
    STATE(28), 2,
      sym_identification_clause,
      aux_sym_identification_division_repeat1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SOURCE_DASHCOMPUTER_DOT,
    STATE(43), 2,
      sym_source_computer_clause,
      aux_sym_configuration_section_repeat1,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [831] = 2,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(220), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SOURCE_DASHCOMPUTER_DOT,
    STATE(49), 2,
      sym_source_computer_clause,
      aux_sym_configuration_section_repeat1,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
      sym_level_number,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 8,
      anon_sym_DOT,
      anon_sym_MOVE,
      anon_sym_DISPLAY,
      anon_sym_PERFORM,
      anon_sym_IF,
      anon_sym_STOP,
      anon_sym_BEGIN,
      sym_number_literal,
  [1031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SOURCE_DASHCOMPUTER_DOT,
    STATE(49), 2,
      sym_source_computer_clause,
      aux_sym_configuration_section_repeat1,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_CONFIGURATIONSECTION_DOT,
    STATE(54), 1,
      sym_configuration_section,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_PROGRAM_DASHID_DOT,
      anon_sym_AUTHOR_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_WORKING_DASHSTORAGESECTION_DOT,
      anon_sym_FILESECTION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_SOURCE_DASHCOMPUTER_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      anon_sym_IDENTIFICATIONDIVISION_DOT,
      anon_sym_ENVIRONMENTDIVISION_DOT,
      anon_sym_DATADIVISION_DOT,
      anon_sym_PROCEDUREDIVISION_DOT,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_string_literal,
      sym_number_literal,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_UNTIL,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_identifier,
  [1162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_picture_string,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RUN,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DOT,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_TO,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_identifier,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_FROM,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_number_literal,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_string_literal,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_EQUAL,
  [1246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_number_literal,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_PERFORM,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_BY,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_number_literal,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
  [1309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_EQ,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_number_literal,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_string_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 564,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 707,
  [SMALL_STATE(29)] = 728,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 764,
  [SMALL_STATE(32)] = 785,
  [SMALL_STATE(33)] = 799,
  [SMALL_STATE(34)] = 817,
  [SMALL_STATE(35)] = 831,
  [SMALL_STATE(36)] = 845,
  [SMALL_STATE(37)] = 859,
  [SMALL_STATE(38)] = 873,
  [SMALL_STATE(39)] = 887,
  [SMALL_STATE(40)] = 901,
  [SMALL_STATE(41)] = 915,
  [SMALL_STATE(42)] = 929,
  [SMALL_STATE(43)] = 943,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 975,
  [SMALL_STATE(46)] = 989,
  [SMALL_STATE(47)] = 1003,
  [SMALL_STATE(48)] = 1017,
  [SMALL_STATE(49)] = 1031,
  [SMALL_STATE(50)] = 1049,
  [SMALL_STATE(51)] = 1066,
  [SMALL_STATE(52)] = 1079,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1104,
  [SMALL_STATE(55)] = 1115,
  [SMALL_STATE(56)] = 1126,
  [SMALL_STATE(57)] = 1134,
  [SMALL_STATE(58)] = 1141,
  [SMALL_STATE(59)] = 1148,
  [SMALL_STATE(60)] = 1155,
  [SMALL_STATE(61)] = 1162,
  [SMALL_STATE(62)] = 1169,
  [SMALL_STATE(63)] = 1176,
  [SMALL_STATE(64)] = 1183,
  [SMALL_STATE(65)] = 1190,
  [SMALL_STATE(66)] = 1197,
  [SMALL_STATE(67)] = 1204,
  [SMALL_STATE(68)] = 1211,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1225,
  [SMALL_STATE(71)] = 1232,
  [SMALL_STATE(72)] = 1239,
  [SMALL_STATE(73)] = 1246,
  [SMALL_STATE(74)] = 1253,
  [SMALL_STATE(75)] = 1260,
  [SMALL_STATE(76)] = 1267,
  [SMALL_STATE(77)] = 1274,
  [SMALL_STATE(78)] = 1281,
  [SMALL_STATE(79)] = 1288,
  [SMALL_STATE(80)] = 1295,
  [SMALL_STATE(81)] = 1302,
  [SMALL_STATE(82)] = 1309,
  [SMALL_STATE(83)] = 1316,
  [SMALL_STATE(84)] = 1323,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_label, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_label, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sentence, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perform_statement, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perform_statement, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_description, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perform_statement, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_section_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_section_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identification_division_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identification_division_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identification_division_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_section, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_statement, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_line, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_statement, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varying_clause, 10, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_line, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_line, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_clause, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_section, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_description, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perform_statement, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_section_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_section_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_clause, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_computer_clause, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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

TS_PUBLIC const TSLanguage *tree_sitter_cobol(void) {
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
