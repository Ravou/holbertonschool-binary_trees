#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, -1 if tree is NULL.
 */
int height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (((left_h > right_h) ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor of the tree, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}

