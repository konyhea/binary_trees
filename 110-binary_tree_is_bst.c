#include "binary_trees.h"

/**
 * subtreelesser - check if all values are lesser than
 * @tree: pointer to the root node of the sutree
 * @value: data value to compare
 *
 * Return: 1 if True or 0 if False
 */

int subtreelesser(const binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (1);
	if (tree->n >= value)
		return (0);
	return (subtreelesser(tree->left, value) &&
		subtreelesser(tree->right, value));
}


/**
 * subtreegreater - check if all values are greater than
 * @tree:pointer to the root node of the sutree
 * @value: data value to compare
 *
 * Return: 1 if True or 0 if False
 */

int subtreegreater(const binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= value)
		return (0);
	return (subtreegreater(tree->left, value) &&
		subtreegreater(tree->right, value));
}

/**
 * binary_tree_is_bst - checks if binary tree is valid BST
 * @tree: pointer to the root node of the poointer
 * Return: 1 if valid 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL || subtreelesser(tree->left, tree->n)) &&
		(tree->right == NULL || subtreegreater(tree->right, tree->n)) &&
		(tree->left == NULL || binary_tree_is_bst(tree->left)) &&
		(tree->right == NULL || binary_tree_is_bst(tree->right)))
		return (1);

	return (0);
}
