#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head of the list
 *
 * @index: index where node is deleted
 *
 * Return: 1 if success -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder, *hold_n;
	unsigned int c = 1;

	if (head == NULL || *head == NULL)
		return (-1);
	holder = *head;
	if (index == 0)
	{
		hold_n = holder->next;
		free(holder);
		*head = hold_n;
		return (1);
	}
	while (holder->next != NULL && c < index)
	{
		holder = holder->next;
		c++;
	}
	if (holder->next != NULL)
	{
		hold_n = holder->next->next;
		free(holder->next);
		holder->next = hold_n;
		return (1);
	}
	return (-1);
}
