using System;

namespace exercice2
{
  class Program{

    static void Main(string[] args){
        
       float rayon ,perimetre,  surface ;
        const float pi = 3.14f;
       do{
        Console.WriteLine("Saisissez le rayon du cercle !!!");
        rayon = Int32.Parse(Console.ReadLine());
       }while(rayon < 0);
        
        perimetre = rayon * pi * 2;
        surface = rayon *rayon * pi;
        Console.WriteLine("le perimetre du cercle est de " + perimetre +" et la surface est de "+ surface);
        Console.ReadLine();
    }
}}