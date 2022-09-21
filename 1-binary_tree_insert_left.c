#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild;

	if (!parent)
		return (NULL);

	leftChild = malloc(sizeof(binary_tree_t));

	if (!leftChild)
		return (NULL);

	if (parent->left == NULL)
		parent->left = leftChild;
	else
	{
		leftChild->left = parent->left;
		parent->left = leftChild;
		parent->left->parent = leftChild;
	}
	return (leftChild);
}
