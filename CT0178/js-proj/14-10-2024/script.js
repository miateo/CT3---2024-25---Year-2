let baseVector = {
  x: 0,
  y: 0,
  add(v) {
    // <- funziona perché "add: function" è syntactic sugar
    this.x += v.x;
    this.y += v.y;
  },
  getLenght() {
    return Math.sqrt(this.x * this.x + this.y * this.y);
  },
  setLenght() {
    let ratio = 1 / this.getLenght();
    this.x *= ratio;
    this.y *= ratio;
  },
};

let Vector = function (x, y) {
  this.x = x;
  this.y = y;
};
Vector.prototype = baseVector;

let v1 = new Vector(3, 4);
console.log(v1.getLenght());
v1.setLenght(10);
console.log(v1.getLenght());
