// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");

function getProgress(todo) {
  var match = todo[/* progress */1];
  if (match !== 0) {
    return "Done";
  } else {
    return "In progress";
  }
}

function addTodo(todo, _todos) {
  if (todo) {
    return /* :: */[
            todo[0],
            _todos
          ];
  } else {
    return /* [] */0;
  }
}

function getDone(todos) {
  return List.filter((function (todo) {
                  return +(todo[/* progress */1] === /* DONE */1);
                }))(todos);
}

function printTodo(todo) {
  return "\nDescription: " + (todo[/* description */0] + ("\nProgress: " + getProgress(todo)));
}

function printTodos(todos) {
  return List.iter((function (todo) {
                console.log(printTodo(todo));
                return /* () */0;
              }), todos);
}

function printDone(todos) {
  return printTodos(getDone(todos));
}

var todo1 = /* record */[
  /* description */"description1",
  /* progress : DONE */1
];

var todo2 = /* record */[
  /* description */"description2",
  /* progress : IN_PROGRESS */0
];

var _todos_001 = /* :: */[
  todo2,
  /* [] */0
];

var _todos = /* :: */[
  todo1,
  _todos_001
];

console.log("[LOG] todo1 progress: " + getProgress(todo1));

printTodos(_todos);

printTodos(getDone(_todos));

exports.getProgress = getProgress;
exports.addTodo = addTodo;
exports.getDone = getDone;
exports.printTodo = printTodo;
exports.printTodos = printTodos;
exports.printDone = printDone;
exports.todo1 = todo1;
exports.todo2 = todo2;
exports._todos = _todos;
/*  Not a pure module */
