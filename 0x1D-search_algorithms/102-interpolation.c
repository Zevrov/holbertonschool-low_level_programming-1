#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array interpolation
 * @array: the input array to search integer
 * @size: size of array
 * @value: value to search
 * Return: first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t m = 0, h = size - 1, l = 0;

	if (array == NULL)
		return (-1);
	while (array[h] != array[l] &&
	       value >= array[l] &&
	       value <= array[h])
	{
		m = l + (((double)(h - l) /
			  (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}
	m = l + (((double)(h - l) /
		  (array[h] - array[l])) * (value - array[l]));
	printf("Value checked array[%lu] is out of range\n", m);
	if (array[l] == value)
		return (l);
	else
		return (-1);
}
