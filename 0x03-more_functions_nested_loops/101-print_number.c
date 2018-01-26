#include "holberton.h"
#include <stdio.h>

/**
 * print_number - check for numbers
 *
 * @n: Value of input number
 */
void print_number(int n)
{
	int c_digit, ten_pow, a, print_n;
	int num = n;
	int num_v = n;

	c_digit = 0;
	if (n < 0)
	{
		_putchar('-');
		num_v = num_v * -1;
	}
	while (num != 0)
	{
		num = num / 10;
		c_digit++;
	}
	if (c_digit == 1)
	{
		_putchar(num_v + '0');
	}
	else if (n == 0)
		_putchar(num_v + '0');
	else
	{
		ten_pow = 10;
		for (a = 2; a < c_digit; a++)
			ten_pow *= 10;
		while (c_digit >= 1)
		{
			print_n = (num_v / ten_pow) % 10;
			_putchar(print_n + '0');
			ten_pow = ten_pow / 10;
			c_digit--;
		}
	}
}
