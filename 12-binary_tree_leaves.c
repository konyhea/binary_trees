#include "binary_trees.h"

/* Function to count the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;  // Return 0 if the tree is NULL
    }

    if (tree->left == NULL && tree->right == NULL) {
        return 1;  // Return 1 if the node is a leaf
    }

    // Recursively count the leaves in the left and right subtrees
    return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
