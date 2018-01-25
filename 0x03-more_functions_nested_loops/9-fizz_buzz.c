#include <stdio.h>

/**
 * main - print 1 thourgh 100 and Fizz for every 3 and buzz for every 5
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 15 != 0)
			printf("Fizz");
		else if (n % 5 == 0 && n % 15 != 0)
			printf("Buzz");
		else if (n % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
