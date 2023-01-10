#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *create_array -  creates an array of chars, and initializes
 *it with a specific char.
 *@size: size of array
 *@c: array
 *Return: a pointer
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
		return (s);
	}
	else
		return (NULL);
}
