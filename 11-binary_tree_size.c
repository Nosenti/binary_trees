#include "binary_trees.h"

/**
 * binary_tree_size - measure size of a binary tree
 * @tree: the provided tree
 *
 * Return: size_t size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_tree, right_tree;

	if (!tree)
	{
		return (0);
	}

	left_tree = binary_tree_size(tree->left) + 1;
	right_tree = binary_tree_size(tree->right);

	return (left_tree + right_tree);
}
