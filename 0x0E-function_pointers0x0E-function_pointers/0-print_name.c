#include <stdio.h>
#include <stdlib.h>


/**
 * print_name - prints name of input using pointer function
 *
 * @name: input of name
 *
 * @f: funciton for printing out name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
