#include <stdio.h>

/**
 * main - print out all arguments
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int c = 0;

	while (argc > c)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
