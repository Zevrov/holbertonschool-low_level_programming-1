#include "lists.h"

/**
 * free_listint - free all linked list
 *
 * @head: input liked list of head
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
