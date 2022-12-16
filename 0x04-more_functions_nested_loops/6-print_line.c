#include "main.h"

/**
 *print_line - the function that draws a straight line in the terminal.
 *@n: parameter
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
