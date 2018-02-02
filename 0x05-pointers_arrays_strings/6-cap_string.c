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
	int count = 0;

	while (str[count] != '\0')
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
		{
			count++;
			if (str[count] >= 'a' && str[count] <= 'z')
			{
				str[count] = str[count] - 32;
			}
			count--;
		}
		count++;
	}
	return (str);
}
