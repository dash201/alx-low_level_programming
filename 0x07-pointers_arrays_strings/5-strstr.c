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
 *_strstr -locates a substring
 *@haystack: first parameter
 *@needle: second parameter
 *Return: char pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (i == _strlen(needle))
					return (haystack);
				i++;
			}
		}
		haystack++;
	}

	return ('\0');
}
