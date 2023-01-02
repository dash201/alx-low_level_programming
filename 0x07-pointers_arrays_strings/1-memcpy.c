#include "main.h"
/**
 *_memcpy - function copies memory area
 *@dest: first paramater
 *@src: second parameter
 *@n: third parameter
 *Return: char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (i =0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
