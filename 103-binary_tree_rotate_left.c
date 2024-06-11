#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate node to the left
 * @tree: root of the node to roate
 * Return: pointer to the newnode rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newnode;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	newnode = tree->right;
	tree->right = newnode->left;

	if (newnode->left != NULL)
		newnode->left->parent = tree;
	newnode->left = tree;
	newnode->parent = tree->parent;
	tree->parent = newnode;

	return (newnode);
}
