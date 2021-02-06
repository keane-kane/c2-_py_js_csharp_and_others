var http = require("http");
var server = http.createServer(function (req, res){
     
    res.writeHead(200, {"Content-Type":"text/plain"});
       res.end("Lorem ipsum dolor sit, amet consectetur adipisicing elit. Cumque libero quod autem molestiae! Nostrum laborum tempore consectetur eaque magnam molestias eligendi, vero, accusantium officiis distinctio facere sequi, voluptatibus dolor porro!");
    //res.end();

});
server.listen(8080);
