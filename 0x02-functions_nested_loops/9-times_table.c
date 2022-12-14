#include "main.h"
/**
 *times_table - Write a function that prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
