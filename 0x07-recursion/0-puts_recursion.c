#include "holberton.h"

/**
 * _puts_recursion - print string
 *
 * @s: input pointer
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
