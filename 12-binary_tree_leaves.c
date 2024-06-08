#include "binary_trees.h"

/**
 * binary_tree_leaves - func to count number of leaves in a tree
 * @tree: tree to be travered
 *
 * Return: Always 0 (success)
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
