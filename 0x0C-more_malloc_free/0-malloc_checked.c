#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of memory
 *Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *n;
	int *ptr;
	int m = 98;

	ptr = &m;
	n = malloc(b);
	if (n == NULL)
		return (ptr);
	return (n);
}
