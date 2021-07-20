#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is the value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{

		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
