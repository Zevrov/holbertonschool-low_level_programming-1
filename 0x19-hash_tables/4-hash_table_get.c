#include "hash_tables.h"

/**
 * hash_table_get - get value of hash table
 *
 * @ht: hash table
 *
 * @key: input key
 *
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *holder;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		holder = ht->array[index];
		while (strcmp(holder->key, key) != 0 && holder != NULL)
			holder = holder->next;
		if (strcmp(holder->key, key) == 0)
			return (holder->value);
	}
	return (NULL);
}
