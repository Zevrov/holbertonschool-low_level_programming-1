#include "lists.h"

/**
 * reverse_listint - reverse the list
 *
 * @head: input head address
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *holder = NULL;
	listint_t *next_h;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next_h = (*head)->next;
		(*head)->next = holder;
		holder = *head;
		*head = next_h;
	}
	*head = holder;
	return (*head);
}
