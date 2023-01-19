#include "function_pointers.h"
/**
 *int_index - search an integer
 *@array: array
 *@size: size of array
 *@cmp: pointer of function
 *Return: -1 or the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (array[i]);
	}
	return (-1);
}
