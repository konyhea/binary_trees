#include "binary_trees.h"

/* Function to count nodes with at least one child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0; // Return 0 if the tree is NULL
    }

    // If the current node has at least one child, return 1 + nodes in left subtree + nodes in right subtree
    if (tree->left != NULL || tree->right != NULL)
    {
        return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    }

    return 0; // Return 0 if the current node has no children
}