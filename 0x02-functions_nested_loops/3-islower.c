#include "holberton.h"

/**
 * _islower - convert lowercase to 0 and 1
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
