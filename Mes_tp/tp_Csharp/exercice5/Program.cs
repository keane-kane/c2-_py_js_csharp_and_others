using System;

namespace exercice5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Entez une annee valide !!");
            int annee = Int32.Parse(Console.ReadLine());
            if( annee % 4 ==0 || annee % 400 == 0)
            Console.WriteLine("L'annee saisie est bissextile");
            else
            Console.WriteLine("L'annee saisie n'est pas bissextile");
           
        }
    }
}
