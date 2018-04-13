#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

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
