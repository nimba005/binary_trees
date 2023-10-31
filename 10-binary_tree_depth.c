#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the node to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL || tree->parent == NULL)
	return (0);
depth = binary_tree_depth(tree->parent);
return (depth + 1);
}
