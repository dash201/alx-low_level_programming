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
	int i = _strlen(&(*s)) - 1;
	char *c;

	while (i >= 0)
	{
		*c[i] = *s[i];
		i = i - 1;
	}
	c[i+1] = '\0';
	s = c;
}
