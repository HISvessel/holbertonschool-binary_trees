#include "binary_trees.h"

/**
 * binary_tree_uncle - searches for the sibling node of its parent
 * @node: pointer to the node
 * Return: the uncle, else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
		{
			return (node->parent->parent->right);
		}
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
