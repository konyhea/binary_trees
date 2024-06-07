#include "binary_trees.h"
#include <stdlib.h>

/* Function to find the maximum between two numbers */
int max(int a, int b)
{
    return (a > b) ? a : b;
}

/* Function to measure the height of a binary tree */
int maxHeight(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return -1;
    }

    int lf = maxHeight(tree->left);
    int rh = maxHeight(tree->right);

    return 1 + max(lf, rh);
}

/* Function to check if a binary tree is complete */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0;
    }

    /* Level-order traversal using a queue */
    const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);
    int front = 0, rear = 0;
    int flag = 0;

    queue[rear++] = tree;

    while (front < rear)
    {
        const binary_tree_t *current = queue[front++];

        if (current->left)
        {
            if (flag)
            {
                free(queue);
                return 0;
            }
            queue[rear++] = current->left;
        }
        else
        {
            flag = 1;
        }
         if (current->right)
        {
            if (flag)
            {
                free(queue);
                return 0;
            }
            queue[rear++] = current->right;
        }
        else
        {
            flag = 1;
        }
    }

    free(queue);
    return 1;
}