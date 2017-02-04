const fs = require('fs');

const file = fs.readFileSync(process.argv[2]);
const stringifiedFile= file.toString();
const numberOfLines = stringifiedFile.split('\n').length - 1;

console.log(numberOfLines);
