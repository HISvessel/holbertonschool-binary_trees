#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"



/**
 * func - this function prints a node's value
 *@n: the value in a function
 * Return: n
 */

void func(int n)
{
	printf("%d", n);
}

/**
 * binary_tree_preorder - this function does a recursive search in preorder
 * @tree: the pointer to a tree struct
 * @func: the function to call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
