// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';


var someList = /* :: */[
  1,
  /* :: */[
    2,
    /* :: */[
      3,
      /* :: */[
        4,
        /* :: */[
          5,
          /* [] */0
        ]
      ]
    ]
  ]
];

var someOtherList = /* :: */[
  0,
  someList
];

function myListPatternMatcher(l) {
  if (l) {
    return "The head of the list is the string " + String(l[0]);
  } else {
    return "This list is empty";
  }
}

console.log(myListPatternMatcher(someOtherList));

console.log(myListPatternMatcher(someList));

exports.someList = someList;
exports.someOtherList = someOtherList;
exports.myListPatternMatcher = myListPatternMatcher;
/*  Not a pure module */
