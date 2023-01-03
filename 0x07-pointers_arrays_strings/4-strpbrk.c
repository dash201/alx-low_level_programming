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
 *_strpbrk -search a string for any of a set bytes
 *@s: first parameter
 *@accept: second parameter
 *Return: 0 or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; n < _strlen(accept); n++)
		{
			if (*s == accept[n])
				return (s);
		}

		s++;

	}

	return ('\0');
}
