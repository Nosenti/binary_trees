#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_depth(tree);

	return (_is_perfect(tree, depth, 0));
}

/**
 * _is_perfect - helper function to check if tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of the tree
 * @level: current level in tree
 *
 * Return: 1 if true, 0 if false
 */
int _is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (_is_perfect(tree->left, depth, level + 1) &&
		   _is_perfect(tree->right, depth, level + 1));
}

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
