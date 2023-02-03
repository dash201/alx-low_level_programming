#include "main.h"
#include <stddef.h
/**
 *binary_to_uint - converts a binary number to an integer
 *@b: binary number
 *Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int nb = 0;

	if (b == NULL)
		return (0);
	for (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		nb <<= 1;
		if (b[i] == '1')
			nb ^= 1;
		i++;
	}
	return (nb);
}
