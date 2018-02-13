#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concentrate two string
 *
 * @s1: input string
 *
 * @s2: input string
 *
 * Return: string or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0, c = 0, c2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	while (c < len1)
	{
		str[c] = s1[c];
		c++;
	}
	while (c2 < len2)
	{
		str[c] = s2[c2];
		c++;
		c2++;
	}
	return (str);
}
