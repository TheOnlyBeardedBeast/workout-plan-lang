# Workout lang

A grammar and parser to describe a workout plan.

(Work in progress)

## Example

```workoutlang
plan("My plan"){
    workout("Upper body day"){
        exercise("Bench press").sets(4).reps(1)
        exercise("Deadlifts").sets(4).reps(1).pause(0.5m).rest(1h)
        exercise("Curls").sets(4).pause(0.5m).rest(1h)
        exercise("Abs")
    }
    workout("Leg day"){}
}
```

## Plans

Will be used as a special file type for an offline application.