#include "sort.h"

/**
 * swapper - swapping a linked list
 * @holder: current location of linked list
 * Return: return the new pointer
 */
listint_t *swapper(listint_t *holder)
{
	listint_t *node_holder;

	if (holder->prev->prev != NULL)
		holder->prev->prev->next = holder;
	holder->prev->next = holder->next;
	node_holder = holder->prev->prev;
	holder->prev->prev = holder;
	if (holder->next != NULL)
		holder->next->prev = holder->prev;
	holder->next = holder->prev;
	holder->prev = node_holder;
	return (holder);
}

/**
 * cocktail_sort_list - sort linked list using cocktail sort method
 * @list: input linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current, *holder;
	int flag;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		holder = current;
		while (holder->prev != NULL)
		{
			flag = 0;
			if (holder->n < holder->prev->n)
			{
				holder = swapper(holder);
				if (holder->prev == NULL)
					*list = holder;
				print_list(*list);
				flag = 1;
			}
			if (flag == 0)
				holder = holder->prev;
		}
		current = current->next;
	}
}
