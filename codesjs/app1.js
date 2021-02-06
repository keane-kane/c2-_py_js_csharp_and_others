var http = require("http");
var server = http.createServer(function(req, res) {
res.writeHead(200, { 'Content-type': 'text/html; language=fr; charset= utf-8' });
    
    var d= new Date();
    
    var date= d.toString();
   
    res.write(date);

res.end();
});
server.listen(4000);