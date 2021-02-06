
var http = require("http");
var url = require("url");
var querystring = require('querystring');
var server = http.createServer(function(req, res) {

 /*   var params = querystring.parse(url.parse(req.url).query);

     res.writeHead(200, { 'Content-type': 'text/plain; charset= utf-8' });
    
     if ('nbre0' in params && 'nbre1' in params) {
         var n1= parseInt(params['nbre0']);
         var n2= parseInt(params['nbre1']);
         var som =n1 + n2;
        res.write('la somme est de:' +som );*/

        }
res.end();
});
server.listen(8080);