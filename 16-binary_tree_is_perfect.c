#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * find_tree_size - find the total nodes of the tree
 * @height: height of the tree.
 * @base: always 2.
 *
 * Return: total nodes of the tree.
 */
int find_tree_size(int base, int height)
{
	int result = base;

	while (height > 1)
	{
		result *= base;
		height--;
	}

	return (result - 1);
}

/**
 * binary_tree_is_perfect - Checks if binary tree has all leaves same level
 * @tree: Is a pointer to the root node of the tree to check.
 *
 * Return: 1 if is a full tree, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height, tree_size, total_nodes;

	if (!tree)
		return (0);

	tree_height = binary_tree_height(tree) + 1;
	tree_size = binary_tree_size(tree);

	total_nodes = find_tree_size(2, tree_height);

	if (tree_size == total_nodes)
		return (1);
	return (0);
}
