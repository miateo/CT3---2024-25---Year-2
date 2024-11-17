let m1 = new Map();
m1.set(true, 1);
m1.set("test", [1, 2, 3]);
let s = m1.size();
let v = m1.get(true);
let v1 = m1.get("test");

class TypeMap extends Map {
  keyType = "string";
  valueType = "number";
  constructor(keyType, valueType, entries) {
    super(entries);
    if (keyType) this.keyType = keyType;
    if (valueType) this.valueType = valueType;
  }
}
