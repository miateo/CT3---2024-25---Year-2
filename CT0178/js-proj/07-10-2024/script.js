let baseBankAccount = {
  amount: 0,
  owner: "none",
  add: function (incr) {
    this.amount += incr;
  },
};

let BankAccount = function (amount, owner) {
  this.amount = amount;
  this.owner = owner;
};
BankAccount.prototype = baseBankAccount;

let ba1 = new BankAccount(1000, "Paperino");
ba1.add(100);

let check1 = ba1 instanceof BankAccount;

let ba2 = new BankAccount();
ba2.add(100);
