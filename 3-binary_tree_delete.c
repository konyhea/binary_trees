#include "binary_trees.h"

/**
 * binary_tree_delete - delete thw whole tree
 * @tree: tree to be removed
 *
 * Return (void)
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
