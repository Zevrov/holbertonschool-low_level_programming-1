#include <stdio.h>
#include <stdlib.h>
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

/**
 * _isdigit - check for numbers
 *
 * @c: Value of input character
 *
 * Return: 1 if number 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _isnumber - check for string is a number
 *
 * @s: Value of input string
 *
 * Return: 1 if number 0 if not
 */
int _isnumber(char *s)
{
	int ch = 0;

	while (s[ch] != '\0')
	{
		if (!_isdigit(s[ch]))
		{
			return (0);
		}
		ch++;
	}
	return (1);
}

/**
 * main - print out the multiplication of numbers
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	if (!_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		printf("Error");
		exit(98);
	}
}
