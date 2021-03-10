#include "binary_trees.h"

/**
* binary_tree_size - function that measures the size of a binary tree.
* @tree: Pointer to the tree to check
* Return: size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ls = 0, rs = 0, size = 0;

	if (tree)
	{
		if (tree->left)
			ls = binary_tree_size(tree->left);
		if (tree->right)
			rs = binary_tree_size(tree->right);
		size = (ls + rs) + 1;
		return (size);
	}
	return (0);
}
