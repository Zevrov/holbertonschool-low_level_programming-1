#include "holberton.h"

/**
 * _strcpy - prints one char out of 2 of a string
 *
 * @dest: string value
 *
 * @src: string pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0, a = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}
	for (; a < counter; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
