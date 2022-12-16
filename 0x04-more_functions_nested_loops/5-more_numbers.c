#include "main.h"

/**
 *more_numbers - prints number in ten lines
*/
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (n > 9)
			{
				_putchar('1');
				k = k % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
