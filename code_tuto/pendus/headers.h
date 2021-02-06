#ifndef __HEADERS__H__
#define __HEADERS__H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
char lireCaracteres();
int gagne(int lettreTrouver[],long tailleMot);
int rechercheLettre(char lettre, char motSecret[], int lettreTrouver[]);
int piocheMot(char *motPioche);
int nombreAleatoire(int nombreMax);
#endif  // HEADERS_H

