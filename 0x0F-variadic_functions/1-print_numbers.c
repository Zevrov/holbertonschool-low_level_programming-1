#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - summ all the integers input
 *
 * @separator: input seperator string
 *
 * @n: input number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;

	if (n == 0)
		return;
	va_start(list, n);
	for (c = 0; c < n - 1; c++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(list, int), separator);
		else
			printf("%d", va_arg(list, int));
	}
	printf("%d\n", va_arg(list, int));
}
