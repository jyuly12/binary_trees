#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node
 * Return: 0 if there are no tree or type size_t.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, is_leaf = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			is_leaf = 1;

		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		return (left + right + is_leaf);
	}
	return (0);
}
