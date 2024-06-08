#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes with 1 or more children
 =* @tree: tree to traverse search
 *
 * Return: Always success
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right));
	return (0);
}
