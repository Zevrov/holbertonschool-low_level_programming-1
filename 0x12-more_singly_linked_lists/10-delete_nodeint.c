#include "lists.h"

/**
 * delete_nodeint_at_index - removing node at index
 *
 * @head: input head address
 *
 * @index: input index
 *
 * Return: 1 if succes -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_head;
	listint_t *holder;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
		return (1);
	}
	count = 1;
	n_head = *head;
	while (count < index)
	{
		if (n_head == NULL)
			return (-1);
		n_head = n_head->next;
		count++;
	}
	holder = n_head->next;
	n_head->next = holder->next;
	free(holder);
	return (1);
}
