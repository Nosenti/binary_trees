#include "binary_trees.h"

/**
 * binary_tree_nodes - measure nodes of a binary tree
 * @tree: the provided tree
 *
 * Return: size_t nodes of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t left_tree = 0;
	size_t right_tree = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		left_tree = binary_tree_nodes(tree->left) + 1;
		right_tree = binary_tree_nodes(tree->right);
		return (left_tree + right_tree);

	}
	return (0);
}
