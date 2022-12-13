#include "main.h"
/**
 *_abs -function absolute value
 *@n: number
 *Return: the absolute value
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
