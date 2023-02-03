#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *_strlen -  returns the length of a string
 *@s: parameter
 *Return: length of a string
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 *n_factor - return power of 2
 *@len: first parameter
 *@pos: second parameter
 *Return: unsigned int
*/
unsigned int n_factor(int len, int pos)
{
	int res = 1, i = 0;
	int n = (len - 1) - pos;

	for (i = 0; i < n; i++)
		res *= 2;
	return (res);
}
/**
 *binary_to_uint - converts a binary number to an integer
 *@b: binary number
 *Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int n = 0;
	unsigned int nb = 0;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = b[i] - 48;
		nb += (n * n_factor(_strlen(b), i));
	}
	return (nb);
}
