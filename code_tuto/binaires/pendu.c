#include "trees.h"
 int main()
 {
   trees *arbre=join_tree(join_tree(new_trees(2), new_trees(4),6),new_trees(3),5);

    print_prefix(arbre);
    printf("Nombre de nodes est %d\n", count_node(arbre));
    clean_tree(arbre);


     return 0;
 }
