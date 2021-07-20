#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is the value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_child = NULL;

	new_node = binary_tree_node(parent, value);

	/*Where parent is a pointer to the node to insert the left-child in*/
	if (parent->right != NULL)
	{
		old_child = parent->right;
		old_child->parent = new_node;
		new_node->right = old_child;
	}

	/*If parent already has a left-child,*/
	/*the new node must take its place, and the old*/
/*left-child must be set as the left-child of the new node.*/
		parent->right = new_node;

	return (new_node);
}
