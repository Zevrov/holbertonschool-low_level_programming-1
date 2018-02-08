#include "holberton.h"
#include <stdio.h>

/**
 * compare_e - compares the two end values
 *
 * @s1: input first string
 *
 * @s2: input second string
 *
 * Return: 0 or 1
 */
int compare_e(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (compare_e(s1 - 1, s2 - 1));
	else if (*s2 == '*')
		return (1);
	return (0);
}

/**
 * end - get to end of string
 *
 * @s: input string
 *
 * Return: end pointer
 */
char *end(char *s)
{
	if (*s != '\0')
		return (end(s + 1));
	return (s);
}

/**
 * compare - compare two initial
 *
 * @s1: input first string
 *
 * @s2: input second string
 *
 * Return: 0 or 1
 */
int compare(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (compare(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (compare_e(end(s1) - 1, end(s2) - 1));
	return (0);
}

/**
 * wildcmp - compare strings
 *
 * @s1: input string
 *
 * @s2: input compare string
 *
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else
		return (compare(s1, s2));
	return (0);
}
