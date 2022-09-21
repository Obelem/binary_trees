#include <stdio.h>
#include <stdlib.h>


/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: node value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;

	newNode->parent = parent;
	return (newNode);
}
