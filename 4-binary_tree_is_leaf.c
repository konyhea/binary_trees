#include "binary_trees.h"

/* Do you have any child */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
            return 0;

        if (node->left == NULL &&  node->right == NULL)
           return 1;
        else
            return 0;
}
