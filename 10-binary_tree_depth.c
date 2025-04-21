#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - this function traverses and checks how deep is the tree
 * @tree: the pointer to a tree structure
 * Return: size of node depth, or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
