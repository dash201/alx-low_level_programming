#include "function_pointers.h"
#include <stddef.h>
/**
 *fprint - function used to print
 *@c: parameter
*/
void fprint(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
}
/**
 *print_name - print a name
 *@name: name
 *@f: pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
	f = &fprint;
	(*f)(name);
}
