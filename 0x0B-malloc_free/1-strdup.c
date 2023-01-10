#include "main.h"
#include <stdlib.h>
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
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *
 *@str: string
 *
 *Return: achar pointer or NULL
*/
char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i;
	char *c;

	if (!str)
		return (NULL);
	len = _strlen(str);
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		c[i] = str[i];
	return (c);
}
