#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - this function checks if the node is the root
 * @node: the pointer to a node
 * Return: 1 if is root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->left && node->right)
	{
		return (1);
	}
	return (0);
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);
}
