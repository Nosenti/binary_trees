#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: the provided tree
 *
 * Return: size_t height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (0);
	}

	left_tree = binary_tree_height(tree->left) + 1;
	right_tree = binary_tree_height(tree->right) + 1;

	if (left_tree > right_tree)
	{
		return (left_tree);
	}
	else
	{
		return (right_tree);
	}
}
