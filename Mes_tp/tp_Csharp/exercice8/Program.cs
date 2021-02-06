using System;

namespace exercice8
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, j = 2;
            Console.WriteLine("Donnez un nombre entier ");
            int nombre = Int32.Parse(Console.ReadLine());

            for(i = 2 ; i <= nombre ; i++){

                int n =i;

                 while((n%j!=0) && (j<=n/2)){
                    j++;
                    if(j<=n/2){
                        Console.WriteLine(n);
                    }
                   }
            }
        }
    }
}


