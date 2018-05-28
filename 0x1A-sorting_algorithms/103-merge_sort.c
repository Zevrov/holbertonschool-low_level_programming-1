#include "sort.h"

/**
 * print_parts - prints part of the list
 * @array: input array
 * @min: start of array
 * @max: end of array
 */
void print_parts(int *array, size_t min, size_t max)
{
	while (min < max)
	{
		printf("%d", array[min]);
		if (min < max - 1)
			printf(", ");
		min++;
	}
	printf("\n");
}

/**
 * list_dup - duplicates a list
 * @array: input array
 * @size: size of array
 * Return: duplicated list
 */
int *list_dup(int *array, size_t size)
{
	size_t i = 0;
	int *new;

	new = malloc(sizeof(int) * size);
	while (i < size)
	{
		new[i] = array[i];
		i++;
	}
	return (new);
}

/**
 * top_down - merge using top down method
 * @A: input left array
 * @B: input right array
 * @min: start of array
 * @mid: mid of the array
 * @max: end of array
 */
void top_down(int *A, int *B, size_t min, size_t mid, size_t max)
{
	size_t i = min, j = mid, k;

	for (k = min; k < max; k++)
	{
		if (i < mid && (j >= max || A[i] <= A[j]))
		{
			B[k] = A[i];
			i++;
		}
		else
		{
			B[k] = A[j];
			j++;
		}
	}
}

/**
 * top_down_split - split into 2
 * @A: input left array
 * @B: input right array
 * @min: start of array
 * @max: end of array
 */
void top_down_split(int *B, int *A, size_t min, size_t max)
{
	size_t mid;

	if (max - min < 2)
		return;
	mid = (min + max) / 2;
	top_down_split(A, B, min, mid);
	top_down_split(A, B, mid, max);
	printf("Merging...\n");
	printf("[left]: ");
	print_parts(A, min, mid);
	printf("[right]: ");
	print_parts(B, mid, max);
	top_down(B, A, min, mid, max);
	printf("[Done]: ");
	print_parts(A, min, max);
}

/**
 * merge_sort - sort array using merge method
 * @array: input array
 * @size: input size of array
 */
void merge_sort(int *array, size_t size)
{
	int *newlist;

	if (size == 0 || size == 1)
		return;
	newlist = list_dup(array, size);
	top_down_split(newlist, array, 0, size);
	free(newlist);
}
