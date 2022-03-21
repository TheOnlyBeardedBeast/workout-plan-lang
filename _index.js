const Parser = require("tree-sitter");
const lang = require("./bindings/node");

const parser = new Parser();
parser.setLanguage(lang);

const root = parser.parse(`plan("title is awsome"){
  workout("my workout"){
      exercise("ex1").sets(4).reps(1)
      exercise("ex2").sets(4).reps(1).pause(0.5m).rest(1h)
      exercise("ex3").sets(4).pause(0.5m).rest(1h)
      exercise("ex4")
  }
  workout("title"){}
}

`).rootNode;

const renderChildren = (treenode) => {
  treenode.isNamed &&
    ["stringParam", "timeUnit", "floatNumber"].includes(treenode.type) &&
    console.log(
      // treenode,
      ["stringParam", "timeUnit", "floatNumber"].includes(treenode.type) &&
        treenode.text
    );
  if (treenode.childCount > 0) {
    treenode.children.map((ch) => renderChildren(ch));
  }
};

renderChildren(root);
