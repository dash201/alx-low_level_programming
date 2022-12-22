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
 *_strcat - concatenates two strings.
 *@dest: first parameter
 *@src: second parameter
 *Return: char pointer
*/
char *_strcat(char *dest, char *src)
{
	int len = _strlen(&dest);

	for (int i = 0; i < len && scr[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
