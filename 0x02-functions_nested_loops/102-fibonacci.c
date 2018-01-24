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
	for (n = 0; n < 50; n++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (n == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
