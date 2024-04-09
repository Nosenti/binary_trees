#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal of a tree
 * @tree: tree to be traversed
 * @func: pointer to a functional call of each node of the tree
 *
 * Return: Nothing - just traverse
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
