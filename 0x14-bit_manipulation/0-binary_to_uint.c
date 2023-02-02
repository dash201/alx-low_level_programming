#include "main.h"
#include <stddef.h>
#include <stdlib.h>
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
 *binary_to_uint - converts a binary number to an integer
 *@b: binary number
 *Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	const int len = _strlen(b) - 1;
	unsigned int total = 0;
	unsigned int decval = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = len; i >= 0; i--)
	{
		if (b[i] <0 || b[i] > 1)
			return (0);
		if (b[i] == 1)
			total += decval;
		decval *= 2;
	}

	return (total);
}
