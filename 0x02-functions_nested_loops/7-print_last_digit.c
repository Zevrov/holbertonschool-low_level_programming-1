#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: Value of input number
 *
 * Return: retur last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
