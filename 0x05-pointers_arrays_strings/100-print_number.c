#include "holberton.h"

/**
 * print_number - printing number with puts
 *
 * @n: input int
 */
void print_number(int n)
{
	int count_d = 0, pow = 1;
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count_d++;
	}
	while (count_d > 1)
	{
		pow *= 10;
		count_d--;
	}
	while (pow >= 1)
	{
		_putchar(num / pow % 10 + '0');
		pow /= 10;
	}
}
