#include "binary_trees.h"

/* Function to measure the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0; // Return 0 if the tree is NULL
    }

    // Return the size of the tree, which is 1 (for the current node) plus the sizes of left and right subtrees
    return 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
}
