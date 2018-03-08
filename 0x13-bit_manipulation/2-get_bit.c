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
	unsigned long int holder = 1;
	int i = 0;

	while (index > 0)
	{
		holder = holder << 1;
		index--;
	}
	if (holder > n)
		return (-1);
	if (n & holder)
		i = 1;
	return (i);
}
