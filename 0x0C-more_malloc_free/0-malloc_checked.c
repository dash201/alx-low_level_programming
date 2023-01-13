#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory
 *Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(siezof(int) * b);
	if (!n)
		return (98);
	return (n);
}
