#include "main.h"
#include <stdlib.h>
#include <stddef.h>
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
	c = malloc(sizeof(char) * len);
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];
	c[i] = '\0';
	return (c);
}
