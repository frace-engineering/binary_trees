#include "binary_trees.h"
/**
 * binary_tree_delete - Delete a binary tree
 * @tree: the root of the binary tree
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
