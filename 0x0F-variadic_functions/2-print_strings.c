#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 *
 * @separator: input number of arguments
 *
 * @n: Return the sum of all arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	char *s;

	va_start(list, n);
	for (c = 0; c < n; c++)
	{
		s = va_arg(list, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && c < n - 1)
			printf("%s",separator);
	}
	printf("\n");
	va_end(list);
}
