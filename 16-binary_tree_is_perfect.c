#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
	{
		return (0);
	}

	height = binary_tree_height(tree);

	return (t_is_perfect(tree, height, 0));
}

/**
 * t_is_perfect - helper function to check if tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of the tree
 * @level: current level in tree
 *
 * Return: 1 if true, 0 if false
 */
int t_is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (t_is_perfect(tree->left, depth, level + 1) &&
			t_is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_height > right_height) ? left_height : right_height);
}
