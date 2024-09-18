module.exports = grammar({
  name: 'DianaCompiledLanguage',

  rules: {
    source_file: $ => sep(repeat1('\n'), $._line),
    _line: $ => choice($.instruction, $.comment),

    instruction: $ => choice(
      seq($.keyword, repeat($._arg), optional($.comment)),
    ),

    keyword: $ => choice(
      caseInsensitive('NOT'),
      caseInsensitive('AND'),
      caseInsensitive('NAND'),
      caseInsensitive('OR'),
      caseInsensitive('NOR'),
      caseInsensitive('XOR'),
      caseInsensitive('NXOR'),

      caseInsensitive('ROL'),
      caseInsensitive('ROR'),
      caseInsensitive('SHL'),
      caseInsensitive('SHR'),

      caseInsensitive('ADD'),
      caseInsensitive('SUB'),

      caseInsensitive('SET'),
      caseInsensitive('MOV'),
      caseInsensitive('LOD'),
      caseInsensitive('STO'),

      caseInsensitive('PC'),
      caseInsensitive('LAB'),
      caseInsensitive('LIH'),

      caseInsensitive('NOP'),
      caseInsensitive('HLT'),
    ),

    _arg: $ => choice(
      $.variable,
      $.expression,
      $.logic_expression,
      $.constant,
      seq('!', $.constant),
    ),

    expression: $ => seq(
      '(', $._arg, $.operator, $._arg, ')',
    ),
    logic_expression: $ => seq(
      '[', $._arg, $.operator, $._arg, ']',
    ),

    variable: $ => /[a-c|A-C]/,

    constant: $ => choice(
      $.numeric,
      $.character,
      $.label,
    ),
    operator: $ => choice('==', '>', '>=', '<', '<=', '+', '-', '*', '/', '&', '|', '>>', '<<', '%'),
    numeric: $ => choice(
      /0[x|X][0-9|a-f|A-F]*/,
      /0[b|B][0|1]*/,
      /[0-9]+/,
    ),
    character: $ => token(seq('\'', /./, '\'')),

    label: $ => /[a-z|A-Z|_]+/,

    comment: $ => token(seq('#', /.*/)),
  }
});

function caseInsensitive(word) {
  return new RegExp(word.split('').map(char => `[${char.toLowerCase()}|${char.toUpperCase()}]`).join(''));
}

function sep(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
