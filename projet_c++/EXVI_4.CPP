#include <iostream.h>	//Surdéfinition de l'opérateur ==
#include <conio.h>
class point
{
int x,y;
public:
point(int abs=0,int ord=0){x=abs;y=ord;}
friend int operator==(point,point); //declaration de la fonction amie
};

int operator==(point p,point q)
{if((p.x==q.x)&&(p.y==q.y))return 1;else return 0;}

void main()
{
point a(4,0),b(4),c;
if(a==b)cout<<"a coincide avec b\n";
else cout<<"a est different de b\n";
if(a==c)cout<<"a coincide avec c\n";
else cout<<"a est different de c\n";
getch();}

