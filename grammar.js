module.exports = grammar({
  name: "workoutLang",

  rules: {
    source_file: ($) => optional($.workoutPlanDefinition),

    // workoutplan (group of workouts)
    workoutPlanDefinition: ($) =>
      seq(
        "plan",
        $.title,
        optional($.description),
        "{",
        repeat($.workoutDefinition),
        "}"
      ),

    // workout
    workoutDefinition: ($) =>
      seq(
        "workout",
        $.title,
        optional($.description),
        seq("{", repeat(choice($.exercise, $.exerciseGroup)), "}")
      ),

    // exercise group | superset
    exerciseGroup: ($) =>
      seq(
        "group",
        $.title,
        optional($.description),
        optional($.superset),
        "{",
        repeat($.exercise),
        "}"
      ),

    superset: ($) => seq(".superset", optional(seq("(", $.integerNumber, ")"))),

    // exercise
    sets: ($) => seq(".sets", "(", $.integerNumber, ")"),
    reps: ($) => seq(".reps", "(", $.integerNumber, optional($.timeUnit), ")"),
    pause: ($) => seq(".pause", "(", $.floatNumber, $.timeUnit, ")"),
    rest: ($) => seq(".rest", "(", $.floatNumber, $.timeUnit, ")"),
    exercise: ($) =>
      seq(
        "exercise",
        $.title,
        optional($.description),
        optional($.sets),
        optional($.reps),
        optional($.pause),
        optional($.rest)
      ),

    // shared
    title: ($) => seq("(", $.stringParam, ")"),
    integerNumber: ($) => /\d+/,
    stringParam: ($) => /["]((\w)|(\s))+["]/,
    floatNumber: ($) => /((([1-9]*[0-9])|[0-9])?([.][0-9]*)?|[.][0-9]+)/,
    timeUnit: ($) => /[h]|[m]|[s]/,
    description: ($) => seq(".description", $.title),
  },
});
