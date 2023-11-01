#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t leftnodes = binary_tree_nodes(tree->left);
	size_t rightnodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + leftnodes + rightnodes);

	return (leftnodes + rightnodes);
}
