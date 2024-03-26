#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the leaves of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the leaves of.
 *
 * Return: The leaves of the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			leaves++;
		}
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
