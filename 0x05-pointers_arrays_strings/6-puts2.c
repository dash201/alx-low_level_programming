#include "main.h"
#include <unistd.h>
/**
 *_putchar - print a character
 *@c: parameter
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 *_puts2 - prints a string
 *@str: parameter
*/
void _puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
