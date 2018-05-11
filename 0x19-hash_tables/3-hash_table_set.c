#include "hash_tables.h"

/**
 * hash_table_set - adds element of hash table
 *
 * @ht: input hash table
 *
 * @key: input string key
 *
 * @value: input value to be stored
 *
 * Return: return 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, *holder = NULL;

	if (ht == NULL || value == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	holder = ht->array[index];
	while (holder != NULL)
	{
		if (strcmp(holder->key, key) == 0)
		{
			free(new->value);
			holder->value = strdup(value);
			return (1);
		}
		holder = holder->next;
	}
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
