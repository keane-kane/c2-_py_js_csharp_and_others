#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"
int main(void)
{
    Dlist mylist = new_dlist();

    if(is_empty_dlist(mylist))
        printf("liste vide\n");
    else
        printf("la n'est pas vide\n");

    printf("la taille de la liste est de :%d\n",dlist_length(mylist));

   print_dlist(mylist);
    return 0;
}
