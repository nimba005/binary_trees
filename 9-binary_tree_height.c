#include "binary_trees.h"

/**
 * max - finds the maximum height
 * @left: length of the left path
 * @right: height of the right path
 * Return: max between the two paths
 */
size_t max(size_t left, size_t right)
{
if (left < right)
	return (right);
return (left);
}

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the first node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (max(left, right) + 1);
}
