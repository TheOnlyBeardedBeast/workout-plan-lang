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

    exerciseGroup: ($) =>
      seq(
        "group",
        $.title,
        optional($.description),
        "{",
        repeat($.exercise),
        "}"
      ),

    // exercise
    sets: ($) => seq(".sets", "(", /\d+/, ")"),
    reps: ($) => seq(".reps", "(", /\d+/, optional($.timeUnit), ")"),
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
    stringParam: ($) => /["]((\w)|(\s))+["]/,
    floatNumber: ($) => /((([1-9]*[0-9])|[0-9])?([.][0-9]*)?|[.][0-9]+)/,
    timeUnit: ($) => /[h]|[m]|[s]/,
    description: ($) => seq(".description", $.title),
  },
});
