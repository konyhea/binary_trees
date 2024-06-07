#include "binary_trees.h"

/* function to inserts a node as the right child */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        if (parent == NULL)
        {
                return NULL;
        }

        binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
        if (newnode == NULL)
                return NULL;

        newnode->n = value;
        newnode->parent = parent;
        newnode->left = NULL;
        newnode->right = parent->right;

        if (parent->right != NULL)
                parent->right->parent = newnode;

        parent->right = newnode;
        return newnode;
}
