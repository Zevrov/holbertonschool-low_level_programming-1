#include "holberton.h"
#include <stdio.h>

/**
 * print_number - check for numbers
 *
 * @c: Value of input character
 */
void print_number(int n)
{
	int c_digit, ten_pow, a, num, print_n;

	num = 0;
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	c_digit = 0;
	while (num != 0)
	{
		num = num / 10;
		c_digit++;
	}
	if (c_digit == 1)
		_putchar(num + '0');
	else
	{
		ten_pow = 10;
		for (a = 2; a < c_digit; a++)
			ten_pow = ten_pow * 10;
		while (c_digit > 1)
		{
			print_n = num / ten_pow % 10;
			_putchar(print_n + '0');
			ten_pow = ten_pow / 10;
			c_digit--;
		}
	}
}
