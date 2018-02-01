#include "holberton.h"

/**
 * _strncat - append value at certain amount
 *
 * @dest: output destination
 *
 * @src: input source
 *
 * @n: the sting location where to append
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, s_count = 0, f_count = 0;

	while (dest[f_count] != '\0')
		f_count++;
	while (src[s_count] != '\0')
		s_count++;
	if (s_count < n)
		n = s_count;
	while (count < n)
	{
		dest[f_count] = src[count];
		f_count++;
		count++;
	}
	return (dest);
}
