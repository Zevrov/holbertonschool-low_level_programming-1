#include "sort.h"

/**
 * heapify - creates a heap tree of the array
 * @array: input left array
 * @min: start of array
 * @max: end of array
 * @size: size of the array
 */
void heapify(int *array, size_t min, size_t max, size_t size)
{
	size_t root, i, j;
	int holder;

	root = min;
	i = min * 2 + 1;
	j = min * 2 + 2;
	if (i < max && array[i] > array[root])
		root = i;
	if (j < max && array[j] > array[root])
		root = j;
	if (root != min)
	{
		holder = array[min];
		array[min] = array[root];
		array[root] = holder;
		print_array(array, size);
		heapify(array, root, max, size);
	}
}

/**
 * heap_sort - sort array using heap method
 * @array: input array
 * @size: input size of array
 */
void heap_sort(int *array, size_t size)
{
	int holder, i;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, i, size, size);
	for (i = size - 1; i > 0; i--)
	{
		holder = array[0];
		array[0] = array[i];
		array[i] = holder;
		print_array(array, size);
		heapify(array, 0, i, size);
	}
}
