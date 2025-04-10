#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function adds nodes to the left of root
 * @parent: the root node of the tree
 * @value: data stored in node
 * Return: the tree node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *left_temp;

	if (parent != NULL)
	{
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	left_temp = parent->left;
	parent->left = node;

	if (left_temp != NULL)
	{
		node->left = left_temp;
		left_temp->parent = node;
	}
	}
	return (node);
}
