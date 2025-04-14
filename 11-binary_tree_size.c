#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - this function measures the size of tree
 * @tree: pointer to a tree structure
 * Return: size of the tree, else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (size);
}
