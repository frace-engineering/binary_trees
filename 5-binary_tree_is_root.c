#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if a node in abinary tree is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root else return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);
	return (1);
}
