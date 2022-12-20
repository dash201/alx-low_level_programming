#include "main.h"
#include <stdio.h>
/**
 *print_array -  prints n elements of an array of integers
 *@a: first parameter
 *@n: second parameter
*/
void print_array(int *a, int n)
{
	int i;
	int tab[];

	tab = a;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", tab[i]);
		else
			printf("%d, ", tab[i]);
	}
}
