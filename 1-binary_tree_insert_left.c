#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts node as the left child of anonther node
* @parent: Pointer to parent node of node to create
* @value: Value to store at new node
* Return: A pointe to new node on sucess, NULL on fail.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_l;

	if (parent == NULL)
		return (NULL);
	new_l = malloc(sizeof(binary_tree_t));

	if (new_l == NULL)
		return (NULL);

	new_l->parent = parent;
	new_l->n = value;
	new_l->left = NULL;
	new_l->right = NULL;

	if (parent->left)
	{
		parent->left->parent = new_l;
	}
	    new_l->left = parent->left;
	    parent->left = new_l;
	return (new_l);
}
