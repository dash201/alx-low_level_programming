#include "main.h"
/**
 *_pow_recursion -  returns the value of x raised to the power of y
 *@x: first parameter
 *@y: second parameter
 *Return: 0 or -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * *y);
}
