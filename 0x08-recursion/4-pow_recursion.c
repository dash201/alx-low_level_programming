#include "main.h"
/**
 *_pow_recursion -  returns the value of x raised to the power of y
 *@x: first parameter
 *@y: second parameter
 *Return: 0 or -1
*/
int _pow_recursion(int x, int y)
{
	int i = y;
	int n;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	if (x > 0 && x < 0)
	{
		i--;
		n = x * _pow_recursion(x, i);
	}
	return (n);
}
