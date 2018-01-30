#include "holberton.h"

/**
 * _strlen - count the length of string
 *
 * @s: Value of input of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;
	return (length);
}
