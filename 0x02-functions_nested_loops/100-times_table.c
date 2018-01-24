#include "holberton.h"

/**
 * print_times_table - print times table of size n
 *
 * @n: input times table size
 */
void print_times_table(int n)
{
	int a, b, ab, ab1, ab2, ab3;

	if (!(n > 15 || n < 0))
	{
		a = 0;
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				ab = a * b;
				ab1 = ab / 100;
				ab2 = (ab / 10) % 10;
				ab3 = ab % 10;
				if (b == 0)
					_putchar('0');
				else
				{
					if (ab1 == 0)
						_putchar(' ');
					else
						_putchar(ab1 + '0');
					if (ab1 == 0 && ab2 == 0)
						_putchar(' ');
					else
						_putchar(ab2 + '0');
					_putchar(ab3 + '0');
				}
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
