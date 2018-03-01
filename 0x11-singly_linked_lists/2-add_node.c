#include "lists.h"

/**
 * print_list - print the items in linked list
 *
 * @h: input of linked list
 *
 * Return: count of the nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[count] != '\0')
		count++;
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
