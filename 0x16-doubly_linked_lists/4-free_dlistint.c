#include "lists.h"

/**
 * free_dlistint - free the list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
