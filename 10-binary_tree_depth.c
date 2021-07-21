#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 *
 * @tree: is a pointer to the root node
 * Return: 0 if there are no tree or type size_t.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deeptree = 0;

	if (tree != NULL && tree->parent)
	{
		deeptree = binary_tree_depth(tree->parent);
		return (deeptree + 1);

	}
	return (0);
}
