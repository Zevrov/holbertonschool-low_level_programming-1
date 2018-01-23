#include "holberton.h"

/**
 * print_alphabet - This will rpint all the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
