#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node being assessed
 * Return: 1 if root 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	else if (node->parent != NULL)
	{
		return (1);
	}

	return (0);
}
