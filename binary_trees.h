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

/* 3. Delete */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5. Node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* 6. Pre order */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7. in order*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8. post order */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9. Height */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13. Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14. Balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 17. Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif  /* _BINARY_TREES_H_ */
