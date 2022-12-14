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
 *times_table - prints the 9 times table, starting with 0.
*/
void times_table(int n)
{
	int i, j;

	if (n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			for (j = 1; j < n; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (i * j <= 9)
				{
					_putchar(' ');
				}
				_putnb(i * j);
			}
			_putchar('\n');
		}
	}
}
