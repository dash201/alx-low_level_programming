#include "main.h"
#include <stddef.h>
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
 *_strchr - locate character in a string
 *@s: first parameter
 *@c: second parameter
 *Return: char pointer or NULL
*/
char *_strchr(char *s, char c)
{
	int len = _strlen(s);
	int i;
	char *k = "";

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			/*for (j = 0, i = i; i < len; i++, j++)*/
				k = s[i];
			break;
		}
		else if (!(s[i] == c))
			k = '\0';
	}
	return (k);
}
