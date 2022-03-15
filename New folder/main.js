const currentMoney = 4800;
const seventhInst = 1150;
const eightInst = 1150;
const ninthInst = 1124;
const balanceMoney = 2300;

const monitor = 7890;
const table = 4480;

var test = "test" + $currentMoney;

var debit;
var credit;
var remaining;

debit = currentMoney + seventhInst + eightInst + ninthInst + balanceMoney;
credit = monitor + table;
remaining = debit - credit;


console.log(test);
