#include "main.h"
#include <stddef.h>
#include <stdlib.h>
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
 *str_concat - concatenates two strings.
 *@s1: first character
 *@s2: second character
 *Return: char point or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int l1;
	unsigned int l2;
	int i;
	int j;

	if (!s1 || s1 == NULL)
		s1 = "";
	if (!s2 || s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	c = malloc(sizeof(char) + (l1 + l2));
	if (c == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (i = i, j = 0; s2[j] != '\0'; i++, j++)
		c[i] = s2[j];
	return (c);
}
