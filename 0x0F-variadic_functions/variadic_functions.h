#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>


/**
 * struct form - stuct to get format
 *
 * @c: character of format
 *
 * @f: pointer function
 *
 * Description: it call the right function depending on the fomrat
 */
typedef struct form
{
	char c;
	void (*f)(va_list);
} form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
