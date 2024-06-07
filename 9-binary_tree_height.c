#include "binary_trees.h"

/* Function to find the maximum between two numbers */
size_t max(size_t a, size_t b)
{
    return (a > b) ? a : b;
}


/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return -1;
    }

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return 1 + max(left_height, right_height);
}
