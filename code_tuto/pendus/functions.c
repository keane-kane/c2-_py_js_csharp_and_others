#include "headers.h"

char lireCaracteres()
{
    char caracteres = 0;
    caracteres = getchar();

    caracteres = toupper(caracteres);

    while(getchar() != '\n');

    return caracteres;
}
int gagne(int lettreTrouver[],long tailleMot)
{
    int i = 0;
    int joueurGagne = 1;

    for(i = 0; i < tailleMot ; i++)
    {
        if(lettreTrouver[i]== 0)
            joueurGagne = 0;
    }
    return joueurGagne;
}
int rechercheLettre(char lettre, char motSecret[], int lettreTrouver[])
{
    int i = 0 ;
    int bonneLettre = 0;
     for(i = 0; motSecret[i] != '\0'; i++)
     {
         if (lettre == motSecret[i])
         {
             bonneLettre= 1 ;
             lettreTrouver[i] = 1;

         }
     }
     return bonneLettre;
}
int piocheMot(char *motPioche)
{
    FILE *dico =NULL;
    int nombreMots = 0, numMotChoisi = 0 , i = 0;
    int caracterLu = 0;

    dico = fopen("dico.txt" , "r");
    if(dico ==NULL)
    {
        printf("\nImpossible de charger le dictionnaire des mots");
        return 0;

    }
    do
    {
        caracterLu = fgetc(dico);
        if(caracterLu == '\n')
            nombreMots++;

    }while(caracterLu != EOF);

    numMotChoisi = nombreAleatoire(nombreMots);

    rewind(dico);
    while(numMotChoisi >0)
    {
        caracterLu = fgetc(dico);
        if(caracterLu == '\n')
            numMotChoisi--;
    }
    fgets(motPioche, 100, dico);

    motPioche[strlen(motPioche) -1] = '\0';

    fclose(dico);
    return 1;
}
int nombreAleatoire(int nombreMax)
{
    srand(time(NULL));
    return (rand() % nombreMax);
}
