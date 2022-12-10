#include <stdlib.h>
#include <stdio.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	int k, i, j;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (k < i && i < j)
				{
					putchar(k + '0');
					putchar(i + '0');
					putchar(j + '0');
					if ((k * 100) + (i * 10) + j < 789)
					{
						putchar(',');
						putchar(' ');
					}

				}

			}

		}

	}

	putchar('\n');
	return (0);
}
