const fs = require('fs');
const path = require('path');

/* For 6_make_it_modular.js */
const filterFilesByExt = (inputPath, inputExtension, cb) => {
  fs.readdir(inputPath, (err, list) => {
    if (err) { return cb(err) }

    const filteredExtensions = list.filter(file => {
      const extension = path.extname(file);
      const trimmedExtension = extension.replace(/\./g, '');
      return (trimmedExtension === inputExtension);
    });

    return cb(null, filteredExtensions);
  });
}

module.exports = filterFilesByExt;
