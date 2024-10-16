let a = 1;
let b = 2;
let incr = function (v) {
  let result = v;
  result = result + 1;
  return result;
};
a = incr(a);
a = incr(a);
b = incr(b);
