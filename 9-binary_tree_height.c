#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: height of tree. if tree is NULL, return (0).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_hieght(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
