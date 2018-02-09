#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
