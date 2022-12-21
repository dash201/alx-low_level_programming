#include "main.h"
#include <stdio.h>
/**
 *_size - return the length of array
 *@s: parameter
 *Return: size
*/
int _size(int *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
/**
 *print_array -  prints n elements of an array of integers
 *@a: first parameter
 *@n: second parameter
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= _size(&(*a)))
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
}
