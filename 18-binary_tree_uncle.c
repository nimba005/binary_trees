#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: pointer to the sibling node else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *temp = NULL;
if (node == NULL || node->parent == NULL)
	return (NULL);
if (node->parent->left == node)
	temp = node->parent->right;
else
	temp = node->parent->left;
if (temp == NULL)
	return (NULL);
return (temp);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: pointer to uncle node else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *uncle;
if (node == NULL)
	return (NULL);
uncle = binary_tree_sibling(node->parent);
return (uncle);
}
