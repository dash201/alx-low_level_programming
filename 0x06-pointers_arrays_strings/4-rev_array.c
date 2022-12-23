#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: first parameter
 *@n: second parameter
*/
void reverse_array(int *a, int n)
{
	int tp = 0;

	for (int a = 0, b = (n - 1); a < (n - 1) || b > 0; a++, b--)
		(a < b) ? tp = str[a], str[a] = str[b], str[b] = tp : 0;
	return (str);
}
