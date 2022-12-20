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
 *print_rev - prints a string in reverse
 *@s: parameter
*/
void print_rev(char *s)
{
	int i = _strlen(&(*s)) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i = i - 1;
	}
	_putchar('\n');
}
