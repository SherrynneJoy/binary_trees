#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * depth - gets the depth of a binary tree
 * @node: pointer to the root node
 * Return: depth
 */
size_t depth(const binary_tree_t *node)
{
	size_t d = 0;

	while (node)
	{
		node = node->parent;
		d++;
	}
	return (d);
}
/**
 * binary_trees_ancestor - a function that finds the LCA of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth = depth(first);
	size_t second_depth = depth(second);

	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}
	while (first && second && first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
