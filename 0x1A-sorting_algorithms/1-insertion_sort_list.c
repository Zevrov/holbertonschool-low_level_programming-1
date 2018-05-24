#include "sort.h"

/**
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *holder, *node_holder;
	int flag;

	current = (*list)->next;
	while (current != NULL)
	{
		holder = current;
		while (holder->prev != NULL)
		{
			flag = 0;
			if (holder->n < holder->prev->n)
			{
				if (holder->prev->prev != NULL)
					holder->prev->prev->next = holder;
				holder->prev->next = holder->next;
				node_holder = holder->prev->prev;
				holder->prev->prev = holder;
				if (holder->next != NULL)
					holder->next->prev = holder->prev;
				holder->next = holder->prev;
				holder->prev = node_holder;
				flag = 1;
				if (holder->prev == NULL)
					*list = holder;
				print_list(*list);
			}
			if (flag == 0)
				holder = holder->prev;
		}
		current = current->next;
	}
}