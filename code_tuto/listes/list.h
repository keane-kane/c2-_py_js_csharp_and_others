#ifndef __LIST__H__
#define __LIST__H__
 typedef enum{
   false,
   true

}bool;

typedef struct listElement
{
    int value;
    struct listElement *next;

} listElement, *List;

List new_list(void);
bool is_empty_list(List li);
int list_lenght(List li);
void print_list(List li);
List push_back_list(List li , int x);
List push_front_list(List li , int x);
List pop_back_list(List li);
List pop_front_list(List li);
List clear_list(List li);
#endif // LIST_H
