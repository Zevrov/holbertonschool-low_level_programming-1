#include <stdio.h>
#include <stdlib.h>

/**
 * main - ptints opcodes of the main function
 *
 * @argc: number of argument input
 *
 * @argv: input of command line
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int b = 0, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (c < b)
	{
		printf("%02hhx ", ((int *)&main)[c]);
		c++;
	}
	printf("%02hhx\n", ((int *)&main)[c]);
	return (0);
}
