#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: input memory byte size
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
