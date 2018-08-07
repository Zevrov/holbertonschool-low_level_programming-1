#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using Jump search
 * @array: the input array to search integer
 * @size: size of array
 * @value: value to search
 * Return: first index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, c = 0, p = 0;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	while (c < size)
	{
		if (array[c] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", c, array[c]);
		c += step;
	}
	p = c - step;
	if (c == size)
		p = c - 0;
	printf("Value found between indexes [%lu] and [%lu]\n", p, c);
	while (array[p] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		p++;
	}
	if (array[p] == value)
		return (p);
	return (-1);
}
