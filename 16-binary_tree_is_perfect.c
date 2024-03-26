#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes = binary_tree_size(tree);
	size_t height = binary_tree_height(tree);
	size_t perfect = power(2, height + 1) - 1;

	if (tree == NULL)
		return (0);

	if (perfect == nodes)
	{
		return (1);
	}
	return (0);
}


/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
		{
			left = 1 + binary_tree_height(tree->left);
		}

		if (tree->right)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		if (left > right)
		{
			return (left);
		}
		return (right);
	}
	return (0);
}


/**
 * power - makes power.
 * @base: base.
 * @exponent: power.
 * Return: power
 */

size_t power(size_t base, size_t exponent)
{
	size_t result = 1;

	for (size_t i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return (result);
}
