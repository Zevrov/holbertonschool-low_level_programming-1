#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicate string to another array
 *
 * @str: input buffer size
 *
 * Return: string or Null
 */
char *_strdup(char *str)
{
	char *s;
	int c = 0, len = strlen(str) + 1;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * len);
	while (c < len)
	{
		s[c] = str[c];
		c++;
	}
	return (s);
}
