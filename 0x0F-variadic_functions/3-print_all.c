#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * p_char - print character
 *
 * @list: list of arguments
 */
void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * p_int - print integer
 *
 * @list: list of arguments
 */
void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * p_float - print floats
 *
 * @list: list of arguments
 */
void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * p_string - print strings
 *
 * @list: list of arguments
 */
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
 * print_all - print everything
 *
 * @format: format of arguments
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
	char *s1 = "", *s2 = ", ";

	va_start(list, format);
	while (format[c1] != '\0')
	{
		c2 = 0;
	        while (forms[c2].c != '\0')
		{
			if (format[c1] == forms[c2].c)
			{
				printf("%s", s1);
				forms[c2].f(list);
				s1 = s2;
			}
			c2++;
		}
		c1++;
	}
	printf("\n");
	va_end(list);
}
