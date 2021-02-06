
 var http = require('http');
var server = http.createServer(function(req, res) {
res.writeHead(200, {"Content-Type": "text/html"});
res.write('<!DOCTYPE html>'+
'<html>'+
' <head>'+
' <meta charset="utf-8" />'+
' <title>Ma page Node.js !</title>'+
' </head>'+
'<body>'+
'<nav>'+
'<ul>'+
    '<li><a href="accueille.html">ACCUEILLES</a></li>'+
    '<li><a href="modelcv.html">MODELS CV</a></li>'+
    '<li><a href="telechargent.html">TELECHARGER ICI</a></li>'+
    '<li><a href="blog_info.html">BLOG INFO</a></li> '+
    '<li><a href="apprendre.html">APPRENDRE</a>'+
    '<ul>'+
        '<li><a href="reussir_cv.html">Rediger un cv</a></li>'+
        '<li><a href="lettr_motiv.html">Lettre de motivation</a></li>'+
        '<li><a hr ef="entretien.html"> Entretien d\'emboche</a></li>'+
        '<li><a href="astuces.html">Astuces</a></li>'+
    '</ul>'+
       '</li>'+
'</ul>'+
'</nav>'+
'<div>'+
'<img src="" alt="ma photo" title="photo profil">'+
'</div>'+
'<div>'+
'<h2>Ma profession</h2>'+
'<p> décrivez votre profession en quelques mots</p>'+
'</div>'+
'<div>'+
'<form>'+
    '<input type="email" name="addr_email">'+
    '<label for="addr_email">utilisateur@mail.etc </label>'+
    '<br>'+'<br>'+
    '<input type="tel" name="numéro_tel">'+
    '<label for="numéro_tel">00 000 00 00</label>'+
    '<br>'+'<br>'+
    '<input type="residence" name="resident">'+
    '<label for="residence">Quartier/rue/ n° de villa</label>'+

'</form>'+

'</div>'+
'</body>'+
'</html>');
res.end();
});
server.listen(6745);