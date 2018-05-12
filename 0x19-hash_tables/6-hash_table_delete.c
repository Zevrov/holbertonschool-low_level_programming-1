#include "hash_tables.h"


/**
 * hash_table_delete - delete the hash table
 *
 * @ht: input hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *holder = NULL;

	if (ht == NULL)
		return;
	while (count < ht->size)
	{
		while (ht->array[count] != NULL)
		{
			holder = ht->array[count]->next;
			free(ht->array[count]->key);
			free(ht->array[count]->value);
			free(ht->array[count]);
			ht->array[count] = holder;
		}
		count++;
	}
	free(ht->array);
	free(ht);
}
