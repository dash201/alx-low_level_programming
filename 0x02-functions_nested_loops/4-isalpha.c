#include "main.h"
/**
 *_isalpha - check the alphabetic character
 *@c: parameter
 *Return: 1
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
