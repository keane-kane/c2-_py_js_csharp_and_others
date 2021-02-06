using System;

namespace exercice6
{
    class Program
    {
        static void Main(string[] args)
        {   
            int facto= 1;
            Console.WriteLine("Saississez un nombre entier !!");
            int nombre = Int32.Parse(Console.ReadLine());
            for(int i = 1; i<= nombre; i++){
                facto *= i;
            }
            Console.WriteLine("Le factorielle de "+nombre+ " est de "+ facto);

        }
    }
}
