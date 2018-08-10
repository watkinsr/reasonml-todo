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

let someTodo: todo = {
  description: "Some todo description",
  progress: IN_PROGRESS,
};

Js.log(someTodo);
