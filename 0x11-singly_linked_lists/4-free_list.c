#include "lists.h"

/**
 * free_list - free all linked list
 *
 * @head: input liked list of head
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
