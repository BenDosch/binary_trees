#include "binary_trees.h"

/**
* binary_tree_preorder - function that goes through a binary tree using
* preorder traversall
* @tree: Pointer to the tree to check
* @func: Pointer to a function to call for each node.
*        The value in the node must be passed as a parameter to this function.
* Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		printf("%d\n", tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
