#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - function that find the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: NUll if node have no parent (NULL) or no sibling (NULL)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent->left;
	if (temp == node)
		return (node->parent->right);

	temp = node->parent->right;
	if (temp == node)
		return (node->parent->left);

	return (NULL);
}
