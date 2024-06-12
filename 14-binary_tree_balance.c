#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a tree
 * @tree: the node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right ? left : right) + 1);

}

/**
 * binary_tree_balance  - find the tree balance of one of the node
 * @tree: the node of the tree
 *
 * Return: the balanced height factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);


	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((int)(left - right));
}
