#include "main.h"
/**
 *_putnb - print the number
 *@nb: the number
*/
void _putnb(int nb)
{
	char n;
	int a = 1;

	if (nb < 0)
	{
		a = -1;
		nb = nb * -1;
	}
	if (a == -1)
	{
		_putchar('-');
	}
	if (nb >= 0 && nb < 10)
	{
		n = nb + 48;
		_putchar(n);
	}
	else
	{
		_putnb(nb / 10);
		n = (nb % 10) + 48;
		_putchar(n);
	}
}
/**
 *add - add two integer
 *@a: first number
 *@b: second number
 *Return: the sum
*/
int add(int a, int b)
{
	return _putnb(a + b);
}
