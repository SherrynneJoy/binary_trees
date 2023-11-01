#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !node->parent)
		return (NULL);
	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	if (parent->right == node && parent->left != NULL)
		return (parent->left);
	else
		return (NULL);
}
