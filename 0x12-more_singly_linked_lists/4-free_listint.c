#include "lists.h"

/**
 * free_listint - free all linked list
 *
 * @head: input liked list of head
 */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
