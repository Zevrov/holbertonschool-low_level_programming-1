#include <stdio.h>

/**
 * counter - count size of input
 *
 * @n: count this size
 */
int counter(char *n)
{
	int co = 0;

	while (n[co] != '\0')
		co++;
	return (co - 1);
}

/**
 * counter - count size of input
 *
 * @c: count this size
 */
int counter_check(int c1, int c2)
{
	int c = 0;

	if (c1 <= c2)
		c = c2 + 1;
	else
		c = c1 + 1;
	return (c);
}

/**
 * shifter - count size of input
 *
 * @n: count this size
 */
char *shifter(char *r)
{
	int c = 0;

	if (r[0] == '\0')
	{
		r[0] = '0';
		while (r[c] != '\0')
		{
			r[c] = r[c + 1];
			c++;
		}
	}
	return (r);
}

/**
 * infinite_add - add 2 char
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
	int c1 = 0, c2 = 0, c = 0, tmp = 1, mix = 0, tmp_c = 1;

	for (c = 0; c != size_r; c++)
		r[c] = '\0';
	c1 = counter(n1);
	c2 = counter(n2);
	c = counter_check(c1, c2);
	while (c >= 0)
	{
		if (c2 >= 0)
			tmp = n2[c2];
		mix = (n1[c1] - '0') + (tmp - '0');
		if (mix / 10 == 1)
		{
			r[c] = r[c] + (mix - 10) + '0';
			r[c - 1] = r[c - 1] + 1;
		}
		else if (mix == 9 && r[c] == 1)
		{
			r[c] = '0';
			r[c - 1] = r[c - 1] + 1;
		}
		else
			r[c] = r[c] + mix + '0';
		if (c == 0 && r[c] != '\0')
			r[c] = '1';
		if (c2 == 0)
			tmp = '0';
		c--;
		c1--;
		c2--;
		tmp_c++;
	}
	r = shifter(r);
	if (tmp_c > size_r)
		return (0);
	return (r);
}
