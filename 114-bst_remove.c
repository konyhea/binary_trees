#include "binary_trees.h"

/**
 * bst_remove - remove a node with a specific value
 * @root: pointer to the root node of the BST
 * @value: the to the removed node
 * Return: pointer to the node after deletion
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);

	else
	{
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		temp = root->right;
		while (temp && temp->left != NULL)
			temp = temp->left;

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
