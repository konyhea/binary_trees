#include "binary_trees.h"

/* Function to check if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0; // Return 0 if the tree is NULL
    }

    // If the node is a leaf, it is full
    if (tree->left == NULL && tree->right == NULL)
    {
        return 1;
    }

    // If both left and right children are present, check if both subtrees are full
    if (tree->left != NULL && tree->right != NULL)
    {
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    }

    // If one child is missing, the tree is not full
    return 0;
}
