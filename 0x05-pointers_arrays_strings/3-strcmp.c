#include "holberton.h"

/**
 * _strcmp - append the string and replace it in the dest
 *
 * @s1: output destination
 *
 * @s2: input source
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}
