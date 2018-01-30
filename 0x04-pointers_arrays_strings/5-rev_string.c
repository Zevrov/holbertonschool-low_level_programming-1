#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 *
 * @s: Value of input of string
 */
void rev_string(char *s)
{
	int counter = 0;
	int count = 0;
	char rev;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter -1;
	while (counter > count)
	{
		rev = s[count];
		s[count] = s[counter];
		s[counter] = rev;
		counter--;
		count++;
	}
}
