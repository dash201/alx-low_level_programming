#include "main.h"
/**
 *_strlen -  returns the length of a string
 *@s: parameter
 *Return: length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
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
		len = ((len - 1) / 2) + 1;
	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
