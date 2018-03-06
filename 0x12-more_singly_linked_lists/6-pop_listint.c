#include "lists.h"

/**
 * pop_listint - delete the first node
 *
 * @head: input head address
 *
 * Return: return head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next_n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	next_n = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_n;
	return (n);
}
