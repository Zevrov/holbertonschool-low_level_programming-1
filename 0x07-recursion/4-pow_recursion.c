#include "holberton.h"

/**
 * _pow_recursion - raise function by the power of input
 *
 * @x: input number
 *
 * @y: input power
 *
 * Return: y power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	y--;
	if (y >= 0)
		x = x * _pow_recursion(x, y);
	else
		return (-1);
	return (x);
}
