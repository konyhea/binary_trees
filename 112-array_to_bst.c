#include "binary_trees.h"

/**
 * array_to_bst - BST from an array
 * @array: the array BST is being bulit from
 * @size: the size of the array
 *
 * Return: return pointer to the root node created
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (array  == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
