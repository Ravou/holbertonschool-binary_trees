#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: if tree is NULL the function return (0)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;
	size_t total_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	total_size = 1 + left_size + right_size;

	return (total_size);
}
