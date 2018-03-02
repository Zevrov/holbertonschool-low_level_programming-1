#include "lists.h"

/**
 * add_node_end - add new node at the end of linked list
 *
 * @head: input head address
 *
 * @str: input string
 *
 * Return: dereference of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *holder;
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
	new->next = NULL;
	holder = *head;
	if (holder != NULL)
	{
		while (holder->next != NULL)
		{
			holder = holder->next;
		}
		holder->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
