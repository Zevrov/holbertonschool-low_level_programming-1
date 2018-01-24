#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, c;

	a = 0;
	b = 1;
	c = 1;
	for (b = c; c < 4000000;)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			printf("%ld", c);
			if (c != 3524578)
				printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
