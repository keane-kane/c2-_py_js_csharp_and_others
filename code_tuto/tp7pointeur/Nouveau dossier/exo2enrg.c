#include<stdio.h>
#include<string.h>
#define N 50
 enum Etatcivil{
 M,
 C

 };
struct employe {

  int matricule;
  char nom[30];
  float salaire;
  enum Etatcivil etcivil;
  };
 int main(){

 int i;
 struct employe tab[2];

  for(i = 0; i<2 ; i++){
    printf("saisir le matricule\n");
        scanf("%d" ,&tab[i].matricule);
    printf("saisir le nom\n");
        scanf("%s" ,&tab[i].nom);
    printf("saisir la salaire\n");
        scanf("%i" ,&tab[i].salaire);
    printf("saisir l'etat civil\n");
        scanf("%s" ,&tab[i].etcivil);
 }
 printf("%f",tab[i]salaire);
 }
