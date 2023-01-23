#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 *print_strings - print string
 *@separator: first parameter
 *@n: second parameter
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *s;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("nil");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
