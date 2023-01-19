#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator -  executes a function given as a parameter
 *@array: array
 *@size: size of array
 *@action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (name && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
