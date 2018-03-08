#include "holberton.h"

/**
 * set_bit - set a bit 1 in a given index
 *
 * @n: input adress of number
 *
 * @index: the index of the binary
 *
 * Return: 1 if succese and -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	*n |= 1 << index;
	return (1);
}
