#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: input pointer
 *
 * @b: constant byte
 *
 * @n: input int
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
