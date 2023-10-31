#include "binary_trees.h"

/**
 * binary_tree_node - counts nodes with atleast one child
 * @tree: tree to count
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (!tree || (!tree->left && !tree->right))
	return (0);
count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
return (count);
}
