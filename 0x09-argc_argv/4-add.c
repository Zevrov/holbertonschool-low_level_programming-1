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
	int c = 1, ch = 0;
	long int num = 0;

	if (argc < 2)
	{
		printf("%d\n", num);
		return (0);
	}
	while (c < argc)
	{
		while (*(argv[c] + ch) != '\0')
		{
			if (*(argv[c] + ch) <= '0' || *(argv[c] + ch) >= '9')
			{
				printf("Error\n");
				return (1);
			}
			ch++;
		}
		num += atoi(argv[c]);
		c++;
	}
	printf("%d\n", num);
	return (0);
}
