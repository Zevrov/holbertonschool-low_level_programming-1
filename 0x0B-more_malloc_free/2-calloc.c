#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat the two string input
 *
 * @s1: input first string
 *
 * @s2: input second string
 *
 * @n: input number for end
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        int *p;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
        p = malloc(size * (nmemb + 1));
        if (p == NULL)
        {
                free(p);
                return (NULL);
        }
	for (count = 0; count < size * nmemb; count++)
	{
		p[count] = 0;
	}
        return ((void *)p);
}
