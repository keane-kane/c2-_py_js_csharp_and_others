#include<iostream>
using namespace std;
/*

#include <iostream>
#include <string>

using namespace std;

class Point {

 int y, x;
 public:
     Point(int a, int b):x(a),y(b)
     {

     }
     void Afficher(Point A)
    {
        cout << "(" << A.x <<","<< A.y <<")"<< endl;
    }
};

class PointCouleur: public Point{
    string couleur;

Magicien::Magicien(string nom) : Personnage(nom), m_mana(100)
{

}
    void setCouleur(string cl)
    {
        couleur = cl;
    }
};

int main()
{
    Point a(10,2);
    PointCouleur b("ggg");
    Afficher(a);
    Afficher(b);
    cout<<"ok";
}

*/
class Point {
protected:
int x;
int y;
public:
void initialiser (int a , int b)
{ x=a;
  y=b;
}

void afficher()
{cout<<"X:"<<x<<endl;
 cout<<"Y:"<<y<<endl;
}

};

class Pointcolor: public Point {
     int couleur;
public:
void setcolor(int c)
{ couleur=c ; }
void affichercolor()
{

cout<<"X:"<<x<<endl;
 cout<<"Y:"<<y<<endl;
    afficher();

    cout<<"le code couleur est :"<<couleur<<endl;

}
 };
int  main()
{ Pointcolor p ;
p.initialiser (20,40) ;
p.setcolor(90) ;
p.afficher() ;
p.affichercolor();
return 0;
}
