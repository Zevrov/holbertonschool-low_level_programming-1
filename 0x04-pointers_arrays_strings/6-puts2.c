#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 *
 * @str: Value of input of string
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}
