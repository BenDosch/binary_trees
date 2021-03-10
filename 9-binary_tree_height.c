#include "binary_trees.h"

/**
* binary_tree_height - function that detrmines the height of a binary tree.
* @tree: Pointer to the tree to check
* Return: void
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree)
	{
		if (tree->left)
			lh = binary_tree_height(tree->left);
		if (tree->right)
			rh = binary_tree_height(tree->right);
		if (lh >= rh && lh != 0)
			return (lh + 1);
		else if (rh > lh && rh != 0)
			return (rh + 1);
	}
	return (0);
}
