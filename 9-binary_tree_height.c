#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure the height of
 *
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L = 0;
	size_t R = 0;

	if (tree == NULL)
	{
		return (0);
	}

	L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	R = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (L > R ? L : R);
}
