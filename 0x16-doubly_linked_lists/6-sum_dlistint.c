#include "lists.h"

/**
 * sum_dlistint - sum all of the elemetns
 *
 * @head: head of the list
 *
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
