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
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
