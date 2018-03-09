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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int c;

	c = n ^ m;
	while (c > 0)
	{
		if (c & 1)
			count++;
		c = c >> 1;
	}
	return (count);
}
