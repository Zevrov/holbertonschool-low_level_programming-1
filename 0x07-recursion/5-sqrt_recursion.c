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
	if (n == 0)
		return (0);
	else if (div == 0)
		return (-1);
	else if (n < 0)
		return (-1);
	else if (div * div != n)
	{
		div--;
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
	int div = n;

	return (recursion(n, div));
}
