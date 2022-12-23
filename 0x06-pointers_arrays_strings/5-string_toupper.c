#include "main.h"
/**
 *string_toupper - lowercase string
 *@str: parameter
 *Return: char
*/
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		(str[i] >= 'a' && str[i] <= 'z') ? str[i] = str[i] - 32 : 0;
	return (str);
}
