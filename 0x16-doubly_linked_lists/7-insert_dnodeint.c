#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a index at a given location
 *
 * @h: head of the list
 *
 * @idx: index where node is inserted
 *
 * @n: input integer
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *holder, *new;
	unsigned int c = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		holder = add_dnodeint(h, n);
		return (holder);
	}
	holder = *h;
	while (holder != NULL && c < idx)
	{
		holder = holder->next;
		c++;
	}
	if (holder != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		holder->prev->next = new;
		new->prev = holder->prev;
		new->next = holder;
		holder->prev = new;
		return (new);
	}
	else if (c == idx)
	{
		holder = add_dnodeint_end(h, n);
		return (holder);
	}
	return (NULL);
}
