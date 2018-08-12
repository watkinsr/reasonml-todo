/* todo app
   Types:
     Todo: IN_PROGRESS | DONE
     Todos: [Todo]

   Actions:
     addTodo(Todo) => [Todos]
     removeTodo(Todo) => [Todos]
    */

type todoProgress =
  | IN_PROGRESS
  | DONE;

type todo = {
  description: string,
  progress: todoProgress,
};

type todos = list(todo);

let someTodo: todo = {description: "Some todo description", progress: DONE};
let someTodo2: todo = {description: "Some todo description [2]", progress: DONE};

let someTodoProgress =
  switch (someTodo.progress) {
  | IN_PROGRESS => "In progress"
  | DONE => "Done"
  };

let someTodos = [someTodo, someTodo2];

Js.log("someTodoProgress: " ++ someTodoProgress);
Js.log(someTodo);
Js.log(someTodos);
