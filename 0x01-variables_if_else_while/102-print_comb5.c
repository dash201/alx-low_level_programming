#include <stdlib.h>
#include <stdio.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	int h, k, i, j, sum1, sum2;

	for (h = 0; h < 10; h++)
	{
		for (k = 0; k < 10; k++)
		{
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					if (h * 10 + k < i * 10 + j)
					{
						putchar(h + '0');
						putchar(k + '0');
						putchar(' ');
						putchar(i + '0');
						putchar(j + '0');
						sum1 = h * 10 + k;
						sum2 = i * 10 + j;
						(sum1 < 98 || sum2 < 99) ? putchar(','), putchar(' ') : 0;
					}

				}

			}

		}

	}

	putchar('\n');
	return (0);
}
