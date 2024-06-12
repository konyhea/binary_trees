#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);
	int  h;

	if (tree == NULL)
		return (0);

	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}

	return (h - 1);
}
