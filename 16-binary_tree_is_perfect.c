#include "binary_trees.h"
#include "10-binary_tree_depth.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - Checks if binary tree has all leaves same level
 * @tree: Is a pointer to the root node of the tree to check.
 *
 * Return: 1 if is a full tree, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/*same depth all leaves*/
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_depth(tree) == binary_tree_size(tree) + 1);

	/*if parent and child are empty*/
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/*left right subtrees are at the same level*/
	return (binary_tree_is_perfect(tree->right) &&
		binary_tree_is_perfect(tree->left));
}
