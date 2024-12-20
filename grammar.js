// COBOL Tree-sitter Grammar
module.exports = grammar({
  name: "cobol",

  extras: ($) => [/\s+/, $.comment],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) =>
      choice(
        $.identification_division,
        $.environment_division,
        $.data_division,
        $.procedure_division,
      ),

    identification_division: ($) =>
      seq("IDENTIFICATION DIVISION.", repeat($.identification_clause)),

    identification_clause: ($) =>
      choice(
        seq("PROGRAM-ID.", $.identifier),
        seq("AUTHOR.", $.string_literal),
      ),

    environment_division: ($) =>
      seq("ENVIRONMENT DIVISION.", optional($.configuration_section)),

    configuration_section: ($) =>
      seq("CONFIGURATION SECTION.", repeat($.source_computer_clause)),

    source_computer_clause: ($) => seq("SOURCE-COMPUTER.", $.identifier),

    data_division: ($) => seq("DATA DIVISION.", repeat($.data_section)),

    data_section: ($) => choice($.working_storage_section, $.file_section),

    working_storage_section: ($) =>
      seq("WORKING-STORAGE SECTION.", repeat($.data_description)),

    file_section: ($) => seq("FILE SECTION.", repeat($.file_description)),

    file_description: ($) =>
      seq($.level_number, $.identifier, optional($.picture_clause)),

    data_description: ($) =>
      seq(
        $.level_number,
        $.identifier,
        optional($.picture_clause),
        optional($.value_clause),
      ),

    picture_clause: ($) => seq("PIC", $.picture_string),

    value_clause: ($) =>
      seq("VALUE", choice($.string_literal, $.number_literal)),

    procedure_division: ($) => seq("PROCEDURE DIVISION.", repeat($.paragraph)),

    paragraph: ($) => seq($.paragraph_label, repeat($.sentence)),

    paragraph_label: ($) => seq($.identifier, "."),

    sentence: ($) => seq(repeat1($.statement_line), "."),

    statement_line: ($) =>
      choice(
        $.move_statement,
        $.display_statement,
        $.perform_statement,
        $.if_statement,
        $.index_line,
        $.stop_statement,
        $.begin_statement,
      ),

    move_statement: ($) => seq("MOVE", $.identifier, "TO", $.identifier),

    display_statement: ($) => seq("DISPLAY", $.string_literal),

    perform_statement: ($) =>
      seq("PERFORM", optional($.identifier), optional($.varying_clause)),

    varying_clause: ($) =>
      seq(
        "VARYING",
        $.identifier,
        "FROM",
        $.number_literal,
        "BY",
        $.number_literal,
        "UNTIL",
        $.identifier,
        "=",
        $.number_literal,
      ),

    if_statement: ($) =>
      seq(
        "IF",
        $.identifier,
        "EQUAL",
        $.number_literal,
        "PERFORM",
        $.identifier,
      ),

    stop_statement: ($) => seq("STOP", "RUN"),

    begin_statement: ($) => seq("BEGIN", "."),

    index_line: ($) => seq($.number_literal, optional($.comment)),

    comment: ($) => token(/\*[^\n]*/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    reserved_word: ($) =>
      choice(
        "MOVE",
        "TO",
        "DISPLAY",
        "VALUE",
        "PIC",
        "PERFORM",
        "IF",
        "EQUAL",
        "STOP",
        "RUN",
        "BEGIN",
        "VARYING",
        "UNTIL",
      ),

    level_number: ($) => /(?:01|[0-4][0-9]|77|88)/,

    picture_string: ($) => /[AX9]+(?:\([0-9]+\))?/,

    string_literal: ($) => /".*?"|'.*?'/,

    number_literal: ($) => /[0-9]+/,
  },
});
