#include "lists.h"

/**
 * add_nodeint_end - add new node in the end of linked list
 *
 * @head: input head address
 *
 * @n: input integer
 *
 * Return: dereference of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	end = *head;
	if (end != NULL)
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
