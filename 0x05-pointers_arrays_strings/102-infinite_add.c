#include <stdio.h>

/**
 * main - increasing and decreasing until 98
 *
 * @n1: input 1
 *
 * @n2: input 2
 *
 * @r: buffer
 *
 * @size_r: size of r
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, over = 0, mix = 0;

	c = size_r;
	while (c >= 0)
	{
		mix = (n1[c] - '0') + (n2[c] - '0');
		over = mix / 10;
		if (over == 1)
		{
			r[c] = r[c] + (mix - 10) + '0';
			r[c - 1] = r[c - 1] + 1;
		}
		else
			r[c] = mix + '0';
		c--;
	}
	return (r);
}
