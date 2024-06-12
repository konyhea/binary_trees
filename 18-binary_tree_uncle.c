#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: the node to start finding from
 * Return: the node found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == parent)
		{
			return (grandparent->right);
		}

		else if (grandparent->right == parent)
		{
			return (grandparent->left);
		}
	}

	return (NULL);
}
