#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder traversal of a tree
 * @tree: tree to be traversed
 * @func: pointer to a functional call of each node of the tree
 *
 * Return: Nothing - just traverse
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
