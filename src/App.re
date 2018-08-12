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

let getProgress = todo =>
  switch (todo.progress) {
  | IN_PROGRESS => "In progress"
  | DONE => "Done"
  };

let addTodo = (todo, _todos) => switch(todo) {
  | Some(todo) => [todo, ..._todos]
  | None => []
};

let getDone = todos => List.filter(todo => todo.progress === DONE, todos);

let printTodo = todo => "\nDescription: " ++ todo.description ++ "\nProgress: " ++ getProgress(todo);
let printTodos = todos => List.iter(todo => Js.log(printTodo(todo)), todos);
let printDone = todos => getDone(todos) |> printTodos;

let todo1: todo = {description: "description1", progress: DONE};
let todo2: todo = {description: "description2", progress: IN_PROGRESS};

let _todos = [todo1, todo2];

Js.log("[LOG] todo1 progress: " ++ getProgress(todo1));
printTodos(_todos);
printDone(_todos);
