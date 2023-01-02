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
 *_memset -this function fills memory with a contant byte
 *@s: first parameter
 *@b: second parameter
 *@n: third parameter
 *Return: char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = _strlen(s);
	char *cp = s;
	unsigned int i = 0;

	if (len - n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		for (; i < len; i++)
		{
			s[i] = *cp;
		}
	}
	return (s);
}
