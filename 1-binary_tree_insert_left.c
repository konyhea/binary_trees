#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_t *binary_tree_insert_left  - function to add to left of a node
 * @parent: the node adding to the left
 * @value: the data value in the left node
 *
 * Return: 0 (success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newnode;

	parent->left = newnode;

	return (newnode);
}
