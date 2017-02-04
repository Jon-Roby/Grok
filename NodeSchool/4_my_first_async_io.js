const fs = require('fs');

const getNumberOfLines = (arr) => arr.length - 1;

const logNumberOfLines = (err, data) => {
  const numberOfLines = getNumberOfLines(data.split('\n'));

  console.log(numberOfLines);
}

const file = fs.readFile(process.argv[2], 'utf8', logNumberOfLines)
