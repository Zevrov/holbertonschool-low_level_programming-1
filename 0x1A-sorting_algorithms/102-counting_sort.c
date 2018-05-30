#include "sort.h"

/**
 * counting_sort - sort the array using counting sort method
 * @array: input array
 * @size: input size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t max, i;
	int *counter, *copy, holder;

	if (size == 0 || size == 1)
		return;
	max = array[0];
	for (i = 0; i < size; i++)
		if (array[i] > (int)max)
			max = array[i];
	max++;
	counter = malloc(sizeof(int) * max);
	if (counter == NULL)
		return;
	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
	{
		free(counter);
		return;
	}
	for (i = 0; i < size; i++)
		copy[i] = array[i];
	for (i = 0; i < max; i++)
		counter[i] = 0;
	for (i = 0; i < size; i++)
		counter[array[i]]++;
	for (i = 1; i < max; i++)
		counter[i] += counter[i - 1];
	print_array(counter, max);
	for (i = 0; i < size; i++)
	{
		holder = copy[i];
		array[counter[holder] - 1] = holder;
		counter[holder]--;
	}
	free(counter);
	free(copy);
}
