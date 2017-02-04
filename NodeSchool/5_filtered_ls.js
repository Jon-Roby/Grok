const fs = require('fs');
const path = require('path');

const inputPath = process.argv[2];
const inputExtension = process.argv[3];

fs.readdir(inputPath, (err, list) => {
  const filteredExtensions = list.filter(file => {
    const extension = path.extname(file);
    const trimmedExtension = extension.replace(/\./g, '');
    return (trimmedExtension === inputExtension);
  });

  filteredExtensions.map(i => console.log(i));
});
