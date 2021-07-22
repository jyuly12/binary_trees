#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Is a pointer to the node to find the sibling.
 *
 * Return: the sibling of a node or NULL if no exists.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node || !node->parent)
		return (NULL);

	left = node->parent->left;
	right = node->parent->right;

	if (node == left)
		return (right);
	else
		return (left);
}
