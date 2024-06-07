#include "binary_trees.h"
#include <stdlib.h>

/* function to insert a left node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
   	newnode->n = value;
    newnode->parent = parent;
    newnode->left = parent->left; // The old left child becomes the left child of the new node
    newnode->right = NULL;

    if (parent->left != NULL)
        parent->left->parent = newnode; // Update the parent of the old left child

    parent->left = newnode; // The new node becomes the left child of the parent

    return (newnode;
}
