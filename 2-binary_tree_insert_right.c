#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right-child
 * @parent: pointer to the parent node
 * @value: value that a node should contain
 *
 * Return: a pointer to the new node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		old_node = parent->right;
		new_node->right = old_node;
		parent->right = new_node;
		old_node->right = NULL;
		old_node->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
		parent->right = new_node;
	}

	return (new_node);
}
