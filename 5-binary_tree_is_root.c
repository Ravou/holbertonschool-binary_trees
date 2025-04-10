#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - function that cheks if a given node is a root
 * @node: Pointer to the node to check
 * Return: if is a root (1) if not (0)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
