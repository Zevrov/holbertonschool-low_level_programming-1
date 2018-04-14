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
	unsigned int c = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	holder = *head;
	if (index == 0)
	{
		hold_n = holder->next;
		free(holder);
		*head = hold_n;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (holder != NULL && c < index)
	{
		holder = holder->next;
		c++;
	}
	if (holder != NULL)
	{
		holder->prev->next = holder->next;
		if (holder->next != NULL)
			holder->next->prev = holder->prev;
		free(holder);
		return (1);
	}
	return (-1);
}
