#include <stdlib.h>
#include <stdio.h>

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
int *array_range(int min, int max)
{
	int *a;
	int c = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (min <= max)
	{
		a[c] = min;
		min++;
		c++;
	}
	return (a);
}
