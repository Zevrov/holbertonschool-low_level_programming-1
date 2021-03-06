#include "sort.h"

/**
 * c_counting_sort - sort the array using custom counting sort method
 * @array: input array
 * @size: input size of array
 * @pow: the integer digit power
 */
void c_counting_sort(int *array, size_t size, int pow)
{
	size_t max = 10, i;
	int counter[10], *copy, holder;

	for (i = 0; i < max; i++)
		counter[i] = 0;
	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return;
	for (i = 0; i < size; i++)
		copy[i] = array[i];
	for (i = 0; i < size; i++)
		counter[(array[i] / pow) % 10]++;
	for (i = 1; i < max; i++)
		counter[i] += counter[i - 1];
	for (i = size - 1; (int)i >= 0; i--)
	{
		holder = (copy[i] / pow) % 10;
		array[counter[holder] - 1] = copy[i];
		counter[holder]--;
	}
	free(copy);
}

/**
 * radix_sort - sort the array using radix sort method
 * @array: input array
 * @size: input size of array
 */
void radix_sort(int *array, size_t size)
{
	size_t i, max;

	if (size == 0 || size == 1)
		return;
	max = array[0];
	for (i = 0; i < size; i++)
		if (array[i] > (int)max)
			max = array[i];
	for (i = 1; max / i > 0; i *= 10)
	{
		c_counting_sort(array, size, i);
		print_array(array, size);
	}
}
