#include "listes.h"


void printListe(Listes *liste)
{
    Element *actuel= liste->pointeur;
    if(actuel == NULL)
        printf("la liste est vide ");

    while(actuel != NULL)
         printf("\n %d",actuel->number);
      actuel = actuel->suivant;

}
/* Initialisation de la liste */

Listes *initialiser()
{
    Listes *liste = malloc(sizeof(*liste));
    Element *nouveau = malloc(sizeof(*nouveau));

    if(liste == NULL || nouveau == NULL)
    {
        fprintf(stderr, "Erreue : d'intialisation");
        exit(EXIT_FAILURE);
    }

    nouveau->number =0;
    nouveau->suivant = NULL;
    liste->pointeur  = nouveau;

  return liste;
}
/* Ajout d'element au debut de la liste  */
 Listes ajoutAuDebut(Listes *liste, int value)
 {


    Element *nouveau = malloc(sizeof(*nouveau));

    if (nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

     nouveau->number = value;

     nouveau->suivant =liste->pointeur;
     liste->pointeur = nouveau;
 }

Listes supression(Listes *liste)
{
    if (liste ==NULL)
        exit(EXIT_FAILURE);

    Element *asuprimer = liste->pointeur;
    liste->pointeur = liste->pointeur->suivant;
    free(asuprimer);

}
