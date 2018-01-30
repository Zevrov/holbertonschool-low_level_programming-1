#include "holberton.h"

/**
 * puts_half - prints half of the string
 *
 * @str: Value of input of string
 */
void puts_half(char *str)
{
	int count = 0;
	int half = 0;

	while (str[count] != '\0')
	{
		count += 2;
	}
	half = count / 2;
	while (half <= count)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
