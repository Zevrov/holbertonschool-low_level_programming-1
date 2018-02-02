#include "holberton.h"

/**
 * cap_string - captialize string
 *
 * @str: input string
 *
 * Return: String
 */
char *cap_string(char *str)
{
	int count = 0, n = 0;

	while (str[n] != '\0')
		n++;
	while (count < n)
	{
		if (str[count] == ' ' ||
		    str[count] == '\t' ||
		    str[count] == '\n' ||
		    str[count] == ',' ||
		    str[count] == ';' ||
		    str[count] == '.' ||
		    str[count] == '!' ||
		    str[count] == '?' ||
		    str[count] == '"' ||
		    str[count] == '(' ||
		    str[count] == ')' ||
		    str[count] == '{' ||
		    str[count] == '}')
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] = str[count + 1] - 32;
		count++;
	}
	return (str);
}
