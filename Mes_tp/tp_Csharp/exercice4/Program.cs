using System;

namespace exercice4 {
class Program {

          static void Main(string[] args)
          {
            Console.WriteLine("Donnez un nombre en bits");
            var nbBits = Int32.Parse(Console.ReadLine());
            double octet = nbBits/8;
            double ko =    nbBits/(8*1000);
            double mo =    nbBits/(8*1000*1000);
            double go =    mo/1000;
            Console.WriteLine("Nombre d'octet = " +octet);
            Console.WriteLine("Nombre de ko = "+ ko);
            Console.WriteLine("Nombre de mo = "+ mo);
            Console.WriteLine("Nombre de go = "+ go);



    }
}
}

