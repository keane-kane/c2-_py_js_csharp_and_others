#include <iostream>
using namespace std;
int main(){
int tab[] = {-25, -6, 8, 12, 38, 50, 72, 81, 98};
int * p = tab;
//Quelles valeurs ou adresses fournissent les expressions suivantes ?
*p+2; //contient la valeur -23
double compte=  &tab[7]-p;
p+2;  //la variable p point sur a valeur de tab[2] (sur la valeur 8)
 *(p+2); // contient la valeur 8 de tab
 &p; // contient l'adresse de la variable -25 du de tab
 &tab[4] - 3;//contient l'adresse de la variable tab[4] -3
  tab+3;// conteint la valeur 22
 &tab[7] - p; //contien la valeur 7
 *(p+8) - tab[7];// contient la valeyr 17 de (98-81)
  cout<<compte;
}
