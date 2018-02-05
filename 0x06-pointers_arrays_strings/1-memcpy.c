#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination pointer
 *
 * @src: source pointer
 *
 * @n: input int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*dest = src[count];
		dest++;
	}
	return (dest);
}
