#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == NULL || grandparent->right == NULL)
	{
		return (NULL);
	}

	if (node->parent == grandparent->left)
	{
		return (grandparent->right);
	}
	else
	{
		return (grandparent->left);
	}
}
