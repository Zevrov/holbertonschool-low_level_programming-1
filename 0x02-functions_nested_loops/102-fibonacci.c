#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	long int a, b, c, n;

	a = 1;
	b = 2;
	c = 0;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (n = 0; n <= 50; n++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", b);
	}
	putchar('\n');
}
