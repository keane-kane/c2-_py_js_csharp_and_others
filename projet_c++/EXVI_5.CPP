#include <iostream.h>
#include <conio.h>

class vecteur
{float x,y;
public: vecteur(float,float);
	void affiche();
	vecteur operator+(vecteur);   // surdefinition de l'operateur +
	float operator*(vecteur);     // surdefinition de l'operateur
				      // produit scalaire
	vecteur operator*(float);     // surdefinition de l'homotethie
 	friend vecteur operator*(float,vecteur);//surdefinition de l'homotethie
};

vecteur::vecteur(float abs =0,float ord = 0)
{x=abs;y=ord;}

void vecteur::affiche()
{cout<<"x = "<<x<<"  y = "<<y<<"\n";}

vecteur vecteur::operator+(vecteur v)
{vecteur res; res.x = v.x + x; res.y = v.y + y; return res;}

float vecteur::operator*(vecteur v)
{float res;res = v.x * x + v.y * y;return res;}

vecteur vecteur::operator*(float f)
{vecteur res; res.x = f*x;   res.y = f*y;  return res;}

vecteur operator*(float f, vecteur v)
{vecteur res; res.x = f*v.x;   res.y = f*v.y;  return res;}

void main()
{vecteur a(2,6),b(4,8),c,d;
float p,h=2.0;
p = a * b;
cout<<p<<"\n";
c =  h * a;
c.affiche();
d =  a * h;
d.affiche();
getch();}

