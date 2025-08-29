// Expanded COBOL Tree-sitter Grammar

const ci = (word) => {
  return token(new RegExp(word.replace(/\s+/g, "\\s+").replace(/-/g, "-"), "i"));
};

module.exports = grammar({
  name: "cobol",

  extras: ($) => [/\s+/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      seq(
        $.identification_division,
        optional($.environment_division),
        optional($.data_division),
        $.procedure_division,
      ),

    // Identification Division -------------------------------------------------

    identification_division: ($) =>
      seq(
        ci("IDENTIFICATION"),
        ci("DIVISION"),
        ".",
        $.program_id_paragraph,
        repeat($.identification_paragraph),
      ),

    program_id_paragraph: ($) =>
      seq(ci("PROGRAM-ID"), ".", field("program_name", $.identifier), "."),

    identification_paragraph: ($) =>
      choice(
        seq(ci("AUTHOR"), ".", $.free_text, "."),
        seq(ci("INSTALLATION"), ".", $.free_text, "."),
        seq(ci("DATE-WRITTEN"), ".", $.free_text, "."),
      ),

    free_text: ($) => /[^\.\n]+/,

    // Environment Division ----------------------------------------------------

    environment_division: ($) =>
      seq(
        ci("ENVIRONMENT"),
        ci("DIVISION"),
        ".",
        optional($.configuration_section),
        optional($.input_output_section),
      ),

    configuration_section: ($) =>
      seq(
        ci("CONFIGURATION"),
        ci("SECTION"),
        ".",
        repeat($.source_computer_paragraph),
      ),

    source_computer_paragraph: ($) =>
      seq(ci("SOURCE-COMPUTER"), ".", field("name", $.identifier), "."),

    input_output_section: ($) =>
      seq(
        ci("INPUT-OUTPUT"),
        ci("SECTION"),
        ".",
        optional($.file_control_paragraph),
      ),

    file_control_paragraph: ($) =>
      seq(ci("FILE-CONTROL"), ".", repeat($.select_statement)),

    select_statement: ($) =>
      seq(
        ci("SELECT"),
        field("file_name", $.identifier),
        ci("ASSIGN"),
        ci("TO"),
        field("external_name", $.identifier_or_string),
        ".",
      ),

    // Data Division -----------------------------------------------------------

    data_division: ($) =>
      seq(
        ci("DATA"),
        ci("DIVISION"),
        ".",
        repeat($.data_section),
      ),

    data_section: ($) =>
      choice($.working_storage_section, $.file_section),

    working_storage_section: ($) =>
      seq(ci("WORKING-STORAGE"), ci("SECTION"), ".", repeat($.data_description_entry)),

    file_section: ($) =>
      seq(ci("FILE"), ci("SECTION"), ".", repeat($.data_description_entry)),

    data_description_entry: ($) =>
      seq(
        field("level", $.level_number),
        field("name", $.identifier),
        optional($.picture_clause),
        optional($.value_clause),
        ".",
      ),

    picture_clause: ($) => seq(ci("PIC"), field("picture", $.picture_string)),

    value_clause: ($) =>
      seq(ci("VALUE"), field("value", choice($.string_literal, $.number_literal))),

    // Procedure Division ------------------------------------------------------

    procedure_division: ($) =>
      seq(
        ci("PROCEDURE"),
        ci("DIVISION"),
        optional($.using_clause),
        ".",
        repeat($.sentence),
      ),

    using_clause: ($) => seq(ci("USING"), repeat1($.identifier)),

    sentence: ($) => seq(repeat1($.statement), "."),

    statement: ($) =>
      choice(
        $.move_statement,
        $.display_statement,
        $.stop_statement,
        $.if_statement,
        $.perform_statement,
        $.copy_statement,
      ),

    move_statement: ($) =>
      seq(ci("MOVE"), $.identifier_or_literal, ci("TO"), repeat1($.identifier)),

    display_statement: ($) => seq(ci("DISPLAY"), repeat1($.identifier_or_literal)),

    stop_statement: ($) => seq(ci("STOP"), ci("RUN")),

    if_statement: ($) =>
      seq(
        ci("IF"),
        field("condition", $.condition),
        ci("THEN"),
        field("then", $.statement),
        optional(seq(ci("ELSE"), field("else", $.statement))),
        ci("END-IF"),
      ),

    condition: ($) =>
      seq($.identifier_or_literal, $.relational_operator, $.identifier_or_literal),

    relational_operator: ($) =>
      choice("=", ci("EQUAL"), "<", ">", "<=", ">=", "<>"),

    perform_statement: ($) =>
      seq(ci("PERFORM"), $.identifier),

    copy_statement: ($) =>
      seq(ci("COPY"), field("copybook", $.identifier_or_string)),

    // Lexical tokens ---------------------------------------------------------

    comment: ($) => token(/\*>[^\n]*|\*[^\n]*/),

    identifier: ($) =>
      token(/[A-Za-z](?:[A-Za-z0-9_-]*[A-Za-z0-9])?/),

    identifier_or_literal: ($) => choice($.identifier, $.string_literal, $.number_literal),

    identifier_or_string: ($) => choice($.identifier, $.string_literal),

    level_number: ($) => token(/(?:0[1-9]|[1-4][0-9]|77|88)/),

    picture_string: ($) => token(/[AX9V()0-9]+/),

    string_literal: ($) => token(/"[^"]*"|'[^']*'/),

    number_literal: ($) => token(/\d+/),
  },
});

