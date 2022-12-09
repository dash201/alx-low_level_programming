#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -entry point
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5 && n % 10 > 5)
	{
		printf("Last digit of %d and %d is greater than 5\n", n, n % 10);
	}
	else if (n % 10 < 5)
	{
		if (n > 0)
		{
			printf("Last digit of %d and %d is less than 6 and not 0\n", n, n % 10);
		}
		else
		{
			printf("Last digit of %d and %d is less than 6 and not 0\n", n, n % 10);
		}
	}
	else if (n > 0 && n % 10 == 0)
	{
		printf("Last digit of %d and %d is 0\n", n, n % 10);
	}
	return (0);
}
