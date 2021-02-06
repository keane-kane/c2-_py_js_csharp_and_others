// Affichage des sinus des angles entre 0 90

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     double long pi = 4* atan(1);
     double long angle(0.0);
     for(double i = 0; i <= 90 ; i = i+15)
     {
         angle = sin(i*pi/180);
         cout<<"Le sinus de l'angle "<<i<<" vaut "<<angle<<endl;;
     }

}
