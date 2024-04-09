#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a leaf
 * @node: node to check whether it is a leaf or node
 * Return: 1 if leaf and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
