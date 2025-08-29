#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_identification_division_token1 = 2,
  aux_sym_identification_division_token2 = 3,
  anon_sym_DOT = 4,
  aux_sym_program_id_paragraph_token1 = 5,
  aux_sym_identification_paragraph_token1 = 6,
  aux_sym_identification_paragraph_token2 = 7,
  aux_sym_identification_paragraph_token3 = 8,
  sym_free_text = 9,
  aux_sym_environment_division_token1 = 10,
  aux_sym_configuration_section_token1 = 11,
  aux_sym_configuration_section_token2 = 12,
  aux_sym_source_computer_paragraph_token1 = 13,
  aux_sym_input_output_section_token1 = 14,
  aux_sym_file_control_paragraph_token1 = 15,
  aux_sym_select_statement_token1 = 16,
  aux_sym_select_statement_token2 = 17,
  aux_sym_select_statement_token3 = 18,
  aux_sym_data_division_token1 = 19,
  aux_sym_working_storage_section_token1 = 20,
  aux_sym_file_section_token1 = 21,
  aux_sym_picture_clause_token1 = 22,
  aux_sym_value_clause_token1 = 23,
  aux_sym_procedure_division_token1 = 24,
  aux_sym_using_clause_token1 = 25,
  aux_sym_move_statement_token1 = 26,
  aux_sym_display_statement_token1 = 27,
  aux_sym_stop_statement_token1 = 28,
  aux_sym_stop_statement_token2 = 29,
  aux_sym_if_statement_token1 = 30,
  aux_sym_if_statement_token2 = 31,
  aux_sym_if_statement_token3 = 32,
  aux_sym_if_statement_token4 = 33,
  anon_sym_EQ = 34,
  aux_sym_relational_operator_token1 = 35,
  anon_sym_LT = 36,
  anon_sym_GT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT_GT = 40,
  aux_sym_perform_statement_token1 = 41,
  aux_sym_copy_statement_token1 = 42,
  sym_comment = 43,
  sym_level_number = 44,
  sym_picture_string = 45,
  sym_string_literal = 46,
  sym_number_literal = 47,
  sym_source_file = 48,
  sym_identification_division = 49,
  sym_program_id_paragraph = 50,
  sym_identification_paragraph = 51,
  sym_environment_division = 52,
  sym_configuration_section = 53,
  sym_source_computer_paragraph = 54,
  sym_input_output_section = 55,
  sym_file_control_paragraph = 56,
  sym_select_statement = 57,
  sym_data_division = 58,
  sym_data_section = 59,
  sym_working_storage_section = 60,
  sym_file_section = 61,
  sym_data_description_entry = 62,
  sym_picture_clause = 63,
  sym_value_clause = 64,
  sym_procedure_division = 65,
  sym_using_clause = 66,
  sym_sentence = 67,
  sym_statement = 68,
  sym_move_statement = 69,
  sym_display_statement = 70,
  sym_stop_statement = 71,
  sym_if_statement = 72,
  sym_condition = 73,
  sym_relational_operator = 74,
  sym_perform_statement = 75,
  sym_copy_statement = 76,
  sym_identifier_or_literal = 77,
  sym_identifier_or_string = 78,
  aux_sym_identification_division_repeat1 = 79,
  aux_sym_configuration_section_repeat1 = 80,
  aux_sym_file_control_paragraph_repeat1 = 81,
  aux_sym_data_division_repeat1 = 82,
  aux_sym_working_storage_section_repeat1 = 83,
  aux_sym_procedure_division_repeat1 = 84,
  aux_sym_using_clause_repeat1 = 85,
  aux_sym_sentence_repeat1 = 86,
  aux_sym_display_statement_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_identification_division_token1] = "identification_division_token1",
  [aux_sym_identification_division_token2] = "identification_division_token2",
  [anon_sym_DOT] = ".",
  [aux_sym_program_id_paragraph_token1] = "program_id_paragraph_token1",
  [aux_sym_identification_paragraph_token1] = "identification_paragraph_token1",
  [aux_sym_identification_paragraph_token2] = "identification_paragraph_token2",
  [aux_sym_identification_paragraph_token3] = "identification_paragraph_token3",
  [sym_free_text] = "free_text",
  [aux_sym_environment_division_token1] = "environment_division_token1",
  [aux_sym_configuration_section_token1] = "configuration_section_token1",
  [aux_sym_configuration_section_token2] = "configuration_section_token2",
  [aux_sym_source_computer_paragraph_token1] = "source_computer_paragraph_token1",
  [aux_sym_input_output_section_token1] = "input_output_section_token1",
  [aux_sym_file_control_paragraph_token1] = "file_control_paragraph_token1",
  [aux_sym_select_statement_token1] = "select_statement_token1",
  [aux_sym_select_statement_token2] = "select_statement_token2",
  [aux_sym_select_statement_token3] = "select_statement_token3",
  [aux_sym_data_division_token1] = "data_division_token1",
  [aux_sym_working_storage_section_token1] = "working_storage_section_token1",
  [aux_sym_file_section_token1] = "file_section_token1",
  [aux_sym_picture_clause_token1] = "picture_clause_token1",
  [aux_sym_value_clause_token1] = "value_clause_token1",
  [aux_sym_procedure_division_token1] = "procedure_division_token1",
  [aux_sym_using_clause_token1] = "using_clause_token1",
  [aux_sym_move_statement_token1] = "move_statement_token1",
  [aux_sym_display_statement_token1] = "display_statement_token1",
  [aux_sym_stop_statement_token1] = "stop_statement_token1",
  [aux_sym_stop_statement_token2] = "stop_statement_token2",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
  [aux_sym_if_statement_token3] = "if_statement_token3",
  [aux_sym_if_statement_token4] = "if_statement_token4",
  [anon_sym_EQ] = "=",
  [aux_sym_relational_operator_token1] = "relational_operator_token1",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [aux_sym_perform_statement_token1] = "perform_statement_token1",
  [aux_sym_copy_statement_token1] = "copy_statement_token1",
  [sym_comment] = "comment",
  [sym_level_number] = "level_number",
  [sym_picture_string] = "picture_string",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_source_file] = "source_file",
  [sym_identification_division] = "identification_division",
  [sym_program_id_paragraph] = "program_id_paragraph",
  [sym_identification_paragraph] = "identification_paragraph",
  [sym_environment_division] = "environment_division",
  [sym_configuration_section] = "configuration_section",
  [sym_source_computer_paragraph] = "source_computer_paragraph",
  [sym_input_output_section] = "input_output_section",
  [sym_file_control_paragraph] = "file_control_paragraph",
  [sym_select_statement] = "select_statement",
  [sym_data_division] = "data_division",
  [sym_data_section] = "data_section",
  [sym_working_storage_section] = "working_storage_section",
  [sym_file_section] = "file_section",
  [sym_data_description_entry] = "data_description_entry",
  [sym_picture_clause] = "picture_clause",
  [sym_value_clause] = "value_clause",
  [sym_procedure_division] = "procedure_division",
  [sym_using_clause] = "using_clause",
  [sym_sentence] = "sentence",
  [sym_statement] = "statement",
  [sym_move_statement] = "move_statement",
  [sym_display_statement] = "display_statement",
  [sym_stop_statement] = "stop_statement",
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_relational_operator] = "relational_operator",
  [sym_perform_statement] = "perform_statement",
  [sym_copy_statement] = "copy_statement",
  [sym_identifier_or_literal] = "identifier_or_literal",
  [sym_identifier_or_string] = "identifier_or_string",
  [aux_sym_identification_division_repeat1] = "identification_division_repeat1",
  [aux_sym_configuration_section_repeat1] = "configuration_section_repeat1",
  [aux_sym_file_control_paragraph_repeat1] = "file_control_paragraph_repeat1",
  [aux_sym_data_division_repeat1] = "data_division_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym_using_clause_repeat1] = "using_clause_repeat1",
  [aux_sym_sentence_repeat1] = "sentence_repeat1",
  [aux_sym_display_statement_repeat1] = "display_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_identification_division_token1] = aux_sym_identification_division_token1,
  [aux_sym_identification_division_token2] = aux_sym_identification_division_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_program_id_paragraph_token1] = aux_sym_program_id_paragraph_token1,
  [aux_sym_identification_paragraph_token1] = aux_sym_identification_paragraph_token1,
  [aux_sym_identification_paragraph_token2] = aux_sym_identification_paragraph_token2,
  [aux_sym_identification_paragraph_token3] = aux_sym_identification_paragraph_token3,
  [sym_free_text] = sym_free_text,
  [aux_sym_environment_division_token1] = aux_sym_environment_division_token1,
  [aux_sym_configuration_section_token1] = aux_sym_configuration_section_token1,
  [aux_sym_configuration_section_token2] = aux_sym_configuration_section_token2,
  [aux_sym_source_computer_paragraph_token1] = aux_sym_source_computer_paragraph_token1,
  [aux_sym_input_output_section_token1] = aux_sym_input_output_section_token1,
  [aux_sym_file_control_paragraph_token1] = aux_sym_file_control_paragraph_token1,
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [aux_sym_select_statement_token2] = aux_sym_select_statement_token2,
  [aux_sym_select_statement_token3] = aux_sym_select_statement_token3,
  [aux_sym_data_division_token1] = aux_sym_data_division_token1,
  [aux_sym_working_storage_section_token1] = aux_sym_working_storage_section_token1,
  [aux_sym_file_section_token1] = aux_sym_file_section_token1,
  [aux_sym_picture_clause_token1] = aux_sym_picture_clause_token1,
  [aux_sym_value_clause_token1] = aux_sym_value_clause_token1,
  [aux_sym_procedure_division_token1] = aux_sym_procedure_division_token1,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_move_statement_token1] = aux_sym_move_statement_token1,
  [aux_sym_display_statement_token1] = aux_sym_display_statement_token1,
  [aux_sym_stop_statement_token1] = aux_sym_stop_statement_token1,
  [aux_sym_stop_statement_token2] = aux_sym_stop_statement_token2,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_if_statement_token3] = aux_sym_if_statement_token3,
  [aux_sym_if_statement_token4] = aux_sym_if_statement_token4,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_relational_operator_token1] = aux_sym_relational_operator_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym_perform_statement_token1] = aux_sym_perform_statement_token1,
  [aux_sym_copy_statement_token1] = aux_sym_copy_statement_token1,
  [sym_comment] = sym_comment,
  [sym_level_number] = sym_level_number,
  [sym_picture_string] = sym_picture_string,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_source_file] = sym_source_file,
  [sym_identification_division] = sym_identification_division,
  [sym_program_id_paragraph] = sym_program_id_paragraph,
  [sym_identification_paragraph] = sym_identification_paragraph,
  [sym_environment_division] = sym_environment_division,
  [sym_configuration_section] = sym_configuration_section,
  [sym_source_computer_paragraph] = sym_source_computer_paragraph,
  [sym_input_output_section] = sym_input_output_section,
  [sym_file_control_paragraph] = sym_file_control_paragraph,
  [sym_select_statement] = sym_select_statement,
  [sym_data_division] = sym_data_division,
  [sym_data_section] = sym_data_section,
  [sym_working_storage_section] = sym_working_storage_section,
  [sym_file_section] = sym_file_section,
  [sym_data_description_entry] = sym_data_description_entry,
  [sym_picture_clause] = sym_picture_clause,
  [sym_value_clause] = sym_value_clause,
  [sym_procedure_division] = sym_procedure_division,
  [sym_using_clause] = sym_using_clause,
  [sym_sentence] = sym_sentence,
  [sym_statement] = sym_statement,
  [sym_move_statement] = sym_move_statement,
  [sym_display_statement] = sym_display_statement,
  [sym_stop_statement] = sym_stop_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_condition] = sym_condition,
  [sym_relational_operator] = sym_relational_operator,
  [sym_perform_statement] = sym_perform_statement,
  [sym_copy_statement] = sym_copy_statement,
  [sym_identifier_or_literal] = sym_identifier_or_literal,
  [sym_identifier_or_string] = sym_identifier_or_string,
  [aux_sym_identification_division_repeat1] = aux_sym_identification_division_repeat1,
  [aux_sym_configuration_section_repeat1] = aux_sym_configuration_section_repeat1,
  [aux_sym_file_control_paragraph_repeat1] = aux_sym_file_control_paragraph_repeat1,
  [aux_sym_data_division_repeat1] = aux_sym_data_division_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
  [aux_sym_using_clause_repeat1] = aux_sym_using_clause_repeat1,
  [aux_sym_sentence_repeat1] = aux_sym_sentence_repeat1,
  [aux_sym_display_statement_repeat1] = aux_sym_display_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identification_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identification_division_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_program_id_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identification_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identification_paragraph_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identification_paragraph_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_free_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_environment_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_section_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_computer_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_output_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_control_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_working_storage_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_picture_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_division_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_move_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stop_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stop_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relational_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_perform_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_identification_division] = {
    .visible = true,
    .named = true,
  },
  [sym_program_id_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_identification_paragraph] = {
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
  [sym_source_computer_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_input_output_section] = {
    .visible = true,
    .named = true,
  },
  [sym_file_control_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
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
  [sym_data_description_entry] = {
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
  [sym_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [sym_stop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_perform_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_or_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_or_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identification_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_control_paragraph_repeat1] = {
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
  [aux_sym_procedure_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sentence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_copybook = 2,
  field_else = 3,
  field_external_name = 4,
  field_file_name = 5,
  field_level = 6,
  field_name = 7,
  field_picture = 8,
  field_program_name = 9,
  field_then = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_copybook] = "copybook",
  [field_else] = "else",
  [field_external_name] = "external_name",
  [field_file_name] = "file_name",
  [field_level] = "level",
  [field_name] = "name",
  [field_picture] = "picture",
  [field_program_name] = "program_name",
  [field_then] = "then",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_program_name, 2},
  [1] =
    {field_copybook, 1},
  [2] =
    {field_condition, 1},
    {field_then, 3},
  [4] =
    {field_level, 0},
    {field_name, 1},
  [6] =
    {field_name, 2},
  [7] =
    {field_picture, 1},
  [8] =
    {field_value, 1},
  [9] =
    {field_condition, 1},
    {field_else, 5},
    {field_then, 3},
  [12] =
    {field_external_name, 4},
    {field_file_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '*', 24,
        '.', 13,
        '0', 31,
        '7', 32,
        '8', 33,
        '<', 19,
        '=', 18,
        '>', 20,
        '5', 34,
        '6', 34,
        '9', 34,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '7') ADVANCE(7);
      if (lookahead == '8') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '7') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '8') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 10:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '.') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '.') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_level_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_picture_string);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'V' ||
          lookahead == 'X') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '7') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '8') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'a', 1,
        'C', 2,
        'c', 2,
        'D', 3,
        'd', 3,
        'E', 4,
        'e', 4,
        'F', 5,
        'f', 5,
        'I', 6,
        'i', 6,
        'M', 7,
        'm', 7,
        'P', 8,
        'p', 8,
        'R', 9,
        'r', 9,
        'S', 10,
        's', 10,
        'T', 11,
        't', 11,
        'U', 12,
        'u', 12,
        'V', 13,
        'v', 13,
        'W', 14,
        'w', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(25);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 26:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_picture_clause_token1);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_stop_statement_token2);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_copy_statement_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_data_division_token1);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_if_statement_token3);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 78:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_file_section_token1);
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_move_statement_token1);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_stop_statement_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_relational_operator_token1);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_value_clause_token1);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identification_paragraph_token1);
      END_STATE();
    case 120:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_if_statement_token4);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 130:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 136:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_display_statement_token1);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_perform_statement_token1);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_configuration_section_token2);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identification_division_token2);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 163:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 169:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_procedure_division_token1);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 180:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_program_id_paragraph_token1);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_environment_division_token1);
      END_STATE();
    case 188:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identification_paragraph_token3);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_file_control_paragraph_token1);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_input_output_section_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identification_paragraph_token2);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_configuration_section_token1);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identification_division_token1);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_source_computer_paragraph_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_working_storage_section_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
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
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
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
  [74] = {.lex_state = 2},
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
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_identification_division_token1] = ACTIONS(1),
    [aux_sym_identification_division_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_program_id_paragraph_token1] = ACTIONS(1),
    [aux_sym_identification_paragraph_token1] = ACTIONS(1),
    [aux_sym_identification_paragraph_token2] = ACTIONS(1),
    [aux_sym_identification_paragraph_token3] = ACTIONS(1),
    [aux_sym_environment_division_token1] = ACTIONS(1),
    [aux_sym_configuration_section_token1] = ACTIONS(1),
    [aux_sym_configuration_section_token2] = ACTIONS(1),
    [aux_sym_source_computer_paragraph_token1] = ACTIONS(1),
    [aux_sym_input_output_section_token1] = ACTIONS(1),
    [aux_sym_file_control_paragraph_token1] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_select_statement_token2] = ACTIONS(1),
    [aux_sym_select_statement_token3] = ACTIONS(1),
    [aux_sym_data_division_token1] = ACTIONS(1),
    [aux_sym_working_storage_section_token1] = ACTIONS(1),
    [aux_sym_file_section_token1] = ACTIONS(1),
    [aux_sym_picture_clause_token1] = ACTIONS(1),
    [aux_sym_value_clause_token1] = ACTIONS(1),
    [aux_sym_procedure_division_token1] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_move_statement_token1] = ACTIONS(1),
    [aux_sym_display_statement_token1] = ACTIONS(1),
    [aux_sym_stop_statement_token1] = ACTIONS(1),
    [aux_sym_stop_statement_token2] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_if_statement_token3] = ACTIONS(1),
    [aux_sym_if_statement_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_relational_operator_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [aux_sym_perform_statement_token1] = ACTIONS(1),
    [aux_sym_copy_statement_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_level_number] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym_identification_division] = STATE(30),
    [aux_sym_identification_division_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 7,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_string_literal,
      sym_number_literal,
    ACTIONS(7), 14,
      aux_sym_select_statement_token3,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token2,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_relational_operator_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
      sym_identifier,
  [29] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    STATE(4), 2,
      sym_sentence,
      aux_sym_procedure_division_repeat1,
    STATE(8), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [70] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_sentence,
      aux_sym_procedure_division_repeat1,
    STATE(8), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [111] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_sentence,
      aux_sym_procedure_division_repeat1,
    STATE(8), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [152] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(32), 1,
      aux_sym_display_statement_token1,
    ACTIONS(35), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(38), 1,
      aux_sym_if_statement_token1,
    ACTIONS(41), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(44), 1,
      aux_sym_copy_statement_token1,
    STATE(6), 2,
      sym_sentence,
      aux_sym_procedure_division_repeat1,
    STATE(8), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [193] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_sentence,
      aux_sym_procedure_division_repeat1,
    STATE(8), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [234] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(9), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [271] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      aux_sym_move_statement_token1,
    ACTIONS(56), 1,
      aux_sym_display_statement_token1,
    ACTIONS(59), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(62), 1,
      aux_sym_if_statement_token1,
    ACTIONS(65), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(68), 1,
      aux_sym_copy_statement_token1,
    STATE(9), 2,
      sym_statement,
      aux_sym_sentence_repeat1,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(77), 2,
      sym_string_literal,
      sym_number_literal,
    STATE(11), 2,
      sym_identifier_or_literal,
      aux_sym_display_statement_repeat1,
    ACTIONS(75), 8,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(86), 2,
      sym_string_literal,
      sym_number_literal,
    STATE(11), 2,
      sym_identifier_or_literal,
      aux_sym_display_statement_repeat1,
    ACTIONS(84), 8,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    STATE(71), 1,
      sym_statement,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [397] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_move_statement_token1,
    ACTIONS(15), 1,
      aux_sym_display_statement_token1,
    ACTIONS(17), 1,
      aux_sym_stop_statement_token1,
    ACTIONS(19), 1,
      aux_sym_if_statement_token1,
    ACTIONS(21), 1,
      aux_sym_perform_statement_token1,
    ACTIONS(23), 1,
      aux_sym_copy_statement_token1,
    STATE(108), 1,
      sym_statement,
    STATE(16), 6,
      sym_move_statement,
      sym_display_statement,
      sym_stop_statement,
      sym_if_statement,
      sym_perform_statement,
      sym_copy_statement,
  [430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_using_clause_repeat1,
    ACTIONS(94), 8,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_using_clause_repeat1,
    ACTIONS(100), 8,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 9,
      anon_sym_DOT,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 2,
      sym_identification_paragraph,
      aux_sym_identification_division_repeat1,
    ACTIONS(114), 3,
      aux_sym_identification_paragraph_token1,
      aux_sym_identification_paragraph_token2,
      aux_sym_identification_paragraph_token3,
    ACTIONS(116), 3,
      aux_sym_environment_division_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 2,
      sym_identification_paragraph,
      aux_sym_identification_division_repeat1,
    ACTIONS(114), 3,
      aux_sym_identification_paragraph_token1,
      aux_sym_identification_paragraph_token2,
      aux_sym_identification_paragraph_token3,
    ACTIONS(118), 3,
      aux_sym_environment_division_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 2,
      sym_identification_paragraph,
      aux_sym_identification_division_repeat1,
    ACTIONS(120), 3,
      aux_sym_identification_paragraph_token1,
      aux_sym_identification_paragraph_token2,
      aux_sym_identification_paragraph_token3,
    ACTIONS(123), 3,
      aux_sym_environment_division_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_relational_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 5,
      anon_sym_EQ,
      aux_sym_relational_operator_token1,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_working_storage_section_token1,
    ACTIONS(131), 1,
      aux_sym_file_section_token1,
    ACTIONS(133), 1,
      aux_sym_procedure_division_token1,
    STATE(27), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(57), 2,
      sym_working_storage_section,
      sym_file_section,
  [659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_working_storage_section_token1,
    ACTIONS(131), 1,
      aux_sym_file_section_token1,
    ACTIONS(135), 1,
      aux_sym_procedure_division_token1,
    STATE(28), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(57), 2,
      sym_working_storage_section,
      sym_file_section,
  [680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_working_storage_section_token1,
    ACTIONS(140), 1,
      aux_sym_file_section_token1,
    ACTIONS(143), 1,
      aux_sym_procedure_division_token1,
    STATE(28), 2,
      sym_data_section,
      aux_sym_data_division_repeat1,
    STATE(57), 2,
      sym_working_storage_section,
      sym_file_section,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      aux_sym_move_statement_token1,
      aux_sym_display_statement_token1,
      aux_sym_stop_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_perform_statement_token1,
      aux_sym_copy_statement_token1,
  [714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_environment_division_token1,
    ACTIONS(149), 1,
      aux_sym_data_division_token1,
    ACTIONS(151), 1,
      aux_sym_procedure_division_token1,
    STATE(54), 1,
      sym_environment_division,
    STATE(72), 1,
      sym_data_division,
    STATE(97), 1,
      sym_procedure_division,
  [736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_source_computer_paragraph_token1,
    STATE(31), 2,
      sym_source_computer_paragraph,
      aux_sym_configuration_section_repeat1,
    ACTIONS(156), 3,
      aux_sym_input_output_section_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_level_number,
    STATE(41), 2,
      sym_data_description_entry,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(158), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_source_computer_paragraph_token1,
    STATE(31), 2,
      sym_source_computer_paragraph,
      aux_sym_configuration_section_repeat1,
    ACTIONS(164), 3,
      aux_sym_input_output_section_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [784] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_configuration_section_token1,
    ACTIONS(168), 1,
      aux_sym_input_output_section_token1,
    STATE(48), 1,
      sym_configuration_section,
    STATE(65), 1,
      sym_input_output_section,
    ACTIONS(170), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 6,
      aux_sym_identification_paragraph_token1,
      aux_sym_identification_paragraph_token2,
      aux_sym_identification_paragraph_token3,
      aux_sym_environment_division_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_source_computer_paragraph_token1,
    STATE(33), 2,
      sym_source_computer_paragraph,
      aux_sym_configuration_section_repeat1,
    ACTIONS(174), 3,
      aux_sym_input_output_section_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_level_number,
    STATE(32), 2,
      sym_data_description_entry,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(176), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_level_number,
    STATE(40), 2,
      sym_data_description_entry,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(178), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 6,
      aux_sym_identification_paragraph_token1,
      aux_sym_identification_paragraph_token2,
      aux_sym_identification_paragraph_token3,
      aux_sym_environment_division_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_level_number,
    STATE(41), 2,
      sym_data_description_entry,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(182), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_level_number,
    STATE(41), 2,
      sym_data_description_entry,
      aux_sym_working_storage_section_repeat1,
    ACTIONS(184), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_identifier_or_literal,
    STATE(106), 1,
      sym_condition,
    ACTIONS(77), 3,
      sym_identifier,
      sym_string_literal,
      sym_number_literal,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 2,
      sym_identifier_or_literal,
      aux_sym_display_statement_repeat1,
    ACTIONS(77), 3,
      sym_identifier,
      sym_string_literal,
      sym_number_literal,
  [936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_select_statement_token1,
    ACTIONS(192), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
    STATE(44), 2,
      sym_select_statement,
      aux_sym_file_control_paragraph_repeat1,
  [951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_select_statement_token1,
    ACTIONS(196), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
    STATE(47), 2,
      sym_select_statement,
      aux_sym_file_control_paragraph_repeat1,
  [966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      aux_sym_picture_clause_token1,
    ACTIONS(202), 1,
      aux_sym_value_clause_token1,
    STATE(62), 1,
      sym_picture_clause,
    STATE(107), 1,
      sym_value_clause,
  [985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_select_statement_token1,
    ACTIONS(204), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
    STATE(44), 2,
      sym_select_statement,
      aux_sym_file_control_paragraph_repeat1,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_input_output_section_token1,
    STATE(68), 1,
      sym_input_output_section,
    ACTIONS(206), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      aux_sym_source_computer_paragraph_token1,
      aux_sym_input_output_section_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
      sym_level_number,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      sym_identifier_or_literal,
    ACTIONS(77), 3,
      sym_identifier,
      sym_string_literal,
      sym_number_literal,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(92), 1,
      sym_identifier_or_literal,
    ACTIONS(77), 3,
      sym_identifier,
      sym_string_literal,
      sym_number_literal,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_file_control_paragraph_token1,
    STATE(70), 1,
      sym_file_control_paragraph,
    ACTIONS(214), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_data_division_token1,
    ACTIONS(151), 1,
      aux_sym_procedure_division_token1,
    STATE(73), 1,
      sym_data_division,
    STATE(109), 1,
      sym_procedure_division,
  [1088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 4,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
      sym_level_number,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
      sym_level_number,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      aux_sym_working_storage_section_token1,
      aux_sym_file_section_token1,
      aux_sym_procedure_division_token1,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 3,
      sym_identifier,
      sym_string_literal,
      sym_number_literal,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(119), 1,
      sym_identifier_or_string,
    ACTIONS(224), 2,
      sym_identifier,
      sym_string_literal,
  [1137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_using_clause_repeat1,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      aux_sym_using_clause_token1,
    STATE(77), 1,
      sym_using_clause,
  [1163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_value_clause_token1,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_value_clause,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      aux_sym_select_statement_token1,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(120), 1,
      sym_identifier_or_string,
    ACTIONS(224), 2,
      sym_identifier,
      sym_string_literal,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_program_id_paragraph_token1,
    STATE(23), 1,
      sym_program_id_paragraph,
  [1214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_using_clause_repeat1,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_using_clause_repeat1,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      aux_sym_data_division_token1,
      aux_sym_procedure_division_token1,
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_if_statement_token3,
    ACTIONS(250), 1,
      aux_sym_if_statement_token4,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_procedure_division_token1,
    STATE(109), 1,
      sym_procedure_division,
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_procedure_division_token1,
    STATE(78), 1,
      sym_procedure_division,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_string_literal,
      sym_number_literal,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_DOT,
      aux_sym_value_clause_token1,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOT,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DOT,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOT,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_configuration_section_token2,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOT,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DOT,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_identification_division_token2,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOT,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_identification_division_token2,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DOT,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DOT,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_if_statement_token2,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_select_statement_token3,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_identification_division_token2,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_configuration_section_token2,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOT,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DOT,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DOT,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_picture_string,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_configuration_section_token2,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_if_statement_token2,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_if_statement_token4,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_select_statement_token2,
  [1541] = 2,
    ACTIONS(324), 1,
      sym_free_text,
    ACTIONS(326), 1,
      sym_comment,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_stop_statement_token2,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_identification_division_token2,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOT,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_configuration_section_token2,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_select_statement_token3,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DOT,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DOT,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 397,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 476,
  [SMALL_STATE(17)] = 491,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 521,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 566,
  [SMALL_STATE(23)] = 584,
  [SMALL_STATE(24)] = 602,
  [SMALL_STATE(25)] = 620,
  [SMALL_STATE(26)] = 638,
  [SMALL_STATE(27)] = 659,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 701,
  [SMALL_STATE(30)] = 714,
  [SMALL_STATE(31)] = 736,
  [SMALL_STATE(32)] = 752,
  [SMALL_STATE(33)] = 768,
  [SMALL_STATE(34)] = 784,
  [SMALL_STATE(35)] = 804,
  [SMALL_STATE(36)] = 816,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 864,
  [SMALL_STATE(40)] = 876,
  [SMALL_STATE(41)] = 892,
  [SMALL_STATE(42)] = 908,
  [SMALL_STATE(43)] = 923,
  [SMALL_STATE(44)] = 936,
  [SMALL_STATE(45)] = 951,
  [SMALL_STATE(46)] = 966,
  [SMALL_STATE(47)] = 985,
  [SMALL_STATE(48)] = 1000,
  [SMALL_STATE(49)] = 1014,
  [SMALL_STATE(50)] = 1024,
  [SMALL_STATE(51)] = 1034,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1058,
  [SMALL_STATE(54)] = 1072,
  [SMALL_STATE(55)] = 1088,
  [SMALL_STATE(56)] = 1098,
  [SMALL_STATE(57)] = 1108,
  [SMALL_STATE(58)] = 1117,
  [SMALL_STATE(59)] = 1126,
  [SMALL_STATE(60)] = 1137,
  [SMALL_STATE(61)] = 1150,
  [SMALL_STATE(62)] = 1163,
  [SMALL_STATE(63)] = 1176,
  [SMALL_STATE(64)] = 1185,
  [SMALL_STATE(65)] = 1196,
  [SMALL_STATE(66)] = 1204,
  [SMALL_STATE(67)] = 1214,
  [SMALL_STATE(68)] = 1224,
  [SMALL_STATE(69)] = 1232,
  [SMALL_STATE(70)] = 1242,
  [SMALL_STATE(71)] = 1250,
  [SMALL_STATE(72)] = 1260,
  [SMALL_STATE(73)] = 1270,
  [SMALL_STATE(74)] = 1280,
  [SMALL_STATE(75)] = 1288,
  [SMALL_STATE(76)] = 1296,
  [SMALL_STATE(77)] = 1303,
  [SMALL_STATE(78)] = 1310,
  [SMALL_STATE(79)] = 1317,
  [SMALL_STATE(80)] = 1324,
  [SMALL_STATE(81)] = 1331,
  [SMALL_STATE(82)] = 1338,
  [SMALL_STATE(83)] = 1345,
  [SMALL_STATE(84)] = 1352,
  [SMALL_STATE(85)] = 1359,
  [SMALL_STATE(86)] = 1366,
  [SMALL_STATE(87)] = 1373,
  [SMALL_STATE(88)] = 1380,
  [SMALL_STATE(89)] = 1387,
  [SMALL_STATE(90)] = 1394,
  [SMALL_STATE(91)] = 1401,
  [SMALL_STATE(92)] = 1408,
  [SMALL_STATE(93)] = 1415,
  [SMALL_STATE(94)] = 1422,
  [SMALL_STATE(95)] = 1429,
  [SMALL_STATE(96)] = 1436,
  [SMALL_STATE(97)] = 1443,
  [SMALL_STATE(98)] = 1450,
  [SMALL_STATE(99)] = 1457,
  [SMALL_STATE(100)] = 1464,
  [SMALL_STATE(101)] = 1471,
  [SMALL_STATE(102)] = 1478,
  [SMALL_STATE(103)] = 1485,
  [SMALL_STATE(104)] = 1492,
  [SMALL_STATE(105)] = 1499,
  [SMALL_STATE(106)] = 1506,
  [SMALL_STATE(107)] = 1513,
  [SMALL_STATE(108)] = 1520,
  [SMALL_STATE(109)] = 1527,
  [SMALL_STATE(110)] = 1534,
  [SMALL_STATE(111)] = 1541,
  [SMALL_STATE(112)] = 1548,
  [SMALL_STATE(113)] = 1555,
  [SMALL_STATE(114)] = 1562,
  [SMALL_STATE(115)] = 1569,
  [SMALL_STATE(116)] = 1576,
  [SMALL_STATE(117)] = 1583,
  [SMALL_STATE(118)] = 1590,
  [SMALL_STATE(119)] = 1597,
  [SMALL_STATE(120)] = 1604,
  [SMALL_STATE(121)] = 1611,
  [SMALL_STATE(122)] = 1618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_or_literal, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_or_literal, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_statement, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_display_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_statement_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_display_statement_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_display_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_using_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_using_clause_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_using_clause_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_statement, 3, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perform_statement, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_statement, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 4, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identification_division_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identification_division_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_division_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_section_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_section_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_section, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_id_paragraph, 4, 0, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_section, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_paragraph, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_control_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_control_paragraph_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_paragraph, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_control_paragraph, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_computer_paragraph, 4, 0, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description_entry, 3, 0, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description_entry, 4, 0, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description_entry, 5, 0, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_operator, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6, 0, 9),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_division, 5, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_output_section, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2, 0, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_clause, 2, 0, 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_or_string, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
