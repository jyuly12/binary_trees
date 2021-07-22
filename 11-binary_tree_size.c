#include "binary_trees.h"

/**
 * binary_tree_size - measures the depth of a node in a binary tree.
 * @tree: is a pointer to the root node
 * Return: 0 if there are no tree or type size_t.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return (left + right + 1);
	}
	return (0);
}
