#include "holberton.h"

/**
 * recursion - Where we will have 2 iputs to make the recursion work
 *
 * @n: input number
 *
 * @div: input divider
 *
 * Return: square root of n
 */
int recursion(int n, int div)
{
	if (div == n)
		return (-1);
	else if (div * div != n)
	{
		div++;
		return (recursion(n, div));
	}
	return (div);
}

/**
 * _sqrt_recursion - find square root of input
 *
 * @n: input number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int div = 2;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (recursion(n, div));
}
