#include "holberton.h"

/**
 * reverse_array - reverse the array and append at end
 *
 * @a: output destination
 *
 * @n: input source
 */
void reverse_array(int *a, int n)
{
	int count = 0, tmp = 0;

	n = n - 1;
	while (count < n)
	{
		tmp = a[n];
		a[n] = a[count];
		a[count] = tmp;
		count++;
		n--;
	}
}
