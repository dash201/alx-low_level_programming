#include "main.h"
/**
 *print_number - print a number
 *@n: parameter type int
*/
void print_number(int n)
{
	int value = 1;

	while (n / 10 != 0)
	{
		n = n / 10;
		value = value * 10;
	}

	while (value != 0)
	{
		_putchar(n / n + '0');
		n = n % value;
		value = value / 10;
	}
}
