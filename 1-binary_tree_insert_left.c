#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child
 * @parent: pointer to the parent node
 * @value: value that a node should contain
 *
 * Return: a pointer to the new node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_node;

	if (!parent)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		old_node = parent->left;
		new_node->left = old_node;
		parent->left = new_node;
		old_node->left = NULL;
		old_node->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
		parent->left = new_node;
	}

	return (new_node);
}
