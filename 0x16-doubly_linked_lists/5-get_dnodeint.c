#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head of the list
 *
 * @index: input of index location
 *
 * Return: return node at index or null if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *holder;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	holder = head;
	while (n < index)
	{
		holder = holder->next;
		n++;
	}
	return (holder);
}
