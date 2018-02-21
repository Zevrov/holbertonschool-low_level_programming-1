#include <stdio.h>
#include <stdlib.h>


/**
 * int_index - this function will find matches
 *
 * @array: input array of integers
 *
 * @size: input size of array
 *
 * @cmp: input function for comparing
 *
 * Return: return -1 if nothing matches or return the location number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (cmp != NULL)
		return;
	if (size <= 0)
		return (-1);
	for (c = 0; c < size; c++)
		if (cmp(array[c]))
			return (c);
	return (-1);
}
