#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: first parameter
 * @index: second parameter
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | num;
	return (1);
}
