#include "main.h"
/**
 *puts_half -prints half of a string
 *@str: parameter
*/
void puts_half(char *str)
{
	int len = _strlen(&(*str));
	int i;

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;
	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
