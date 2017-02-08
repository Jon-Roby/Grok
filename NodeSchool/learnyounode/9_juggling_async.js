var http = require('http');

var url1 = process.argv[2];
var url2 = process.argv[3];
var url3 = process.argv[4];
var output = [];

http.get(url, (response) => {
  response.setEncoding('utf8');
  response.on('data', (data1) => {
    output.push(data1)
    
  });
});





// var http = require('http')
//
// var url = process.argv[2];
// var str = '';
//
// http.get(url, (response) => {
//   response.setEncoding('utf8');
//   response.on('data', (data) => {
//     str += data;
//   });
//   response.on('end', () => {
//     console.log(str.length)
//     console.log(str)
//   });
// });
