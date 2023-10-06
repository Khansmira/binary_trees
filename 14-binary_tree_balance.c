#include "binary_trees.h"

/**
 * binary_tree_height_b - measures height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t L = 0;
	size_t R = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			L = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			R = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((L > R) ? L : R);
	}
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: the tree to go through
 * Return: the balanced factor of the
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int R = 0;
	int L = 0;

	if (!tree)
		return 0;
	L = ((int)binary_tree_height_b(tree->left));
	R = ((int)binary_tree_height_b(tree->right));
	return (L - R);
}
