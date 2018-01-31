#include "holberton.h"

/**
 * _atoi - convert string to int
 *
 * @s: Value of input of string
 *
 * Return: return the int
 */
int _atoi(char *s)
{
	int counter = 0, count = 0;
	unsigned int tmp = 0;
	int tmp_n = 1;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter - 1;
	while (counter >= count)
	{
		if (s[count] == '-')
			tmp_n = tmp_n * -1;
		if (s[count] >= '0' && s[count] <= '9')
			tmp = tmp * 10 + (s[count] - '0');
		if (s[count] == ';')
			break;
		count++;
	}
	return (tmp = tmp * tmp_n);
}
