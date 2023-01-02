#include "main.h"
/**
 *_memset -this function fills memory with a contant byte
 *@s: first parameter
 *@b: second parameter
 *@n: third parameter
 *Return: char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

       	for (i = 0; i < n; i++)
	{
		s[i] = b;
       	}

	return (s);
}
