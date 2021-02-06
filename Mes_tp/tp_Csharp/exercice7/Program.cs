using System;

namespace exercice7
{
    class Program
    {
        static void Main(string[] args)
        {
             int i=1;
            int nbEtoiles;
            do{
            Console.WriteLine("Donnew le nombre d'etoile pour construire le triangle!");
            nbEtoiles = Int32.Parse(Console.ReadLine());
            
                for(int j= 0; j < i ; j++){
                   
                    Console.Write("*");
                
                    Console.WriteLine();
                    i++;
                }
               // Console.WriteLine();
            
        }while(i <= nbEtoiles);
         Console.WriteLine();

    }
}
}