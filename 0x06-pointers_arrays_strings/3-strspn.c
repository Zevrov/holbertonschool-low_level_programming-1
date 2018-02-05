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
	unsigned int s_count, a_count, count;

	s_count = 0;
	while (s[s_count] == ' ')
		s_count++;
	for (; s[s_count] != '\0' && s[s_count] != ' '; s_count++)
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
			if (s[s_count] == accept[a_count])
				count++;
	return (count);
}
