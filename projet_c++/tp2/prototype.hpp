#include <iostream>
#include "point.hpp"
#include "Vector2d.hpp"
#include "fraction.hpp"

using namespace std;

/**
 ============================================================
 la redefinition des fonctions de la classe Ponit
 ============================================================
*/
    void Afficher(Point A)
    {
        cout << "(" << A.x <<","<< A.y <<")"<< endl;
    }
   Point MidlePoint(Point p, Point o)
    {
    	Point m;
        m.x = (o.x + p.x) / 2;
        m.y = (o.y + p.y) / 2;
        return m;
    }
    float Distance(Point p, Point o)
    {
        return sqrt(pow(o.x - p.x , 2) + pow(o.y - p.y , 2));
    }


/**
 ============================================================
 la redefinition des fonctions de la classe Vector2d
 ============================================================
*/
    Vector2d::Vector2d(float  abs, float ord)
    {
       x = abs;
       y = ord;
    }
    Vector2d operator+(Vector2d A, Vector2d B)
    {
        Vector2d C;
        C.x = A.x + B.x;
        C.y = A.y + B.y;
        return C;
    }
    Vector2d operator-(Vector2d A, Vector2d B)
    {
        Vector2d C;
        C.x = A.x - B.x;
        C.y = A.y - B.y;
        return C;
    }
    float operator*(Vector2d A, Vector2d B)
    {
        return   A.x * B.x + A.y * B.y;
    }

    void Vector2d::Afficher()
    {
        cout << "(" << x <<","<< y <<")"<< endl;
    }
    Vector2d Saisir(Vector2d p)
    {
        float x, y;
        cout << "Saisir les coordonnees du vecteur2d"<< endl;
        cin>>x;
         p.x = x;
        cin>>y; p.y = y;
        return p;
    }

    Vector2d operator+=(Vector2d A, Vector2d B)
    {
         A.x += B.x;
         A.y += B.y;
        return A;
    }

    Vector2d operator-=(Vector2d A, Vector2d B)
    {
         A.x -= B.x;
         A.y -= B.y;
        return A;
    }

    Vector2d operator*=(Vector2d A, Vector2d B)
    {
         A.x *= B.x;
         A.y += B.y;
        return A;
    }

    Vector2d operator*(float A, Vector2d B)
    {
         Vector2d D;
         D.x = A * B.x;
         D.y = A * B.y;
        return D;
    }
/**
 ============================================================
 la redefinition des fonctions de la classe Fraction
 ============================================================
*/
//Implementation des opérateurs arithmetiques
Fraction operator+(Fraction f1, Fraction f2)
{
     Fraction r;
     r.num= f1.num*f2.den+f1.den*f2.num;
     r.den=f1.den*f2.den;
     return r;
}
Fraction operator-(Fraction f1, Fraction f2)
{
     Fraction r;
     r.num= f1.num*f2.den-f1.den*f2.num;
     r.den=f1.den*f2.den;
     return r;
}
Fraction operator*(Fraction f1, Fraction f2)
{
     Fraction r;
     r.num= f1.num*f2.den;
     r.den=f1.den*f2.den;
     return r;
}
Fraction operator/(Fraction f1, Fraction f2)
{
     Fraction r;
     r.num= f1.num*f2.den;
     r.den=f1.den*f2.num;
     return r;
}
//afficher
void Fraction::Afficher()
{
    cout<<num<<"/"<<den<<endl;
}
//saisir une fraction
void Fraction::Saisir()
{
    cout<<"Saisir le numerateur de la fraction :"<<endl;
    cin>>num;
    do {
        cout<<"Saisir le denominateur de la fraction :"<<endl;
        cin>>den;
    }while(den ==0);

}

//Calcul du pgcd
int Fraction::pgcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
//Simplification
void Fraction::simplifie()
{
    int nombre=pgcd(num, den); //Calcul du pgcd

    num /= nombre;     //Et on simplifie
    den /= nombre;
}

//Méthodes de comparaison
bool Fraction::estEgal(Fraction a)
{
    if(num == a.num && den == a.den)
        return true;
    else
        return false;
}

bool Fraction::estPlusPetitQue(Fraction a)
{
    if(num * a.num  <  den * a.den)
        return true;
    else
        return false;
}

bool operator==(Fraction a, Fraction b)
{
    if(a.estEgal(b))
        return true;
    else
        return false;
}

bool operator!=(Fraction a, Fraction b)
{
    if(a.estEgal(b))
        return false;
    else
        return true;
}

bool operator<(Fraction a, Fraction b) //Vrai si a<b donc si a est plus petit que a
{
    if(a.estPlusPetitQue(b))
        return true;
    else
        return false;
}

bool operator>(Fraction a, Fraction b) //Vrai si a>b donc si b est plus petit que a
{
    if(b.estPlusPetitQue(a))
        return true;
    else
        return false;
}

bool operator<=(Fraction a, Fraction b) //Vrai si a<=b donc si b n'est pas plus petit que a
{
    if(b.estPlusPetitQue(a))
        return false;
    else
        return true;
}

bool operator>=(Fraction a, Fraction b) //Vrai si a>=b donc si a n'est pas plus petit que b
{
    if(a.estPlusPetitQue(b))
        return false;
    else
        return true;
}


