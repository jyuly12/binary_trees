#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node
 * return: 0 if there are no tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL, heightR = 0;

	if (tree != NULL && (tree->left || tree->right))
	{
		heightL = binary_tree_height(tree->left);
		heightR = binary_tree_height(tree->right);

		if (heightL > heightR)
			return (heightL + 1);
		else
			return (heightR + 1);
	}
	return (0);
}
