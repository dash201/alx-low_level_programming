#include "main.h"
/**
 *_puts2 - prints a string
 *@str: parameter
*/
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
