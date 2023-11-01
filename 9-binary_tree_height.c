#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n, m;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	n = m = 0;
	n = binary_tree_height(tree->left);
	m = binary_tree_height(tree->right);

	return (1 + (n < m ? m : n));
}

