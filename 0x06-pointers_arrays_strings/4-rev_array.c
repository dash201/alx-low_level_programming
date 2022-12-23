#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: first parameter
 *@n: second parameter
*/
void reverse_array(int *a, int n)
{
	int i, j, tp;

	for (i = 0, j = (n - 1); i < j; i++, i--)
		(i < j) ? tp = a[i], a[i] = a[j], a[j] = tp : 0;
}
