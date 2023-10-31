#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t leftheight = binary_tree_height(tree->left);
	size_t rightheight = binary_tree_height(tree->right);

	if (leftheight > rightheight)
	{
		return (leftheight + 1);
	}
	else
	{
		return (rightheight + 1);
	}
}
