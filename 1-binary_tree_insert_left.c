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

	if (parent == NULL)
	{
		return (NULL);
	}
	new_one = malloc(sizeof(binary_tree_t));
	if (new_one == NULL)
	{
		return (NULL);
	}
	new_one->n = value;
	new_one->left = NULL;
	new_one->right = NULL;
	new_one->parent = parent;

	if (parent->left != NULL)
	{
		new_one->left = parent->left;
		new_one->left->parent = new_one;
	}
	parent->left = new_one;

	return (new_one);
}
