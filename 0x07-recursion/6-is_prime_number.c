#include "holberton.h"

/**
 * recursion - Where we will have 2 iputs to make the recursion work
 *
 * @n: input number
 *
 * @div: input divider
 *
 * Return: prime number
 */
int recursion(int n, int div)
{
	if (div < 0)
		return (-1);
	if (div == 0)
		return (-1);
	else if (n % div != 0)
	{
		div--;
		return (recursion(n, div));
	}
	return (div);
}

/**
 * is_prime_number - find if its prime number
 *
 * @n: input number
 *
 * Return: square root of n
 */
int is_prime_number(int n)
{
	int div = n - 1;

	if (recursion(n, div) == 1)
		return (1);
	return (0);
}
