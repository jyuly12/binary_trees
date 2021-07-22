#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: is a pointer to the root node
 * Return: 0 if there are no tree or type int.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;


	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right =  binary_tree_height(tree->right);

	if (tree->left)
		left++;
	if (tree->right)
		right++;

	return (left - right);

}
