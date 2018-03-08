#include "holberton.h"

/**
 * print_binary - convert decimals to bianry and print it
 *
 * @n: input decimal number unsinged long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 9223372036854775808ul;
	int t = 0;

	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if ((n & mask) == 0 && t != 1)
		{
			mask = mask >> 1;
			continue;
		}
		if (n & mask)
		{
			t = 1;
			_putchar('1');
		}
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
