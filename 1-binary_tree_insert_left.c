#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: root node
 * @value: integer/data in the nodes
 * Return: address of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_one;

	if (!parent)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		parent->left->n = value;
		return (parent->left);
	}
	new_one = malloc(sizeof(binary_tree_t));
	if (!new_one)
	{
		return (NULL);
	}
	new_one->n = value;
	new_one->left = NULL;
	new_one->right = NULL;
	parent->left = new_one;

	return (new_one);
}
