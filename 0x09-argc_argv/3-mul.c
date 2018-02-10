#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of 2 arguments
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: 1 if no arguments 0 esle
 */
int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
