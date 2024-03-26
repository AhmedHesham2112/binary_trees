#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the nodes of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the nodes of.
 *
 * Return: The nodes of the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			nodes++;
		}
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
