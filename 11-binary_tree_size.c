#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates size of a tree
 * @tree: pointer to the first node
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;
if (tree == NULL)
	return (0);
left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);
return (left + right + 1);
}
