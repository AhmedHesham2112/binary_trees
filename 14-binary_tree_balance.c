#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
		{
			left = 1 + binary_tree_balance(tree->left);
		}

		if (tree->right)
		{
			right = 1 + binary_tree_balance(tree->right);
		}

		return (left - right);
	}
	return (0);
}
