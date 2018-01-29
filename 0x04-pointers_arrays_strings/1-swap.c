#include "holberton.h"

/**
 * swap_int - change numbers to 98
 *
 * @a: Value of input
 *
 * @b: Value of input
 */
void swap_int(int *a, int *b)
{
	int a2 = *b;
	int b2 = *a;

	*a = a2;
	*b = b2;
}
