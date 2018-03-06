#include "lists.h"

/**
 * get_nodeint_at_int - get to the specific index of the node
 *
 * @head: input head address
 *
 * @index: input of index
 *
 * Return: reutrn the value of the node in the specific index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	while (n < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
