#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@str: parameter
 *Return: char
*/
char *cap_string(char *str)
{
	int a = 0;

	(str[a] >= 'a' && str[a] <= 'z') ? str[a] = str[a] - 32 : 0;
	for (a = 1; str[a] != '\0'; a++)
	{
		((str[a] >= 'a' && str[a] <= 'z')
		 && ((str[a - 1] == ' ') ||
		     str[index - 1] == '\t' ||
		     str[index - 1] == '\n' ||
		     str[index - 1] == ',' ||
		     str[index - 1] == ';' ||
		     str[index - 1] == '.' ||
		     str[index - 1] == '!' ||
		     str[index - 1] == '?' ||
		     str[index - 1] == '"' ||
		     str[index - 1] == '(' ||
		     str[index - 1] == ')' ||
		     str[index - 1] == '{' ||
		     str[index - 1] == '}' ||))
			? str[a] = str[a] - 32 : 0;
	}
	return (str);
}
