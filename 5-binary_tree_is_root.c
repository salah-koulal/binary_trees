#include "binary_trees.h"

/**
 *binary_tree_is_root - checks if a node is a root
 *@node: a pointer to the node to check if it is a root
 *Return: return 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
