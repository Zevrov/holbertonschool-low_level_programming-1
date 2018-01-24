#include <stdio.h>

/**
 * print_to_98 - increasing and decreasing until 98
 *
 * @n: input
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 1; a * 3 < 1024 / 3; a++)
		c = c + a * 3;
	for (b = 1; b * 5 < 1024 / 5; b++)
		c = c + b * 5;
	printf("%d\n", c);
}
