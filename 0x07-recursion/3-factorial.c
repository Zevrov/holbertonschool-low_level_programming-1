#include "holberton.h"

/**
 * factorial - factorials of input
 *
 * @n: input number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n > 1)
		n = n * factorial(n - 1);
	else if (n < 0)
		return (-1);
	return (n);
}
