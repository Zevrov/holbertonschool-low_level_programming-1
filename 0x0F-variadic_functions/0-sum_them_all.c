#include <stdarg.h>

/**
 * sum_them_all - summ all the integers input
 *
 * @n: input number of arguments
 *
 * Return: Return the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int c;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (c = 0; c < n; c++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
