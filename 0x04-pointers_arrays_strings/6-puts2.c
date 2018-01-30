#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 *
 * @str: Value of input of string
 */
void puts2(char *str)
{
	int count = 0, counter = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (count >= counter)
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}
