#include "main.h"
/**
 *_strcpy - copie the string pointed to by src
 *@dest: first parameter
 *@src: second parameter
 *Return: value pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[x] = src[a];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
