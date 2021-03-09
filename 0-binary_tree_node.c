#include "binary_trees.h"

/**
* binary_tree_node - Function that makes a binary tree node
* @parent: pointer to parent node
* @value: value to store at node
* Return: a pointer to new node on sucess, NULL on fail.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	new = malloc(sizeof(binary_tree_t) * 1);
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
