let baseBankAccount = {
  amount: 0,
  owner: "none",
  add: function (incr) {
    this.amount += incr;
  },
};

let BankAccount = function (amount, owner) {
  if (typeof amount === "object") {
    [owner, amount] = [amount.owner, amount.amount];
    //owner = amount.owner;
    //amount = amount.amount;
  }
  if (amount) {
    if (typeof amount != "number") throw "Wrong parameter, expected Number";
    this.amount = amount;
  }
  if (owner) {
    this.owner = owner;
  }
};
BankAccount.prototype = baseBankAccount;

let ba1 = new BankAccount(1000, "Paperino");
ba1.add(100);

let check1 = ba1 instanceof BankAccount;

let ba2 = new BankAccount();
ba2.add(100);

try {
  let ba3 = new BankAccount({ amount: 110, owner: "Pippo" });
  ba3.add(200);
} catch (e) {
  console.log(e);
}
