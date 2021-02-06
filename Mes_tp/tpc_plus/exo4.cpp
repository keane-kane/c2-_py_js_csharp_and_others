//Calcul de la surface et du perimetre
#include <iostream>
using namespace std;

int main()
{
    double larg(0.0), longu(0.0), perimetre(0.0), surface(0.0);

    cout<<"Veillez saisir la longueur et la largeur du rectangle"<<endl;
    cin>>longu>>larg;
    if(larg == 0.0 || longu == 0.0)
        cout<<"Ni la largeur ou la longueur ne peut etre nul"<<endl;

    else
    {
        perimetre = (longu + larg)* 2;
        surface   = longu * larg;

         cout<<"Le perimetre du rectangle est de : "<<perimetre<<" et sa surface vaut : "<<surface<<endl;
    }
}
