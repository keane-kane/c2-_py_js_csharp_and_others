#include "trees.h"
trees *new_trees(int x)
{
    trees *tr = malloc(sizeof(*tr));

    if(tr==NULL)
    {
        fprintf(stderr, "Erreur allocation dynamique \n");
        exit(EXIT_FAILURE);
    }
    tr->value = x;
    tr->tleft = NULL;
    tr->tright =NULL;
    tr->parent = NULL;

     printf("Creation de %d\n", tr->value);

    return tr;
}
void clean_tree(trees *tr)
{
    if(tr == NULL)
        return;
    printf("Suppression de %d\n",tr->value);

     clean_tree(tr->tleft);
     clean_tree(tr->tright);

     free(tr);
}


trees *join_tree(trees *left, trees *right, int node)
{
    trees *tr = new_trees(node);
    tr->tleft = left;
    tr->tright = right;

    if (left != NULL)
        left->parent = tr;
    if (right != NULL)
        right->parent = tr;
    return tr;
}
void print_prefix(trees *tr)
{
    if(tr == NULL)
        return;
    if(tr->parent != NULL)
        printf("(%d)-->%d\n",tr->parent->value, tr->value);
    else
        printf("(%d)\n", tr->value);

    if(tr->tleft != NULL)
        print_prefix(tr->tleft);

    if(tr->tright != NULL)
        print_prefix(tr->tright);

}
int count_node(trees *tr)
{
    if (tr ==NULL)
        return 0;

        return (count_node(tr->tleft)+count_node(tr->tright)+1);
}

bool is_empty_trees(trees *tr)
{
    if(tr == NULL)
        return true;

    return false;
}
