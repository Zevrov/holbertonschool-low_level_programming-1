#include "holberton.h"

/**
 * _abs - convert all letters to 1 else 0
 *
 * @n: Value of input number
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else if (n == 0)
		return (0);
	else
		return (n);
}
