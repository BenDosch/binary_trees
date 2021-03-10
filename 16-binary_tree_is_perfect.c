#include "binary_trees.h"

/**
* binary_tree_is_perfect - function that detrmines if the tree is perfect.
* @tree: Pointer to the tree to check
* Return: 1 on sucess, 0 on fail
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left && tree->right &&
			binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right) &&
			binary_tree_balance(tree->left) == 0 &&
			binary_tree_balance(tree->right) == 0 &&
			binary_tree_height(tree->left) == binary_tree_height(tree->right))
			return (1);
	}
	return (0);
}

/**
* binary_tree_balance - function that detrmines the balance
* factor of a binary tree.
* @tree: Pointer to the tree to check
* Return: 1 on sucess 0 on fail
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
* Return: height of tree
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

/**
* binary_tree_is_full - function that measures if a binary tree is full.
* @tree: Pointer to the tree to check
* Return: full
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
