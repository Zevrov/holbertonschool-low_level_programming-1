#include <stdio.h>
#include <stdlib.h>


/**
 * array_iterator - iterays arrays and prints it using pointer function
 *
 * @array: input array of integers
 *
 * @size: input size of the array
 *
 * @action: input function of printing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	for (c = 0; c < size; c++)
		action(array[c]);
}
