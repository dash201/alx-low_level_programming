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
 *puts2 - prints a string
 *@str: parameter
*/
void puts2(char *str)
{
	int a = 0;
	int len = _strlen(&(*str));

	while (str[a] != '\0')
	{
		if (str[a + 1] == '\0')
			break;
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
