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
	binary_tree_t *left_node = NULL, *left_temp;

	left_node = binary_tree_node(parent, value);
	if (parent == NULL)
	{
		return (binary_tree_node(NULL, value));
	}

	left_temp = parent->left;
	if (left_temp != NULL)
	{
		left_node->left = left_temp;
		left_temp->parent = left_node;
	}
		parent->left = left_node;
	return (left_node);
}
