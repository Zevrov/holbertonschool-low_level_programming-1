#include <stdlib.h>
#include <stdio.h>

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
	int c = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	while (c < len)
	{
		s[c] = str[c];
		c++;
	}
	return (s);
}
