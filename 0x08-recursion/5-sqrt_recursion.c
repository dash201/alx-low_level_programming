#include "main.h"
/**
 *_sqrt_recursion - returns the natural square of number
 *@n: parameter
 *Return: number or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 0)
	{
		if (n % 2 == 0)
			return (n / _sqrt_recursion(n / 2));
		if (n % 3 == 0)
			return (n / _sqrt_recursion(n / 3));
		if (n % 5 == 0)
			return (n / _sqrt_recursion(n / 5));
	}
}
