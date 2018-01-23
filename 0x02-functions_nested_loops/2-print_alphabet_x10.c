#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int a;

	for(n = 1; n <= 10; n++)
	{
		for(a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}	
}
