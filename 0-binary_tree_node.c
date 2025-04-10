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

=======
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
	return (NULL);
}

new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

return (new_node);
>>>>>>> 4cb4aa24627ad93b22557a65e1ae6cd76d696462
}
