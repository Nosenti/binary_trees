#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal of a tree
 * @tree: tree to be traversed
 * @func: pointer to a functional call of each node of the tree
 *
 * Return: Nothing - just traverse
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
