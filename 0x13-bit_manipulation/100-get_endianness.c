#include "holberton.h"

/**
 * get_endianness - get the small and big enddian
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *y = (char *) &i;

	i = (int) *y;
	return (i);
}
