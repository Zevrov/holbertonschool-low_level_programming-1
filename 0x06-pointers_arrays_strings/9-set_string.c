#include "holberton.h"

/**
 * set_string - set string from pointer
 *
 * @s: input pointer
 *
 * @to: input accept pointer
 *
 * Return: s
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}
