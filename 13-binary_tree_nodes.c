#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: is a pointer to the root node
 * Return: 0 if there are no tree or type size_t.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (binary_tree_size(tree) - binary_tree_leaves(tree));
	}
	return (0);
}
