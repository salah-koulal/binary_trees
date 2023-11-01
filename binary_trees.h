#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/* Standard Library Calls */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
/* Binary Search Tree */
typedef struct binary_tree_s bst_t;
/* AVL Tree */
typedef struct binary_tree_s avl_t;
/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* function helps to printing tree */
void binary_tree_print(const binary_tree_t *);

/* 0. New node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);

/* 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

#endif  /* _BINARY_TREES_H_ */
