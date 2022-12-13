#include "main.h"
/**
 *print_last_digit - print last digit
 *@l: number
 *Return: the last digit
*/
int print_last_digit(int l)
{
	int last = l % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
