using System;

namespace exercice3{
    interface Iexo3
    {
        bool Equals(object obj);
        int GetHashCode();
        string ToString();
    }

    class exo3 : Iexo3
    {

        static void Main(string[] args)
        {
            Console.WriteLine("Donnez un nombre en bits");
            double nbBits = Int32.Parse(Console.ReadLine());
            double octet = nbBits / 8;
            double ko = nbBits / (8 * 1000);
            double mo = nbBits / (8 * 1000 * 1000);
            double go = mo / 1000;
            Console.WriteLine("Nombre d'octet = " + octet);
            Console.WriteLine("Nombre de ko = " + ko);
            Console.WriteLine("Nombre de mo = " + mo);
            Console.WriteLine("Nombre de go = " + go);



        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override string ToString()
        {
            return base.ToString();
        }
    }
}
