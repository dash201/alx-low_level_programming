#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: parameter
 *Return: length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return 1 + _strlen_recursion(s + 1);
}
