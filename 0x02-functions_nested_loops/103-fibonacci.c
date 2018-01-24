#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, c, n;

	a = 0;
	b = 1;
	c = 1;
	n = 0;
	for (b = c; c < 4000000;)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			n = n + c;
		}
	}
	printf("%ld", n);
	putchar('\n');
	return (0);
}
