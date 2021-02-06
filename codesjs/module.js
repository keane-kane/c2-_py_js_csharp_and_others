var EventEmetter= require('event').EventEmitter;
var jeu = new EventEmetter();
 jeu.on('gameover', function(mes){

    console.log(mes);

 });
 jeu.emit('gameover', 'vous avez perdu !');