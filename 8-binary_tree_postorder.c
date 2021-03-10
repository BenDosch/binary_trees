#include "binary_trees.h"

/**
* binary_tree_postorder - function that goes through a binary tree using
* postorder traversall
* @tree: Pointer to the tree to check
* @func: Pointer to a function to call for each node.
*        The value in the node must be passed as a parameter to this function.
* Return: void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
