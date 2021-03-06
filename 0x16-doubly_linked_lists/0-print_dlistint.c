#include "lists.h"

/**
 * print_dlistint - print elements of the list
 *
 * @h: head of the node
 *
 * Return: return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
