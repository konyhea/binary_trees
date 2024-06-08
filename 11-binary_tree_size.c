#include "binary_trees.h"
/**
 * binary_tree_size - return size of a binary tree
 * @tree: tre to be calculated
 *
 *
 * Return: Always 0
 */
/* Function to measure the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right)));
}
