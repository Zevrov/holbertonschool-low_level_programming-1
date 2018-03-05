#include "lists.h"

/**
 * listint_len - print the length of the node
 *
 * @h: input of linked list
 *
 * Return: count of the nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (list != NULL)
	{
		list = list->next;
		count++;
	}
	return (count);
}
