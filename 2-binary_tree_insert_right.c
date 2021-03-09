#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts node as the right child of anonther node
* @parent: Pointer to parent node of node to create
* @value: Value to store at new node
* Return: A pointe to new node on sucess, NULL on fail.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_r;

	new_r = malloc(sizeof(binary_tree_t));
	if (new_r == NULL)
		return (NULL);

	new_r->parent = parent;
	new_r->n = value;
	new_r->right = NULL;
	new_r->right = NULL;

	if (parent->right)
	{
		parent->right->parent = new_r;
	}
	new_r->right = parent->right;
	parent->right = new_r;
	return (new_r);
}
