#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *one = first;
	const binary_tree_t *two = second;
	size_t height1 = binary_tree_height(first);
	size_t height2 = binary_tree_height(second);

	if (first == NULL || second == NULL)
		return (NULL);

	if (height1 >= height2)
	{
		while (two != NULL && two->parent != NULL)
		{
			one = first;
			while (one != NULL)
			{
				if (one == two->parent)
					return ((binary_tree_t *)one);
				one = one->parent;
			}
			two = two->parent;
		}
	}
	else
	{
		while (one != NULL && one->parent != NULL)
		{
			two = second;
			while (two != NULL)
			{
				if (two == one->parent)
					return ((binary_tree_t *)two);
				two = two->parent;
			}
			one = one->parent;
		}
	}
	return (NULL);
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
