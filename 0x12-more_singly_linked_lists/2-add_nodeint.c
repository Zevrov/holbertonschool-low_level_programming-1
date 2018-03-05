#include "lists.h"

/**
 * add_nodeint - add new node in linked list
 *
 * @head: input head address
 *
 * @n: input integer
 *
 * Return: dereference of head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
