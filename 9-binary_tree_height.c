#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - this function measure the height of a tree
 * @tree: the pointer to a tree struct
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lheight, Rheight;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	Lheight = 1 + binary_tree_height(tree->left);
	Rheight = 1 + binary_tree_height(tree->right);

	if (Lheight > Rheight)
	{
		return (Lheight);
	}
	else
		return (Rheight);
}
