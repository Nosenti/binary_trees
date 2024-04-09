#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node to check whether it is a leaf or node
 * Return: 1 if leaf and 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
