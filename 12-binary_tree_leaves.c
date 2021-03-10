#include "binary_trees.h"

/**
* binary_tree_leaves - function that measures the leaves of a binary tree.
* @tree: Pointer to the tree to check
* Return: leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree)
	{
		if (tree->left)
			total += binary_tree_is_leaf(tree->left);
			total += binary_tree_leaves(tree->left);
		if (tree->right)
			total += binary_tree_is_leaf(tree->right);
			total += binary_tree_leaves(tree->right);
		return (total);
	}
	return (0);
}
