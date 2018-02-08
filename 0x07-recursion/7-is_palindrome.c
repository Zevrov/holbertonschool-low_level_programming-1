#include "holberton.h"

/**
 * recursion - Where we will have 2 iputs to make the recursion work
 *
 * @n: input number
 *
 * @div: input divider
 *
 * Return: square root of n
 */
int compare(char *s, int c_s, int c_e)
{
	if (c_s > c_e)
		return (0);
	else if (s[c_s] == s[c_e])
		return (compare(s, c_s + 1, c_e - 1) + 1);
	return (0);
}

/**
 * end - get to end of string
 *
 * @s: input string
 *
 * Return: end pointer
 */
int end(char *s , int c_e)
{
	if (s[c_e] != '\0')
		return (end(s, c_e + 1));
	return (c_e);
}

/**
 * is_palindrome - check if its palindrome
 *
 * @s: input string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int c_s = 0, c_e = 0, result = 0;

	c_e = end(s, c_e);
	result = compare(s, c_s, c_e - 1);
	if (result == 0)
		return(0);
	else if ((c_e + 1) / 2 == result)
		return (1);
	return(0);
}
