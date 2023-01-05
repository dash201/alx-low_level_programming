#include "main.h"

/**
 *_print_rev_recursion- prints a string in reverse
 *@s: parameter
*/
void _print_rev_recursions(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
