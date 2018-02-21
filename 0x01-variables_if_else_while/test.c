#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, i2, i3, i4;

	i = '0';
	i2 = '0';
	i3 = '0';
	i4 = '0';
	for (i = '0'; i <= '9'; i++)
	{
		for (i2 = '0'; i2 <= '9'; i2++)
		{
			for (i3 = i; i3 <= '9'; i3++)
			{
				if (
				for (i4 = ; i4 <= '9'; i4++)
				{
					putchar(i);
					putchar(i2);
					putchar(' ');
					putchar(i3);
					putchar(i4);
					if (i == '9' && i2 == '8' && i3 == '9' && i4 == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
