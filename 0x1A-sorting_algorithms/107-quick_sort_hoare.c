#include "sort.h"

/**
 * partition - this partitions the array and swaps
 * @array: input array
 * @low: input low index
 * @high: input high index
 * @size: input size of array
 * Return: return the partioned index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, holder, i, j;

	pivot = array[low];
	i = low - 1;
	j = high + 1;
	while (1)
	{
		do
			i++;
		while (array[i] < pivot);
		do
			j--;
		while (array[j] > pivot);
		if (i >= j)
			return (j);
		holder = array[i];
		array[i] = array[j];
		array[j] = holder;
		print_array(array, size);
	}
	return (0);
}

/**
 * sorting - sorting the array using recursion
 * @array: input array
 * @low: input low index
 * @high: input high index
 * @size: input size of array
 */
void sorting(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		sorting(array, low, part, size);
		sorting(array, part + 1, high, size);
	}
}

/**
 * quick_sort_hoare - sory array using quick sort Hoare's method
 * @array: input array
 * @size: input size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	size_t low, high;

	if (size == 0 || size == 1)
		return;
	low = 0;
	high = size - 1;
	sorting(array, low, high, size);
}
