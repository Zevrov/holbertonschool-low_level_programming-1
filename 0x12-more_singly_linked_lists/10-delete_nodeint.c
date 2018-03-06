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
		return (pop_listint(head));
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
