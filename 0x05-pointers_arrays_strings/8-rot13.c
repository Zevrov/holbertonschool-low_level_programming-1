#include "holberton.h"

/**
 * rot13 - convert to rot 13
 *
 * @str: input string
 *
 * Return: String conversion
 */
char *rot13(char *str)
{
	int count = 0, count_a;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
		count_a = 0;
		while (alpha[count_a] != '\0')
		{
			if (str[count] == alpha[count_a])
			{
				str[count] = rot13[count_a];
				break;
			}
			count_a++;
		}
		count++;
	}
	return (str);
}
