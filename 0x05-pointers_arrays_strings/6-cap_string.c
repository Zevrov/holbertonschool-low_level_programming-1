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
		if (str[count] == 32 ||
		    str[count] == 9 ||
		    str[count] == 10 ||
		    str[count] == 44 ||
		    str[count] == 59 ||
		    str[count] == 46 ||
		    str[count] == 32 ||
		    str[count] == 63 ||
		    str[count] == 34 ||
		    str[count] == 40 ||
		    str[count] == 41 ||
		    str[count] == 123 ||
		    str[count] == 125)
		    if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
			    str[count + 1] = str[count + 1] - 32;
		count++;
	}
	return (str);
}
