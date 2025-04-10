#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaf nodes, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If it's a leaf, return 1 */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively count leaves in both subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

