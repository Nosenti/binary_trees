#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to look the uncle for
 *
 * Return: pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node;

	if (!node || !node->parent)
	{
		return (NULL);
	}

	uncle_node = binary_tree_sibling(node->parent);
	return (uncle_node);
}

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node to look the sibling for
 *
 * Return: pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		if (node->parent->right)
		{
			return (node->parent->right);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		if (node->parent->left)
		{
			return (node->parent->left);
		}
		else
		{
			return (NULL);
		}
	}
}

