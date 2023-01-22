#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 *print_numbers - print number
 *@separator: is the string to be printed between numbers
 *@n: the number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	        if (i == (n - 1))
			printf("%d\n", va_arg(args, int));
		printf("%d%s", va_arg(args, int), separator);

	}
	printf("\n");
	va_end(args);
}
