#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * getMax - returns the maximum of two numbers
 * @a: first number
 * @b: second number
 * Return: biggest number
 */
size_t getMax(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}

	return (getMax(binary_tree_height(tree->left),
				binary_tree_height(tree->right)) + 1);
}
