#include <iostream>
#include <cmath>
using namespace std;
 //fonction fe calcul de la somme et du produit de dux vecteurs

int Somme(int tab0[], int tab1[],int somme[]  ,int taille){

      int i;

        for(i = 0 ; i < taille; i++){
            somme[i] = tab0[i] + tab1[i];
            cout<<somme[i];
        }
     return 0;

}int ProduitScalaire(int tab0[] ,int tab1[], int prodScalaire[], int taille){

      int i;

        for(i = 0 ; i < taille; i++){
            prodScalaire[i]= tab0[i] * tab1[i];
        }
     return 0;
}
int main(){
    int taille, i;

    cout<<"Donner la taille des vecteur"<<endl;
    cin>>taille;
  int  t[]={2,5,7,5};
   int  n[]={2,5,7,5};
   int p[3];
   for(int i =0 ; i<taille; i++){
    Somme(t,n,p,taille);}


}
