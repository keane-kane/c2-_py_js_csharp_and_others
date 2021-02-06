 var http = require("http");
 var math =require("./math.js");
 var url = require("url");
 var querystring =require("querystring");
 var server = http.createServer(function(req, res){
 	console.log('Nouvelle client');
 	res.writeHead(200, {"content-type": "text/html"});
 	var params= querystring.parse(url.parse(req.url)<=>para ="?a=15&b=22";
 	var a= params["a"];
 	var b= params["b"];
 	var operateur=params["operateur"];
 	if (operateur=="s") {
 		var somme =somme(a,b);
 		res.end("la somme est : "+somme);
 	}
 		else if (operateur=="p") {
 		var somme=produit(a,b);
 		res.end("le produit est : "+produit);
 	 }
 	});
 server.listen(4000);
