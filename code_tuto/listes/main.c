#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main(void)
{
    List myList= new_list();
    print_list(myList);

    myList = push_back_list(myList, 35);
    myList = push_back_list(myList, 54);
    myList = push_front_list(myList, 75);
    print_list(myList);

    printf("Nombre d'elements  :%d", list_lenght(myList));

    myList = clear_list(myList);
    print_list(myList);
        printf("Nombre d'elements  :%d", list_lenght(myList));

    return 0;
}
