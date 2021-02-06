#ifndef TREES_H
#define TREES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef enum
{
    true,
    false
}bool;

typedef struct trees
{
    int value;
    struct trees *tleft;
    struct trees *tright;
    struct trees *parent;

} trees;
trees *new_trees(int x);
bool is_empty_trees(trees *tr);
void clean_tree(trees *tr);
trees *join_tree(trees *left, trees *right, int node);
void print_prefix(trees *tr);
int count_node(trees *tr);
#endif // TREES_H

