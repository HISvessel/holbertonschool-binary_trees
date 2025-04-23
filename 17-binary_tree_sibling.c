#include "binary_trees.h"

/**
 * binary_tree_sibling - searches for node in same depth/subtree
 * @node: pointer to the node
 * Return: pointer to the sibling, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
	return (NULL);
}
