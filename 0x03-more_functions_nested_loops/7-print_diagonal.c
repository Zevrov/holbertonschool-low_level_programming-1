#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: Value of first input
 */
void print_diagonal(int n)
{
	int c, cs;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (cs = 0; cs < c; cs++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
