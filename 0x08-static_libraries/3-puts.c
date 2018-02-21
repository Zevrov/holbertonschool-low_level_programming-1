#include "holberton.h"

/**
 * _puts - prints the string
 *
 * @str: Value of input of string
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
