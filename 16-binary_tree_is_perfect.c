#include "binary_trees.h"

/**
 * get_depth - Returns the depth of the leftmost leaf
 * @tree: Pointer to the node
 * Return: Depth
 */
size_t get_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - Recursively checks if a tree is perfect
 * @tree: Pointer to current node
 * @depth: Expected leaf depth
 * @level: Current level
 * Return: 1 if perfect, 0 if not
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	/* Check if it's a leaf */
	if (!tree->left && !tree->right)
		return (depth == level + 1);

	/* Not perfect if only one child */
	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = get_depth(tree);
	return (is_perfect(tree, depth, 0));
}

