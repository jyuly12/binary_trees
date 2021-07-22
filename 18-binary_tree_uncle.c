#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Is a pointer to the node to find the uncle.
 *
 * Return: the uncle of a node or NULL if no exists.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_left, *uncle_right;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	uncle_left = node->parent->parent->left;
	uncle_right = node->parent->parent->right;

	if (node->parent == uncle_left)
		return (uncle_right);
	else
		return (uncle_left);
}
