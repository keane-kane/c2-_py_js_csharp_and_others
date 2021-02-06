#include <stdio.h>
#include <string.h>

#define N 100
 struct fiche_FP{
 int matricule ;
 char nom[25];
 char grade[30];
 float salaire;
 };
int main(){
int n,mat, i;
struct fiche_FP tab[n];

printf("saisir la taille du tableau\n");
scanf("%d" ,&n);

 for(i = 0; i<n ; i++){
    printf("saisir le matricule\n");
        scanf("%d" ,&tab[i].matricule);
    printf("saisir le nom\n");
        scanf("%s" ,&tab[i].nom);
    printf("saisir le grade\n");
        scanf("%s" ,&tab[i].grade);
    printf("saisir la salaire\n");
        scanf("%i" ,&tab[i].salaire);

 }
 printf("les salaire sont\n");

 for(i = 0 ;i <n; i++){

    if(tab[i].salaire>500 &&tab[i].salaire<=800)
     printf("%s \n",tab[i].nom);


 }
 mat=0;
 printf("saisir le matricule a chercher \n");
 scanf("%d",&mat);
 while(n>i){
    i++;
    if(mat==tab[i].matricule)
        printf("le matricule est celui de%s \n:",tab[i].nom);

 }
}
