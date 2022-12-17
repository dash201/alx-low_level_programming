#include "main.h"

/**
 *len - return the length of number
 *@len: parameter int
 *Return: a Value
*/
int len(int len)
{
	int value;

	value = 1;
	while (len / 10 != 0)
	{
		len = len / 10;
		value = value * 10;
	}
	return (value);
}
/**
 *print_number - print a number
 *@n: parameter type int
*/
void print_number(int n)
{
	int value = len(n);

	while (value != 0)
	{
		_putchar(n / n + '0');
		n = n % value;
		value = value / 10;
	}
}
