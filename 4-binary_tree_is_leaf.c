#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this function check is the node is a leaf
 * @node: the pointer to the node
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->left && !node->right)
	{
		return (1);
	}
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	return (0);
}
