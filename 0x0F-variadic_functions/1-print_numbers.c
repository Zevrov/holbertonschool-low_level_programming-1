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
	for (c = 0; c < n - 1; c++)
	{
		i = va_arg(list, int);
		if (separator != NULL)
			printf("%d%s", i, separator);
		else
			printf("%d", i);
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
