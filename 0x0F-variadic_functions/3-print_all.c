#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void p_string(va_list list)
{
	char *s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_numbers - print numbers
 *
 * @format: format of the character
 */
void print_all(const char * const format, ...)
{
	form_t forms[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
		{'\0', NULL}
	};
	va_list list;
	int c1 = 0, c2 = 0;

	va_start(list, format);
	while (format[c1] != '\0')
	{
		c2 = 0;
		while (forms[c2].c != '\0' && format[c1] != forms[c2].c)
		{
			c2++;
		}
		if (format[c1 + 1] != '\0' && format[c1] == forms[c2].c)
		{
			forms[c2].f(list);
			printf(", ");
		}
		c1++;
	}
	forms[c2].f(list);
	printf("\n");
	va_end(list);
}
