#include "holberton.h"

/**
 * flip_bits - flip the bits
 *
 * @n: input long int
 *
 * @m: input long int
 *
 * Return: compare and return the flipped numbers
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
