#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array using Linear search
 * @array: the input array to search integer
 * @size: size of array
 * @value: value to search
 * Return: first index where value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (array == NULL)
		return (-1);
	while (c < size)
	{
		printf("Value checked array[%lu] = [%d]\n", c, array[c]);
		if (array[c] == value)
			return (c);
		c++;
	}
	return (-1);
}
