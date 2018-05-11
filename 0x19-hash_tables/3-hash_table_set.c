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
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || value == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		if (new->key == NULL)
		{
			free(new);
			free(new->key);
			return (0);
		}
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	new = ht->array[index];
	while (new != NULL && strcmp(new->key, key))
		new = new->next;
	if (new && strcmp(new->key, key) == 0)
	{
		free(new->value);
		new->value = strdup(value);
	}
	return (1);



}
