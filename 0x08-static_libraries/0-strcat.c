#include "holberton.h"

/**
 * _strcat - append the string at the end
 *
 * @dest: output destination
 *
 * @src: input source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, f_count = 0, s_count = 0;

	while (dest[f_count] != '\0')
		f_count++;
	while (src[s_count] != '\0')
		s_count++;
	while (count < s_count)
	{
		dest[f_count] = src[count];
		f_count++;
		count++;
	}
	return (dest);
}
