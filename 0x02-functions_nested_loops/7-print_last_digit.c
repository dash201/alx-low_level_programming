#include "main.h"
/**
 *print_last_digit - print last digit
 *@l: number
 *Return: the last digit
*/
int print_last_digit(int l)
{
	int last = l % 10;

	_putchar(last);
	return (last);
}
