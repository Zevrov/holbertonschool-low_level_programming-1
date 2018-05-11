#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: input hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	while (count < ht->size)
	{
		while (ht->array[count] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[count])->key,
			       (ht->array[count])->value);
			flag = 1;
			ht->array[count] = (ht->array[count])->next;
		}
		count++;
	}
	printf("}\n");


}
