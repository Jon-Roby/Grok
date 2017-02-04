const isNumber = (e) => Number.isInteger(Number(e));

const args = process.argv;

const sum = args.reduce((prev, curr) => {
  const res = isNumber(curr) ? prev + Number(curr) : prev
  return res;
}, 0);

console.log(sum);
