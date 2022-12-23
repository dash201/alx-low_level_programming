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
		(str[a - 1] == ' '
		 || s[i - 1] == '\n'
		 || s[i - 1] == '\t' || s[i - 1] == ','
		 || s[i - 1] == ';' || s[i - 1] == '!'
		 || s[i - 1] == '?' || s[i - 1] == '"'
		 || s[i - 1] == '(' || s[i - 1] == ')'
		 || s[i - 1] == '{' || s[i - 1] == '}'
		 || s[i - 1] == '.')
			? str[a] = str[a] - 32 : str[a] = str[a];
	}
	return (str);
}
