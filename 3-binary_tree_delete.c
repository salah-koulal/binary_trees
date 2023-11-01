#include "binary_trees.h"

/**
 * binary_tree_delete : Delete an entire binary tree
 * @tree : a pointer the root of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
