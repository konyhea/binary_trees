#include "binary_trees.h"
/**
 * bst_search - search for value in the node
 * @tree: the tree of the node to search
 * @value: the being searched for
 *
 * Return: return node of the node found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)(tree));
	else if (value < tree->n)
	{
		return (bst_search(tree->left, value));
	}
	else
	{
		return (bst_search(tree->right, value));
	}
}
