#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - this inserts a tree node right
 * @parent: the root of the node
 * @value: the value of the node
 * Return: right tree node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *right_temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	right_node = binary_tree_node(parent, value);
	right_temp = parent->right;
	if (right_temp != NULL)
	{
		right_node->right = right_temp;
		right_temp->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
