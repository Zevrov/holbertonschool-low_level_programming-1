#include "lists.h"

/**
 * get_nodeint_at_index - get to the specific index of the node
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
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = head;
	n = 0;
	while (n < index)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
		n++;
	}
	return (h);
}
