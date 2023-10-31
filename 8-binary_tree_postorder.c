#include "binary_trees.h"

/**
 * binary_tree_postorder - function that tranverse a tree in postorder
 * @tree: pointer to the first node
 * @func: function that prints a node
 * Return: success
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
