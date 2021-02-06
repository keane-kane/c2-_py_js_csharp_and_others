var http = require('http');
var server = http.createServer(function(req, res){
   res.writeHead(200,{ "Content-Type":"text/html", "charset":"utf-8"});
      
    for (var i = 1; i <= 10; i++) 
    {

          for (var j= 1; j <=10; j++)
        {

            if(i>=j){
                res.write('* ');
            }

            else {
                res.write(' ');
            }
        }
               res.write("<br>");
    }
res.end();});
server.listen(10045);