#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left of a \
 * given binary tree node.
 * @parent: The parent of the new binary tree node.
 * @value: The value of the new node to be inserted.
 *
 * Return: A ponter to the created node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL;

	if (!parent)
		return (NULL);

	leftNode = binary_tree_node(parent, value);
	if (!leftNode)
		return (NULL);

	leftNode->left = parent->left;

	if (parent->left)
		parent->left->parent = leftNode;

	parent->left = leftNode;
	return (leftNode);
}
