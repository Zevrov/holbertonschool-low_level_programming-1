#include "holberton.h"
#define NULL 0

/**
 * _strpbrk - get the string in any set of bytes
 *
 * @s: input pointer
 *
 * @accept: input accept pointer
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int s_count, a_count;

	for (s_count = 0; s[s_count] != '\0'; s_count++)
	{
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
			if (s[s_count] == accept[a_count])
				return (&s[s_count]);
	}
	if (accept[a_count] == '\0')
		return (&s[s_count]);
	return (NULL);
}
