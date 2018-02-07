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
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
