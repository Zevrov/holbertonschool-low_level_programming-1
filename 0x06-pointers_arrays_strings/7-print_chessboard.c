#include "holberton.h"

/**
 * print_chessboard - print chessboard
 *
 * @a: input pointer
 *
 * Return: a
 */
void print_chessboard(char (*a)[8])
{
	int count_a = 0, count_b = 0;

	while (count_a < 8)
	{
		count_b = 0;
		while (count_b < 8)
		{
			_putchar(a[count_a][count_b]);
			count_b++;
		}
		_putchar('\n');
		count_a++;
	}
}
