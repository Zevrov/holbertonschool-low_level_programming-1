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
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

/**
 * _calloc - memory allocations
 *
 * @nmemb: input memory amount
 *
 * @size: input memory size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
        p = malloc(size * (nmemb + 1));
        if (p == NULL)
        {
                free(p);
                return (NULL);
        }
        _memset((void *)p, 0, nmemb * size);
        return (p);
}
