#include "binary_trees.h"
/**
 * binary_tree_balance - checks the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));


}

#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0, m = 0;

	if (tree == NULL)
		return (0);

	n = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	m = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((n < m) ? m : n);
}

