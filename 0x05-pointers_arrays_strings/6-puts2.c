#include "main.h"
/**
 *_puts - prints a string
 *@str: parameter
*/
void _puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str =+ 2;
	}
	_putchar('\n');
}
