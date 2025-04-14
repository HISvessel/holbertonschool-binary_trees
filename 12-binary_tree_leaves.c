#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - this function returns the amount of leaves
 * @tree: the pointer to a struct
 * Return: 1 if its a leaf, else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
