#include "binary_trees.h"

/**
 * binary_tree_size - measures binary tree size
 * @tree: pointer to root node of tree to measure size
 * Return: 0 if tree is NULL, otherwise tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
