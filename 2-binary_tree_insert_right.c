#include "binary_trees.h"

/**
 * *binary_tree_insert_right - insert to the right
 * @parent: the root of the node
 * @value: data to be added to the right
 *
 * Return: Always success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newnode;
	parent->right = newnode;

	return (newnode);
}
