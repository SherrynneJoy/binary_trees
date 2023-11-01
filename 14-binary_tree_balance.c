#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: binary tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
/**
 * binary_tree_height - measures height of tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lft = 0, rgt = 0;

	if (tree == NULL)
		return (0);
	lft = binary_tree_height(tree->left);
	rgt = binary_tree_height(tree->right);
	if (lft > rgt)
		return (lft + 1);
	else
		return (rgt + 1);
}
