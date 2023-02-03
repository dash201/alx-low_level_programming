#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int total = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (n = 1UL << 63; i > 0; i >>= 1)
		{
			if (n & i)
			{
				_putchar('1');
				total = 1;
			}
			else if (total)
				_putchar('0');
		}
	}
}
