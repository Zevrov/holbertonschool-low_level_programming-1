#include "holberton.h"

/**
 * _isupper - check for upper case
 *
 * @c: Value of input
 *
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
