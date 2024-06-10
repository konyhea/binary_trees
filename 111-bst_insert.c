#include "binary_trees.h"
#include <stdlib.h>

/**
 * bst_create_node - create new node for tree
 * @parent: parent of the new node
 * @value: data value attached to the node
 *
 * Return: root of node created
 */
bst_t *bst_create_node(bst_t *parent, int value)
{
	bst_t *newnode = malloc(sizeof(bst_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

/**
 * bst_insert - insert node to a bst
 * @tree: double pointer to the node
 * @value: value added to the node
 *
 * Return: return node on success or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = *tree;
	bst_t *parent = NULL;
	bst_t *newnode;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = bst_create_node(NULL, value);
		return (*tree);
	}

	while (current != NULL)
	{
		parent = current;
		if (value < current->n)
		{
			current = current->left;
		}
		else if (value > current->n)
		{
			current = current->right;
		}
		else
		{
			return (NULL);
		}
	}
	newnode = bst_create_node(parent, value);

	if (value < parent->n)
	{
		parent->left = newnode;
	}
	else
	{
		parent->right = newnode;
	}

	return (newnode);
}
