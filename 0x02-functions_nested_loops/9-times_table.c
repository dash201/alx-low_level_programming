#include "main.h"
/**
 *_putnbr - print the number
 *@bn: the number
*/
void _putnbr(int nb)
{
	char n;
	int a = 1;

	(nb < 0) ? a = -1, nb = nb * -1 : 0;
	a == -1 ? _putchar('-') : 0;
	if (nb >= 0 && nb < 10)
	{
		n = nb + 48;
		_putchar(n);
	}
	else
	{
		my_put_nbr(nb / 10);
		n = (nb % 10) + 48;
		_putchar(n);
	}
}
/**
 *times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putnb(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
