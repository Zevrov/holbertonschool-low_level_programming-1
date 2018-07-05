#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: input parent node address
 * @value: input value of the node
 * Return: node address of the binary tree or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
