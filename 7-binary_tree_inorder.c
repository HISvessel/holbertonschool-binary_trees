#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * func - this function prints the element of a node
 * @n: the integer inside of a node
 * Return: void
 */
void func(int n)
{
	printf("%d", n);
}

/**
 * binary_tree_inorder - this function traverses a tree from left to right
 * @tree: the pointer to a tree struct
 * @func: function to print number
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
