module.exports = grammar({
  name: "workoutLang",

  rules: {
    source_file: ($) => optional($.workoutPlan),

    // workoutplan (group of workouts)
    workoutPlan: ($) =>
      seq(
        seq("plan", $.title),
        optional($.description),
        $._contextStart,
        repeat($.workout),
        $._contextEnd,
        repeat($.meta)
      ),

    // workout
    workout: ($) =>
      seq(
        "workout",
        $.title,
        optional($.sets),
        optional($.description),
        seq(
          $._contextStart,
          repeat(choice($.exercise, $.exerciseGroup)),
          $._contextEnd
        )
      ),

    // exercise group | superset
    exerciseGroup: ($) =>
      seq(
        "group",
        optional($.title),
        optional($.description),
        optional($.superset),
        $._contextStart,
        repeat($.exercise),
        $._contextEnd
      ),

    superset: ($) =>
      seq(
        ".superset",
        optional(seq($._valueStart, $.integerNumber, $._valueEnd))
      ),

    // exercise
    sets: ($) => seq(".sets", $._valueStart, $.integerNumber, $._valueEnd),
    reps: ($) =>
      seq(
        ".reps",
        $._valueStart,
        $.integerNumber,
        optional($.timeUnit),
        $._valueEnd
      ),
    pause: ($) =>
      seq(".pause", $._valueStart, $.floatNumber, $.timeUnit, $._valueEnd),
    rest: ($) =>
      seq(".rest", $._valueStart, $.floatNumber, $.timeUnit, $._valueEnd),
    exercise: ($) =>
      seq(
        "exercise",
        $.title,
        prec(1, optional($.description)),
        optional($.sets),
        optional($.reps),
        optional($.pause),
        optional($.rest)
      ),

    meta: ($) =>
      seq(
        ".meta",
        $._valueStart,
        field("metaKey", $.stringParam),
        $._metaDivider,
        field("metaValue", $.stringParam),
        $._valueEnd
      ),

    // shared
    description: ($) => seq(".description", $.title),
    title: ($) => seq($._valueStart, $.stringParam, $._valueEnd),
    integerNumber: ($) => /\d+/,
    stringParam: ($) => /["]((\w)|(\s))+["]/,
    floatNumber: ($) => /((([1-9]*[0-9])|[0-9])?([.][0-9]*)?|[.][0-9]+)/,
    timeUnit: ($) => /([h]|[m]|[s])/,

    _contextStart: ($) => "{",
    _contextEnd: ($) => "}",
    _valueStart: ($) => "(",
    _valueEnd: ($) => ")",
    _metaDivider: ($) => ":",
  },
});
