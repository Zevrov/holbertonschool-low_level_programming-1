#include "holberton.h"

/**
 * times_table - print times table
 *
 */
void times_table(void)
{
	int a, b, ab, ab1, ab2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			ab = a * b;
			ab1 = ab / 10;
			ab2 = ab % 10;
			if (ab1 == 0)
				_putchar(' ');
			else
				_putchar(ab1 + '0');
			_putchar(ab2 + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
