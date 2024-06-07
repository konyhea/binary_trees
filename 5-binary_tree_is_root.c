#include "binary_trees.h"

/**
 * binary_tree_is_root - is it root
 * @node: node to check it's root status
 *
 * Return: Always (0)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
