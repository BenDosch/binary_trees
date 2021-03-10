#include "binary_trees.h"

/**
* binary_tree_is_full - function that measures if a binary tree is full.
* @tree: Pointer to the tree to check
* Return: 1 on full, 0 on fail
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf = 0, rf = 0;

	if (tree)
	{
		if (tree->left && (binary_tree_is_full(tree->left) ||
			binary_tree_is_leaf(tree->left)))
			lf = 1;
		if (tree->right && (binary_tree_is_full(tree->right) ||
			binary_tree_is_leaf(tree->right)))
			rf = 1;
		if ((lf && rf) || binary_tree_is_leaf(tree))
			return (1);
	}
	return (0);
}

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: pointer to the node to check
*
* Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
