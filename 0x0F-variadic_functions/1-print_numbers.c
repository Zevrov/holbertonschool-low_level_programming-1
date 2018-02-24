#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 *
 * @separator: input seperator string
 *
 * @n: input number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	int i = 0;

	va_start(list, n);
	for (c = 0; c < n; c++)
	{
		i = va_arg(list, int);
		printf("%d", i);
		if (separator != NULL && c < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
