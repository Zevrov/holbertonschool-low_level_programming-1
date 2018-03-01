#include "lists.h"

/**
 * print_list - print the items in linked list
 *
 * @h: input of linked list
 *
 * Return: count of the nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *c_list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (c_list != NULL)
	{
		c_list = c_list->next;
		count++;
	}
	return (count);
}
