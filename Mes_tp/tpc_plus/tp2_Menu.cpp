#include<iostream>
#include<math.h>
#include <conio.h>
using namespace std;

//fonction du calcul de la suite de fibonacci
    int Fibonacci(int n_ieme)
    {
    int  Fn(2), F0(1), F1(1);
      for(int i = 2; i< n_ieme; i++)
        {
        F0 = F1;
        F1 = Fn;
        Fn = F1+F0;
        }
         return Fn;
    }


// fonction de calcul du PGCD

    int PGDC(int a, int b) {
     int r(0);
      while ( b!= 0)
       {
         r=a%b;
         a = b;
         b =r;
       }
     return a;
 }

//fonction du calcul de puissance de deux nombres
// de deux maniere differentes

//premierement
float puissance(float x, float y)
{
    if(y == 0)
        return 1;

    float puis = pow(x,y);
    return puis;
}
//euxiement
float puissance(float x, int n)
{
    if(n == 0)
        return 1;

    return (x*puissance(x,n-1));
}

//fonction de saisie et de calcul exo4
void saisie(float &aa, float &bb, float &cc)
{
    cin>>aa>>bb>>cc;
}
void calcul(float aa, float bb, float cc)
{
  float calcul = aa +bb +cc;

  cout<<calcul<<endl;
}

// fonction main

int main(){
	int  choixMenuTP2, repMenuTp2=0;

	do{
    int choixMenuTP2;
    cout<<"-------------------------"<<endl;
    cout<<"---------MENU TD2--------"<<endl;
    cout<<"1. ----> Suite Fibonacci"<<endl;
    cout<<"2. ----> PGCD de deux nombres"<<endl;
    cout<<"3. ----> Puissance de deux nombres"<<endl;
    cout<<"4. ----> Saisie et Calcul"<<endl;
    cout<<"0. ----> Quitter le TD 1"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Faire votre choix : ";
    cin>>choixMenuTP2;

	switch(choixMenuTP2){
	case 1:{
	    int n;
	     cout<<"Saisir le terme: ";
	     cin>>n;
	     cout<<"f("<<n<<")="<<Fibonacci(n)<<endl;
	     } break;

   case 2:{ int a(0),b(0);
        cout<<"Calcal du PGCD DE 2 NOMNRES"<<endl;;
        cout<<"saisir le premier entier"<<endl;
        cin>>a;
        cout<<"saisir le second entier"<<endl;
        cin>>b;
        cout<<"Le PGCD VAUT: "<<PGDC(a,b)<<endl;
        } break;

   case 3:{ float x ,y;
        cout<<"Calcul de puissance de deux nombres"<<endl;
        cout<<"Saisir les deux nombres: "<<endl;
        cin>>x>>y;
        cout<<x<< " a la puisance: "<<y<<" est de "<<puissance(x,y)<<endl;
      } break;

   case 4:{  float a,b ,c;
        cout<<"Saisir les trois nombres"<<endl;
        saisie(a,b,c);
        calcul(a,b,c);
       } break;

	}
  cout<<"voulez vous continuer?  ";
  cin>>repMenuTp2;
	} while(repMenuTp2!=5);

	return 0;
}
