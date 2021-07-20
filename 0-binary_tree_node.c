#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is the value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;

	return (node);
}
