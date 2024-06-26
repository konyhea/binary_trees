#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse in ordelely
 * @tree: the tree to traverse
 * @func: function to check
 *
 * Return: Always Success
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
