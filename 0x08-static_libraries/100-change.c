#include <stdio.h>
#include <stdlib.h>

/**
 * main - print change amount
 *
 * @argc: size of argv
 *
 * @argv: comandline verctor agruments
 *
 * Return: 1 if no arguments 0 esle
 */
int main(int argc, char *argv[])
{
	int cent = 0, coin = 0;

	if (argc == 2)
	{
		cent = atoi(argv[1]);
		while (cent >= 25)
		{
			cent -= 25;
			coin++;
		}
		while (cent >= 10)
		{
			cent -= 10;
			coin++;
		}
		while (cent >= 5)
		{
			cent -= 5;
			coin++;
		}
		while (cent >= 2)
		{
			cent -= 2;
			coin++;
		}
		while (cent >= 1)
		{
			cent -= 1;
			coin++;
		}
		printf("%d\n", coin);
		return (0);
	}
	printf("Error\n");
	return (1);
}
