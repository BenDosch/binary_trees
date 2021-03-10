#include "binary_trees.h"

/**
* binary_tree_balance - function that detrmines the balance
* factor of a binary tree.
* @tree: Pointer to the tree to check
* Return: balence factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0, factor = 0;

	if (tree)
	{
		if (tree->left)
			lh = 1 + binary_tree_height(tree->left);
		if (tree->right)
			rh = 1 + binary_tree_height(tree->right);
		factor = lh - rh;
		return (factor);
	}
	return (0);
}

/**
* binary_tree_height - function that detrmines the height of a binary tree.
* @tree: Pointer to the tree to check
* Return: void
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree)
	{
		if (tree->left)
			lh = 1 + binary_tree_height(tree->left);
		if (tree->right)
			rh = 1 + binary_tree_height(tree->right);
		if (lh >= rh && lh != 0)
			return (lh);
		else if (rh > lh && rh != 0)
			return (rh);
	}
	return (0);
}
