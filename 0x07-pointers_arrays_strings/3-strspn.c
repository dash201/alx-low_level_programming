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
 *_strspn - gets length of a prefix substring
 *@s: first parameter
 *@accept: second parameter
 *Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;
	int len1 = _strlen(s);
	int len2 = _strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				n = n + 1;
			}
		}
	}
	return (n);
}
