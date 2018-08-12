// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");

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
    return List.fold_left((function (x, y) {
                  return x + (y + ",");
                }), "", List.map((function (x) {
                      return String(x);
                    }), l[1]));
  } else {
    return "This list is empty";
  }
}

List.fold_left((function (prim, prim$1) {
        return prim + prim$1 | 0;
      }), 0, /* :: */[
      1,
      /* :: */[
        3,
        /* :: */[
          5,
          /* :: */[
            7,
            /* [] */0
          ]
        ]
      ]
    ]);

console.log(myListPatternMatcher(someOtherList));

console.log(myListPatternMatcher(someList));

console.log(someList);

exports.someList = someList;
exports.someOtherList = someOtherList;
exports.myListPatternMatcher = myListPatternMatcher;
/*  Not a pure module */
