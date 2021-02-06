
var http=require("http");
var triangle= 5;
var server= http.createServer(function (req, res){
    res.writeHead(200, {"Content-Type": "text/html"});
    for( var i=1;  i= triangle.length; i++){
        document.write("*") ;

    }
    res.write('');
 res.end();
});
server.listen(10045);