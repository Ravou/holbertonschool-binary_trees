#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to thhe node to insert right-child in
 * @value : value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */



binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;


	if (parent == NULL)
	{
		return NULL;
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		temp = parent->right;
		temp->parent = new_node;
		parent->right = new_node;
		new_node->right = temp;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
