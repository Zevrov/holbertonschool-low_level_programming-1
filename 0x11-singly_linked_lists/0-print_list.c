#include "lists.h"

/**
 * print_list - print the items in linked list
 *
 * @h: input of linked list
 *
 * Return: count of the nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *c_list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (c_list != NULL)
	{
		if (c_list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c_list->len, c_list->str);
		c_list = c_list->next;
		count++;
	}
	return (count);
}
