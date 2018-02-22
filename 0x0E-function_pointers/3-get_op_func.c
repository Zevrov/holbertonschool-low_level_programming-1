#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - check for what operation function to call
 *
 * @s: get operation function depending on call
 *
 * Return: return NULL or result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
