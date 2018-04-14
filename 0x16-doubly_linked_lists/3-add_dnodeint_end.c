#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 *
 * @head: head of the node
 *
 * @n: the new node element
 *
 * Return: return the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *holder;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	holder = *head;
	while (holder->next != NULL)
	{
		holder = holder->next;
	}
	holder->next = new;
	new->prev = holder;
	return (new);
}
