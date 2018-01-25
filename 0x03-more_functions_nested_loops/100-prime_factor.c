#include <stdio.h>

/**
 * main - print 1 print only prime numbers
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	long int n, div;

	div = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % div != 0)
			div++;
		else
		{
			n = n / div;
			if (div > n)
				printf("%ld", div);
		}
	}
	putchar('\n');
	return (0);
}
