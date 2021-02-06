#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"
 Dlist new_dlist(void){

  return NULL;
 }
 /*------------------------------------------------*/
  bool is_empty_dlist(Dlist li)
  {
      if(li == NULL)
        return true;

     return false;
  }

  /*------------------------------------------------*/
  int dlist_length(Dlist li)
  {
      if(is_empty_dlist(li))
        return 0;

      return li->length;
  }
  /*------------------------------------------------*/
  int dlist_first(Dlist li)
    {
        if(is_empty_dlist(li))
            exit(1);
        return li->begin->value;
    }
  /*------------------------------------------------*/
   int dlist_last(Dlist li)
    {
        if(is_empty_dlist(li))
            exit(1);
        return li->end->value;
    }
  /*------------------------------------------------*/

  void print_dlist(Dlist li)
  {
      if(is_empty_dlist(li))
      {
        printf("Rien a afficher, la liste est vide.");
        return ;
      }
      DlistNode *temp = li->begin;

      while(temp != NULL)
      {
          printf("[%d]",temp->value);
          temp = temp->next;
      }

       printf("\n");
        return ;
  }
  /*------------------------------------------------*/
  Dlist push_back_dlist(Dlist li, int x)
  {
      DlistNode *element;
      element = malloc(sizeof(*element));
      if(element==NULL)
      {
          fprintf(stderr, "Erreur: allocation dynamique.\n");
          exit(EXIT_FAILURE);
      }
      element->value = x;
      element->back = NULL;
      element->next = NULL;
      if(is_empty_dlist(li))
      {

      li = malloc(sizeof(*li));

      if(li==NULL)
      {
          fprintf(stderr, "Erreur: allocation dynamique.\n");
          exit(EXIT_FAILURE);
      }

          li->length = 0;
          li->begin = element;
          li->end = element;

    }
    else
    {
        li->end->next = element;
        element->back = li->end;
        li->end = element;
    }
    li->length++;

    return li;
}
  /*------------------------------------------------*/
    Dlist push_front_dlist(Dlist li, int x)
  {
      DlistNode *element;
      element = malloc(sizeof(*element));
      if(element==NULL)
      {
          fprintf(stderr, "Erreur: allocation dynamique.\n");
          exit(EXIT_FAILURE);
      }
      element->value = x;
      element->back = NULL;
      element->next = NULL;
      if(is_empty_dlist(li))
      {

      li = malloc(sizeof(*li));

      if(li==NULL)
      {
          fprintf(stderr, "Erreur: allocation dynamique.\n");
          exit(EXIT_FAILURE);
      }

          li->length = 0;
          li->begin = element;
          li->end = element;
    }
    else
    {
        li->begin->back = element;
        element->next = li->begin;
        li->begin = element;
    }
    li->length++;

    return li;
  }
  /*------------------------------------------------*/
Dlist pop_back_dlist(Dlist li)
{
    if(is_empty_dlist(li))
    {
        printf("Rien n'a supprimer, la liste est vide\n");
        return new_dlist();
    }
    if(li->begin == li->end)
    {
        free(li);
        li = NULL;

        return new_dlist();
    }

    DlistNode *temp = li->end;

    li->end = li->end->back;
    li->end->next = NULL;
    temp->next = NULL;
    temp->back = NULL;

    free(temp);
    temp = NULL;

    li->length--;

    return li;
}

  /*------------------------------------------------*/
  Dlist pop_front_dlist(Dlist li)
{
    if(is_empty_dlist(li))
    {
        printf("Rien n'a supprimer, la liste est vide\n");
        return new_dlist();
    }
    if(li->begin == li->end)
    {
        free(li);
        li = NULL;

        return new_dlist();
    }

    DlistNode *temp = li->begin;

    li->begin = li->begin->next;
    li->begin->next = NULL;
    temp->next = NULL;
    temp->back = NULL;

    free(temp);
    temp = NULL;

    li->length--;

    return li;
}
  /*------------------------------------------------*/
  Dlist clear_list(Dlist li)
  {
      while(!is_empty_dlist(li))
        li = pop_back_dlist(li);

      return new_dlist();
  }
  /*------------------------------------------------*/
  /*------------------------------------------------*/
  /*------------------------------------------------*/
  /*------------------------------------------------*/
