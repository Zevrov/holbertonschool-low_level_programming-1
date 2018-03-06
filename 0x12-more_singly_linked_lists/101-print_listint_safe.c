#include "lists.h"

/**
 * print_listint_safe - print the list safely
 *
 * @head: input of head of linked list
 *
 * Return: count number of the nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h, *holder;
	int count = 0, n = 0;

	if (head == NULL)
		return (0);
	holder = head;
	while (holder != NULL)
	{
		printf("[%p] %d\n", (void *)holder, holder->n);
		holder = holder->next;
		count++;
		h = head;
		n = 0;
		while (n < count)
		{
			if (h == holder)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				return (count);
			}
			else
			{
				h = h->next;
				n++;
			}
		}
	}
	return (count);
}
