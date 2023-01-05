#include "main.h"
/**
 * _sqrt - return square root.
 * @n: first parameter
 * @sqrt: second parameter
 * Return: the square root of n.
*/
int _sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);

	else if (sqrt == n / 2)
		return (-1);

	return (_sqrt(n, sqrt + 1));
}
/**
 *_sqrt_recursion - returns the natural square of number
 *@n: parameter
 *Return: number or -1
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, i));
}
