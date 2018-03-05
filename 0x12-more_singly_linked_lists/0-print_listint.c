#include "lists.h"

/**
 * print_list - print the items in linked list
 *
 * @h: input of linked list
 *
 * Return: count of the nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		count++;
	}
	return (count);
}
