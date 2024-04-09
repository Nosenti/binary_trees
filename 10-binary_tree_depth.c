#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a binary tree
 * @tree: the provided tree
 *
 * Return: size_t depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree || !tree->parent)
	{
		return (0);
	}

	return (binary_tree_depth(tree->parent) + 1);
}
