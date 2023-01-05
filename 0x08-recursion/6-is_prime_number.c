#include "main.h"
/**
 *is_prime_number- entry point
 *@n: parameter
 *Return: 1 or 0
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 0)
		return (0);
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
}
