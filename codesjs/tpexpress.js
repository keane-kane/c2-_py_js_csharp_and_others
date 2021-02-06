//  var triangle= 5;
// for(var i=1; triangle.length<5; i++){
     
//     document.write("*");
// }
var express= require('express');
var app= express();
var http = require('http');
var server= http.createServer((req,res)=>{
app.get('/', function(req, res) {
    res.setHeader('Content-Type', 'text/plain');
    res.send('Vous êtes à l\'accueil, que puis-je pour vous ?');
    });
    app.get('/page7/:', function(req, res) {
    res.setHeader('Content-Type', 'text/plain');
    res.send('Vous êtes dans la chambre 12!');
    });
    app.get('/etage/:etagenum/chambre', function(req, res) {
    res.setHeader('Content-Type', 'text/plain');
    res.send('Vous êtes à la chambre de l\'étage n*'+req.params.etagenum);

    });
    app.get('', function(req,res){
        res.setHeader('Content-Type', 'text/plain', 'utf-8');
        res.end('Vous êtes à la chambre 18');
    });
     });
     app.listen(8480);