#include "holberton.h"

/**
 * _strlen_recursion - print string in reverse
 *
 * @s: input pointer
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	s++;
	if (*s != '\0')
	{
		count += _strlen_recursion(s);
	}
	return (count);
}
