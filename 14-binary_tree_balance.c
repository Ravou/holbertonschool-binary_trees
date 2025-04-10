#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	/* Calculate left height */
	if (tree->left)
		left_height = 1 + binary_tree_balance(tree->left);

	/* Calculate right height */
	if (tree->right)
		right_height = 1 + binary_tree_balance(tree->right);

	/* Return the balance factor */
	return (left_height - right_height);
}
