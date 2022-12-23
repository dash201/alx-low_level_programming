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
 *equal_case - equality of words
 *@s1: first parameter
 *@s2: second parameter
 *Return: number
*/
int equal_case(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
	}
	return (0);
}
/**
 *_strcmp - compares two string
 *@s1: first parameter
 *@s2: second parameter
 *Return: char
*/
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int n1 = _strlen(s1);
	int n2 = _strlen(s2);

	if (n1 > n2)
		n = 15;
	else if (n1 < n2)
		n = -15;
	else
	{
		n = equal_case(s1, s2);
	}
	return (n);
}
