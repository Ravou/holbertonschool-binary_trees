#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: if tree is NULL return (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL || tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
