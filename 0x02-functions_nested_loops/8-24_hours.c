#include "main.h"
int length_nb(int n);
void _putnd(int n);
/**
 *length_nb - give the length of a number
 *@n: the number
 *Return: The length of number
*/
int length_nb(int n)
{
	int value =1;

	while (n / 10 != 0)
	{
		value = value * 10;
	}
	return (value);
}
/**
 *_putnb - print the number
 *@n: the number in parameter
*/
void _putnb(int n)
{
	int len = length_nb(n);

	while (len != 0)
	{
		_putchar(n / len + '0');
		n = n % len;
		len = len / 10;
	}
}
/**
 *jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putnb(h);
			_puchar(':');
			_putnb(m);
			_puchar('\n');
		}
	}
}
