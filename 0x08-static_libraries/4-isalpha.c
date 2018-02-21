#include "holberton.h"

/**
 * _isalpha - convert all letters to 1 else 0
 *
 * @c: Value of input
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
