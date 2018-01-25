#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, c, f, g, h, i, n;
	long int split_a1, split_a2;
	long int split_b1, split_b2;

	a = 0;
	b = 1;
	for (n = 0; n <= 98; n++)
	{
		if (n < 91)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%ld", c);
			printf(", ");
		}
		else if (n == 91)
		{
			split_a2 = a % 1000000000;
			split_a1 = a / 1000000000;
			split_b2 = b % 1000000000;
			split_b1 = b / 1000000000;
		}
		else
		{
			i = (split_a2 + split_b2) / 1000000000;
			g = (split_a2 + split_b2) - i * 1000000000;
			h = (split_a1 + split_b1) + i;
			split_a2 = split_b2;
			split_b2 = g;
			split_a1 = split_b1;
			split_b1 = h;
			printf("%ld%ld", h, g);
			if (n != 98)
				printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
