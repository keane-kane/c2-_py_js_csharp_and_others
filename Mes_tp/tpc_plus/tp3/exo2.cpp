
#include <iostream>
#include <cmath>
#define tailleY 4
using namespace std;

 //fonction fe calcul de la somme et du produit de deux matrices

int somProduitS(int tab0[][tailleY], int tab1[][tailleY]){

      int somme(0) , prodScalaire(0), i ,j;

      for(i = 0; i < 2 ; i++){
        for(j = 0 ; j <= tailleY; j++){
            somme += tab0[i][j] + tab1[i][j];
            prodScalaire += tab0[i][j] * tab1[i][j];
        }
      }
    cout<<"la somme des deux vecteur est de :"<<somme<<" et son produit est de :"<<prodScalaire<<endl;

    return 0;
}
int main (){
   int  s[][4]={{1,2,5,5},{2,5,7,0}}, p[][4]={{1,2,7,8},{1,5,4,7}};
    somProduitS(s,p);
}
