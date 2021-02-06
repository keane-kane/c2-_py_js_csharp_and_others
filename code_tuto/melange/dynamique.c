#include <stdio.h>
#include <stdlib.h>
/*

feof(fichier) test la fin d'un fichier
fopen(nom_fichier , mode)
fclose
[LECTURE]

fgetc(fichier)
fgets(chaine, taille_chaine ,fichier)
fscanf(fichier, format,...)
[ECRITURE]
fputc(caractere, fichier)
fputs(chaine, fichier)
fprintf(fichier, format, ..)
[POSITION]
ftell(fichier) retourne position du curseur dans le fichier
fseek(fichier ,deplacement, origine, ) deplacer le curseur
-->origine {
            SEEK_SET(debut ficher)
            SEEK_CUR(position courant)
            SEEK_END(fin fichier)
}
rewind(fichier) reinitialiser la position
[DIVERS]
rename(ancien_nom,new_nom)
remove(fichier)
*/
int main()
{
int *list_play=NULL;
int nbplay=0;

puts("saisir le nbr player?\n");
scanf("%d",&nbplay);
list_play= malloc(nbplay* sizeof(int));
if(list_play==NULL){
    exit(0);
}
for(int i =0; i< nbplay ;i++)
{
    printf("joueur %d -->%d\n", i+1, (i+1)*3);
    list_play[i]=i+1;
}

for(int i =0; i< nbplay ;i++)
{
    printf("%d |",list_play[i]);
}
nbplay=5;
list_play= realloc(list_play, sizeof(int)*nbplay);
for(int i =0; i< nbplay ;i++)
{
    printf("joueur %d -->%d\n", i+1, (i+1)*3);
    list_play[i]=i+2;
}

for(int i =0; i< nbplay ;i++)
{
    printf("%d |",list_play[i]);
}
free(list_play);
 return 0;
}
