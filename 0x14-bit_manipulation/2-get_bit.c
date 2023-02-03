#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index.
 *@n: first parameter
 *@index: second parameter
 *Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
		;
	return ((n >> i) & 1);
}
