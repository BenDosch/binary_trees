#include "binary_trees.h"

/**
* binary_tree_depth - function that detrmines the depth of a binary tree.
* @tree: Pointer to the tree to check
* Return: void
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t pd = 0;

	if (tree && tree->parent)
	{
		pd = 1 + binary_tree_depth(tree->parent);
		return (pd);
	}
	return (0);
}
