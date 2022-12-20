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
 *rev_string -reverses a string
 *@s: parameter
*/
void rev_string(char *s)
{
	int n = _strlen(&(*s)) - 1;
	char c;
	int i, a;

	for (i = 0,  a= n; i<a; i++, n--;)
	{
		c = s[i];
		s[i] = s[a];
		s[a] = c;
	}
}
