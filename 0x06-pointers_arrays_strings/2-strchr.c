#include "holberton.h"
#define NULL 0
/**
 * _strchr - locate character in a string
 *
 * @s: input pointer
 *
 * @c: input character
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			s = &s[count];
			return (s);
		}
	}
	return (NULL);
}
