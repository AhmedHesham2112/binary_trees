#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (node == NULL)
		return (NULL);
	return (node);
}
