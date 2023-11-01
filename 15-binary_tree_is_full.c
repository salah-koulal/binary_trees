#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks to see if a tree is full
 * @tree: tree to measure
 * Return: 1 if full, 0 if not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if ((!tree->left) && (!tree->right))
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right);
}
