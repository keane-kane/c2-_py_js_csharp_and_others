#include <stdio.h>
int main(){

int tab[]={10,0,8,5,1};
char nom[10];
  int echange;
int i ,cpt=0;
//printf("saisir le nom a suprimer\n");
//scanf("%s",nom);
do { echange=0;
    for(i=0;i<5;i++){
    if(tab[i]>tab[i+1])
        echange= 1;
    cpt=tab[i];
    tab[i]=tab[i+1];
    tab[i+1]=cpt;
    }}while(!echange)


 //  for(cpt=0;cpt<5;cpt++){
   // tab[cpt]==tab[cpt+1];
   // }

//tab[5]="";

}
