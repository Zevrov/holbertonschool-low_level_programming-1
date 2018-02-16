#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocate memory block
 *
 * @ptr: input pointer
 *
 * @old_size: input old size
 *
 * @new_size: input new size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *con;
	unsigned int c;

	con = ptr;
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ch = malloc(new_size);
	if (ch == NULL)
	{
		free(ch);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
			ch[c] = con[c];
		free(ptr);
		return (ch);
	}
	else if (old_size == new_size)
		return (ptr);
	else if (new_size < old_size)
	{
		for (c = 0; c < new_size; c++)
			ch[c] = con[c];
	}
	free(ptr);
	return (ch);
}
