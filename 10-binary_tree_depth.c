#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a binary tree
 * @tree: Node to measure the depth from
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	for (; tree && tree->parent; ++counter)
		tree = tree->parent;

	return (counter);
}
