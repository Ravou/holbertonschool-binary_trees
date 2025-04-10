#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - that counts the nodes with at least 1 child
 * @tree: Pointer to the root of the tree to count the number of nodes
 * Return: (NULL) if tree is null or pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
