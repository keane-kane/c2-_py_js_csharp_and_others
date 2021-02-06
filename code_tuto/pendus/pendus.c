#include "headers.h"
int main(int argc, char *argv[])
{
  char lettre = 0;
  char motSecret[100] = {0};
  int  *lettreTrouver = NULL;
  int  coupRestant =10;
  long  i = 0;
  long tailleMot = 0;
  printf("Bienvenu dans le pendu!\n\n");

  if(!piocheMot(motSecret))
    exit(0);

  tailleMot= strlen(motSecret);

   lettreTrouver = malloc(tailleMot * sizeof(int));
   if (lettreTrouver == NULL)
    exit(0);
   for(i = 0 ; i < tailleMot ; i++)
   {
       lettreTrouver[i] = 0;
   }

  while(coupRestant>0 && !gagne(lettreTrouver, tailleMot))
  {
      printf("Il vous reste %d coups a jouer\n" , coupRestant);
      printf("Quel est le mot secret!\n");

      for(i = 0 ; i < tailleMot ; i++)
      {
          if (lettreTrouver[i])
            printf("%c", motSecret[i]);
          else
            printf("*");
      }
        printf("\nProposer une lettre!\n");
        lettre = lireCaracteres();

        if(!rechercheLettre(lettre,  motSecret, lettreTrouver))
        {
            coupRestant--;
        }
  }
     if(gagne(lettreTrouver, tailleMot))
        printf("\n\nGagne ! Le mot secret etait bien : %s",motSecret);
    else
        printf("\n\nPerdu ! Le mot secret etait : %s",motSecret);

  free(lettreTrouver);

 return 0;
}
