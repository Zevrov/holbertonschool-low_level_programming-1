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
        void *p;

        p = malloc(size * (nmemb + 1));
        if (p == NULL)
        {
                free(p);
                return (NULL);
        }
        return (p);
}
