#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - print string
 *@separator: first parameter
 *@n: second parameter
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", (va_arg(a, char*)) ? va_arg(a, char*) : "nil");
		if (separator && i < (n - 1))
			print("%s", separator);
	}
	printf("\n");
	va_end(a);
}
