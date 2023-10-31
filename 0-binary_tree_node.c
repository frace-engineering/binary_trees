#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a new binary tree
 * @parent: parent node
 * @value: value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *root;


	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	parent->left = new_node;

	return (new_node);
}
