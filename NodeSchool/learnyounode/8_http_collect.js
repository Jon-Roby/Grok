var http = require('http')

var url = process.argv[2];
var str = '';

http.get(url, (response) => {
  response.setEncoding('utf8');
  response.on('data', (data) => {
    str += data;
  });
  response.on('end', () => {
    console.log(str.length)
    console.log(str)
  });
});
