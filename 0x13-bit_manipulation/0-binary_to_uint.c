#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: input binary number in strings
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, pow2 = 1;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		num += (b[count] -'0') * pow2;
		count--;
		pow2 *= 2;
	}
	return (num);
}
