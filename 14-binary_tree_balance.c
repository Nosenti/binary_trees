#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
	{
		return (0);
	}

	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}

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
