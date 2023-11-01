#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
/**
 * is_perfect_recursive - a helper function
 * @tree: a pointer to the root node of the tree to check
 * @level: an integer
 * @height: height of the tree
 * Return: whether the tree is perfect or not
 */
int is_perfect_recursive(const binary_tree_t *tree, int level, int height)
{
	if (tree == NULL)
		return (level == height);
	if (level == height)
		return (0);
	return (is_perfect_recursive(tree->left, level + 1, height) &&
			is_perfect_recursive(tree->right, level + 1, height));
}
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: wether the binary tree is perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_tree_height(tree);

	return (is_perfect_recursive(tree, 0, height));
}
