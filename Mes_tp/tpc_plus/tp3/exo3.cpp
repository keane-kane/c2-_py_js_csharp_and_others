#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#define tailleX 4
#define tailleY 4
using namespace std ;


  float RealAleatoire( float vecteur[tailleX][tailleY]){
   int  ii = rand()%100;
   int i , j, pos(0);
   float norme(0), normeMax(0);

   for(i = 0 ; i < tailleX  ; i++){
    for(j = 0 ; j < tailleY ; j++){
        vecteur[i][j] = ii;
        cout<<vecteur[i][j]<<" | ";
    }
    cout<<""<<endl;

   }for(i = 0 ; i <tailleX  ; i++){
     for(j = 0 ; j < tailleY ; j++){
        norme += vecteur[i][j];

      if(norme > normeMax){
            normeMax = norme;
            pos = j;
    }}}
   cout<<endl<<"le vecteur numero "<<pos<<" est la plus grand "<<normeMax<<endl;

  }

int main ()
{
  srand(time(NULL));

   float s[][4]={{1,2,5,5},{2,5,7,0}}, p[][4]={{1,2,7,8},{1,5,4,7}};
    RealAleatoire(p);
}
