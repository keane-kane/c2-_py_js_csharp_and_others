#include "listes.h"

int main()
{
  Listes *liste=initialiser();
  ajoutAuDebut(liste, 45);
  printListe(liste);
  supression(liste);

  free(liste);
    return 0;
}
