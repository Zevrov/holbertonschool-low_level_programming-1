#include "holberton.h"

/**
 * _strspn - get length of prefix string
 *
 * @s: input pointer
 *
 * @accept: input accept pointer
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_count, a_count;

	for (s_count = 0; s[s_count] != '\0'; s_count++)
	{
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
			if (s[s_count] == accept[a_count])
				break;
		if (accept[a_count] == '\0')
			break;
	}
	return (s_count);
}
