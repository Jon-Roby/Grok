var filterFilesByExt = require('./6_module.js');

const inputPath = process.argv[2];
const inputExtension = process.argv[3];

filterFilesByExt(inputPath, inputExtension, (err, data) => {
  data.forEach(i => console.log(i));
});
