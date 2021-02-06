#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char lireCaracteres()
{
    char caracteres = 0;
    caracteres = getchar();

    caracteres = toupper(caracteres);

    while(getchar() != '\n');

    return caracteres;
}
