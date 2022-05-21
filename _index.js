const Parser = require("tree-sitter");
const lang = require("./bindings/node");

const parser = new Parser();
parser.setLanguage(lang);

const root = parser.parse(
  `plan("My workout plan").description("2 day upper and lower split"){
    workout("Upper body").sets(2).description("be hard on yourself"){
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
}.meta("created":"today").meta("creator":"TheDev")
`
).rootNode;

const renderLevel = (level) => {
  let prefix = "";

  for (let i = 0; i < level; i++) {
    prefix += " ";
  }

  return prefix;
};

const renderChildren = (treenode, level = 0) => {
  // treenode.isNamed &&
  // ["stringParam", "timeUnit", "floatNumber"].includes(treenode.type) &&
  // console.log(treenode);
  if (treenode.childCount > 0) {
    console.log(renderLevel(level), treenode.type);
    treenode.children.map((ch) => renderChildren(ch, level + 1));
  } else {
    console.log(renderLevel(level), treenode.type, treenode.text);
  }
};

renderChildren(root.child(0));
