/* todo app
   Types:
     Todo: IN_PROGRESS | DONE
     Todos: [Todo]

   Actions:
     addTodo(Todo) => [Todos]
     removeTodo(Todo) => [Todos]
    */

let someList: list(int) = [1, 2, 3, 4, 5];
let someOtherList = [0, ...someList];

let myListPatternMatcher = l =>
  switch (l) {
  | [] => "This list is empty"
  | [a, ...rest] => "The head of the list is the string " ++ string_of_int(a)
  };

Js.log(myListPatternMatcher(someOtherList));
Js.log(myListPatternMatcher(someList));
/* Js.log("TODO: todo app..."); */
