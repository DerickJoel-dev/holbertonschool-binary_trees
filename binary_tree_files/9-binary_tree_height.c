#include "binary_trees.h"
/**
 * binary_tree_height - measures the ehight of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height of.
 *
 * Return: the height of the tree if it is not NULL, 0 otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_h = 0, right_h = 0;

		left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_h > right_h) ? left_h : right_h);
	}
	return (0);
}
