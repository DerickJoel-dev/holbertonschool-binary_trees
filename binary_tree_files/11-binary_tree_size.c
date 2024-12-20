#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree.
 *
 * Return: size of tree he size the tree,
 * where size is the number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
