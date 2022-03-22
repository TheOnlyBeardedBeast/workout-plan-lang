# Workout lang

A grammar and parser to describe a workout plan.

(Work in progress)

## Structure

On the top level we have a `plan` which encapsulates multiple `workout`s. Every workout can have multiple `group`s or `exercise`s. Groups are optional, they can be used to highlight exercises by body parts, muscle groups... or you can mark a `group` as a `superset`. 

## Example

```workoutlang
plan("My workout plan").description("2 day upper and lower split"){
    workout("Upper body").description("be hard on yourself"){
        group("Preworkout"){
            exercise("Stair master").sets(1).reps(10m).rest(2m)
            exercise("Jumping rope").sets(4).reps(3m).pause(30s).rest(2m)
        }
        exercise("Bench press").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Bent over row").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Seated dumbbell overhead press").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Incline dumbbell bench press").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Pullups").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Bicep curls").sets(3).reps(10).pause(1m).rest(2m)
        exercise("Overhead tricep extensions").sets(3).reps(10).pause(1m).rest(2m)
    }
    workout("Lower body"){
        group("Preworkout"){
            exercise("Stair master").sets(1).reps(10m).rest(2m)
            exercise("Jumping rope").sets(4).reps(3m).pause(30s).rest(2m)
        }
        group.superset(3){
            exercise("Squats").reps(8).pause(1m).rest(2m)
            exercise("Leg extension").description("Use lower weight to pump up the muscle").reps(20).pause(1m).rest(2m)
        }
        exercise("Deadlifts").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Glute bridges").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Dumbbell lunges").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Hamstring curls").sets(3).reps(8).pause(1m).rest(2m)
        exercise("Calf raises").sets(3).reps(10).pause(1m).rest(2m)
        exercise("Overhead tricep extensions").sets(3).reps(10).pause(1m).rest(2m)
    }
}
```

## Plans

Will be used as a special file type for an offline application.