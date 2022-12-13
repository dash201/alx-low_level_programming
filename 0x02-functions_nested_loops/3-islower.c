#include "main.h"
/**
 *_islower - says if the word is lower
 *@c: parameter of the function
 *Return: 1 in success
*/
int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
		return (1);
	else
		return  (0);
}
