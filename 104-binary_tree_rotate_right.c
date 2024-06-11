#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate a pointer to the right
 *
 * @tree: the root of the pointer to be rotated
 * Return: pointer to the node rotatted
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newnode;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	newnode = tree->left;
	tree->left = newnode->right;

	if (newnode->right != NULL)
		newnode->right->parent = tree;

	newnode->right = tree;
	newnode->parent = tree->parent;
	tree->parent = newnode;

	return (newnode);
}
