#include "lists.h"

/**
 * sum_listint - sum all the int in the list
 *
 * @head: input of linked list
 *
 * Return: count of the nodes
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
