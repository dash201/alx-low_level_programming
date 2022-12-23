#include "main.h"
/**
 *cap_strin - capitalizes all words of a string
 *@str: parameter
 *Return: char
*/
char *cap_string(char *str)
{
	int a = 0;

	(str[a] >= 'a' && str[a] <= 'z') ? str[a] = str[a] - 32, a++ : 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		((str[a] >= 'a' && str[a] <= 'z')
		 && (str[a - 1] == ' '))
			? str[a] = str[a] - 32 : 0;
	}
	return (str);
}
