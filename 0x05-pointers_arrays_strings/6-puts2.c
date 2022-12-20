#include "main.h"
/**
 *puts2 - prints a string
 *@str: parameter
*/
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a - 1] == '\0' || str[a + 1] == '\0')
			break;
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
