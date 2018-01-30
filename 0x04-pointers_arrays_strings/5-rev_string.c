#include "holberton.h"

/**
 * rev_string - reverse string
 *
 * @s: Value of input of string
 */
void rev_string(char *s)
{
	int counter = 0;
	int count = 0;
	char tmp;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter - 1;
	while (counter > count)
	{
		tmp = s[count];
		s[count] = s[counter];
		s[counter] = tmp;
		counter--;
		count++;
	}
}
