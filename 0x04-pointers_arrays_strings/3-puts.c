#include "holberton.h"

/**
 * _puts - prints the string
 *
 * @str: Value of input of string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
