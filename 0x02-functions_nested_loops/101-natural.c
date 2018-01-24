#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 1; a * 3 < 1024; a++)
		c = c + a * 3;
	for (b = 1; b * 5 < 1024; b++)
		c = c + b * 5;
	printf("%d\n", c);
	return (0);
}
