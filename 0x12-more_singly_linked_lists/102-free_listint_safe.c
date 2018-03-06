#include "lists.h"

/**
 * free_listint_safe - free it safely
 *
 * @h: input of head of linked list
 *
 * Return: count number of the nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *holder, *n_head, *n_h;
	size_t count = 0, c = 0, n = 0;

	if (h == NULL)
		return (0);
	n_head = *h;
	while (n_head != NULL)
	{
		n_head = n_head->next;
		count++;
		n_h = *h;
		n = 0;
		while (n < count)
		{
			if (n_h == n_head)
			{
				n_head = NULL;
				break;
			}
			else
			{
				n_h = n_h->next;
				n++;
			}
		}
		free(n_h);
	}
	free(n_head);
	while (*h == NULL)
	{
		holder = (*h)->next;
		free(*h);
		*h = holder;
		c++;
	}
	*h = NULL;
	return (c);
}
