module.exports = grammar({
  name: "workout",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.workoutPlanDefinition),

    workoutPlanDefinition: ($) =>
      seq("plan", $.title, "{", repeat($.workoutDefinition), "}"),

    workoutDefinition: ($) =>
      seq("workout", $.title, seq("{", repeat($.exercise), "}")),

    exercise: ($) =>
      seq(
        "exercise",
        $.title,
        optional($.sets),
        optional($.reps),
        optional($.pause),
        optional($.rest)
      ),

    sets: ($) => seq(".sets", "(", /\d+/, ")"),
    reps: ($) => seq(".reps", "(", /\d+/, ")"),
    pause: ($) => seq(".pause", "(", $.floatNumber, $.timeUnit, ")"),
    rest: ($) => seq(".rest", "(", $.floatNumber, $.timeUnit, ")"),

    title: ($) => seq("(", $.stringParam, ")"),

    stringParam: ($) => /["]((\w)|(\s))+["]/,

    floatNumber: ($) => /((([1-9])|([1-9][0-9]+)|[0])?([.][0-9]*)?|[.][0-9]+)/,

    timeUnit: ($) => /[h]|[m]|[s]/,
  },
});
