
#include<iostream>
using namespace std;

class Fraction {
    int num;
    int den;

public:
    Fraction(int n=1, int d=1)
    {
        num=n;
        den=d;
    }

    ~Fraction()
    {
        cout<<"Objet detruit"<<endl;

    }

    //Opérateurs arithmétiques
    friend Fraction operator+(Fraction f1, Fraction f2);
    friend Fraction operator*(Fraction f1, Fraction f2);
    friend Fraction operator-(Fraction f1, Fraction f2);
    friend Fraction operator/(Fraction f1, Fraction f2);


    //Opérateurs de comparaison
    friend bool operator==(Fraction  a, Fraction  b);
    friend bool operator!=(Fraction  a, Fraction  b);
    friend bool operator <(Fraction  a, Fraction  b);
    friend bool operator >(Fraction  a, Fraction  b);
    friend bool operator>=(Fraction  a, Fraction  b);
    friend bool operator<=(Fraction  a, Fraction  b);

     //Méthodes de comparaison
    bool estEgal(Fraction a);
    bool estPlusPetitQue(Fraction a);

    // Simplifie une fraction
    void simplifie();

    //Calcul du pgcd
    int pgcd(int a, int b);

    //afficher une fraction
    void Afficher();

    //saisir une fraction
    void Saisir();

};

/**

Personnage* Personnage::getAdresse() const
{
    return this;
}

Duree& Duree::operator+=(const Duree &duree2)
{
    //Des calculs compliqués…

    return *this;
}
*/

