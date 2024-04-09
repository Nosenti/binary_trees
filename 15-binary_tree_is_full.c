#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: root node of the tree
 *
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
	{
		return (0);
	}

	if ((tree->left && !tree->right) || (tree->right && !tree->left))
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
	{
		return (1);
	}
	return (0);
}
