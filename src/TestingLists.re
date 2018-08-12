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
  | [a, ...rest] => rest
  |> List.map(x => string_of_int(x))
  |> List.fold_left(((x, y) => x ++ y ++ ","), "")
  };

List.fold_left((+), 0, [1, 3, 5, 7]);

Js.log(myListPatternMatcher(someOtherList));
Js.log(myListPatternMatcher(someList));
Js.log(someList);
