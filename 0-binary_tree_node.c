#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_node - function who creates a binary tree node
 * @parent: pointer to the parent node
 * @value: Value to assign to the new node
 * Return: pointer to the new_node or (NULL) if is failure. 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);

}
