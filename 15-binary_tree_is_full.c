#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Is a pointer to the root node of the tree to check.
 *
 * Return: 1 if is a complete tree, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (!tree)
		return (0);

	left_node = binary_tree_is_full(tree->left);
	right_node = binary_tree_is_full(tree->right);

	return ((left_node & right_node) ^ (!left_node & !right_node));
}
