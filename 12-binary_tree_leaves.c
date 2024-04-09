#include "binary_trees.h"

/**
 * binary_tree_leaves - measure leaves of a binary tree
 * @tree: the provided tree
 *
 * Return: leaves_t leaves of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t left_tree, right_tree;

	if (!tree)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);

	return (left_tree + right_tree);
}
