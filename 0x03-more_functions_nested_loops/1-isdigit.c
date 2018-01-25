#include "holberton.h"

/**
 * _isdigit - check for numbers
 *
 * @c: Value of input character
 *
 * Return: 1 if number 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
