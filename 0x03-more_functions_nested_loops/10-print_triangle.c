#include "holberton.h"

/**
 * print_triangle - draws a triangle of #
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < size - y - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
