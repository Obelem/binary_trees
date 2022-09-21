#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent node
 * @value: pointer to right-child's value
 * Return: right-child on success or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild = NULL;

	if (!parent)
		return (NULL);

	rightChild = binary_tree_node(parent, value);
	if (!rightChild)
		return (NULL);

	rightChild->right = parent->right;

	if (parent->right)
		parent->right->parent = rightChild;

	parent->right = rightChild;

	return (rightChild);
}
