#include <stdio.h>
#include <stdlib.h>

/**
 * main - print addition of all arguments
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: 1 if no arguments 0 esle
 */
int main(int argc, char *argv[])
{
	int c = 1, num = 0;

	if (argc == 1)
	{
		printf("%d\n", num);
		return (0);
	}
	while (c < argc)
	{
		if (*(argv[c] + 0) >= '0' && *(argv[c] + 0) <= '9')
		{
			num += atoi(argv[c]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", num);
	return (0);
}
