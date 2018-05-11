#include "hash_tables.h"

/**
 * key_index - gives index of a key
 *
 * @key: input key
 *
 * @size: size of the array of hash table
 *
 * Return:  the index of key/val of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
