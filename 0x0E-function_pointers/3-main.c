#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - do simple math
 *
 * @argc: number of argument input
 *
 * @argv: input of command line
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result;
	char c = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (c != '+' &&
	    c != '-' &&
	    c != '*' &&
	    c != '/' &&
	    c != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (c == '/' ||
				   c == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
