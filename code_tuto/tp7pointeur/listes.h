#ifndef __LISTES__H__
#define  __LISTES__H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Element
{
    int number;
   struct Element *suivant;
}Element;


  typedef struct Listes
  {
      Element *pointeur;
  }Listes;

Listes ajoutAuDebut(Listes *liste, int value);
Listes supression(Listes *liste);
Listes *initialiser();
void printListe(Listes *liste);
#endif
