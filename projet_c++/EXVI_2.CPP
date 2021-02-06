#include <iostream.h>
#include <conio.h>
			     // Classe vecteur
			     // Fonction AMIE permettant de calculer
                             // le déterminant de 2 vecteurs
class vecteur
{float x,y;
public: vecteur(float,float);
 	void affiche();
        friend float det(vecteur, vecteur);
};

vecteur::vecteur(float abs =0.,float ord = 0.)
{x=abs;y=ord;}

void vecteur::affiche()
{cout<<"x = "<<x<<"  y = "<<y<<"\n";}

float det(vecteur a, vecteur b)    // la fonction AMIE peut manipuler
{                       // les quantités b.x, b.y, a.x, a.y
float res;
res = a.x * b.y - a.y * b.x;
return res;
}

void main()
{vecteur u(2,6),v(4,8);
u.affiche(); v.affiche();
cout <<"Determinant de (u,v) = "<<det(u,v)<<"\n";
cout <<"Determinant de (v,u) = "<<det(v,u)<<"\n";
getch();}