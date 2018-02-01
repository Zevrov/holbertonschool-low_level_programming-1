#include "holberton.h"

/**
 * _strncpy - append the string and replace it in the dest
 *
 * @dest: output destination
 *
 * @src: input source
 *
 * @n: the sting location where to replace
 *
 * Retrun: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, f_count = 0, s_count = 0;

	while (dest[f_count] != '\0')
		f_count++;
	while (src[s_count] != '\0')
		s_count++;
	while (count < n)
	{
		if (count > s_count)
			dest[count] = '\0';
		else
			dest[count] = src[count];
		count++;
	}
	return (dest);
}
