#include "holberton.h"

/**
 * get_bit - get the bit at the index
 *
 * @n: input number
 *
 * @index: the index of the binary
 *
 * Return: converted number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	if (n & 1)
		return (1);
	return (0);
}
