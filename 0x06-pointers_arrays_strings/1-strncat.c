#include "main.h"
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
 *_strncat - concatenates two strings
 *@dest: first parameter
 *@src: second parameter
 *@n: third parameter
 *Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(&(*dest));

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
